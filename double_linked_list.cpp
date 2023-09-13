#include <iostream>
#include <string>
using namespace std;

class node {
public:
    string name;
    node* next;
    node* prev; // new pointer for doubly linked list
};

class linkedList {
public:
    linkedList() :top(NULL), end(NULL) {}
    bool empty() { return top == NULL; }
    node* getTop() { return top; }
    void setTop(node* n) { top = n; }
    void add(string s);
    int menu();
    void remove(string s);
    void reversePrint(); // new method for doubly linked list
    friend ostream& operator<<(ostream&, const linkedList&);
    ~linkedList();
private:
    node* top;
    node* end;
};

void linkedList::remove(string s) {
    bool found = false;
    node* curr = getTop(), * prev = NULL;
    while (curr != NULL) {
        if (curr->name == s) {
            found = true;
            // found at top
            if (prev == NULL) {
                node* temp = getTop();
                setTop(curr->next);
                if (curr->next) curr->next->prev = NULL;
                else end = NULL;
                delete(temp);
            }
            // found in list - not top
            else {
                prev->next = curr->next;
                if (curr->next) curr->next->prev = prev;
                else end = prev;
                delete(curr);
            }
        }
        // not found, advance pointers
        if (!found) {
            prev = curr;
            curr = curr->next;
        }
        // found, exit loop
        else curr = NULL;
    }
    if (found) cout << "Deleted " << s << endl;
    else cout << s << " Not Found " << endl;
}

void linkedList::add(string s) {
    node* n = new node();
    n->name = s;
    n->next = NULL;
    n->prev = NULL; // set new node's prev pointer to NULL

    // take care of empty list case
    if (empty()) {
        top = n;
        end = n;
    }
    // take care of node belongs at beginning case
    else if (getTop()->name > s) {
        n->next = getTop();
        getTop()->prev = n;
        setTop(n);
    }
    // take care of inorder and end insert
    else {
        // insert in order case
        node* curr = getTop(), * prev = curr;
        while (curr != NULL) {
            if (curr->name > s) break;
            prev = curr;
            curr = curr->next;
        }
        if (curr != NULL) { // search found insert point
            n->next = curr;
            n->prev = prev;
            prev->next = n;
            curr->prev = n;
        }
        // take care of end of list insertion
        else if (curr == NULL) { // search did not find insert point
            prev->next = n;
            n->prev = prev;
            end = n;
        }
    }
}

void linkedList::reversePrint() {
    node* n = end;
    if (n == NULL) cout << "List is empty." << endl;
    else
        while (n != NULL) {
            cout << n->name << endl;
            n = n->prev;
        }
}


void main() {
	linkedList l;
	cout << l.empty() << endl;
	int option = 0;
	string s;
	bool go = true;
	while (go) {
		option = l.menu();
		switch (option) {
		case 1: cout << "enter a name: "; cin >> s; l.add(s); break;
		case 2: cout << "enter name to be deleted: "; cin >> s; l.remove(s); break;
		case 3: cout << l; break;
		case 4: l.reversePrint(); break;
		case 5: cout << "exiting" << endl; go = false; break;
		}
	}
	// l goes out of scope and calls ~linkedList()
}


ostream& operator << (ostream& os, const linkedList& ll) {
	//linkedList x = ll; // put this in and the code blows up - why?
	node* n = ll.top;
	if (n == NULL)cout << "List is empty." << endl;
	else
		while (n != NULL) {
			os << n->name << endl;
			n = n->next;
		}
	return os;
}
// return memory to heap
linkedList::~linkedList() {
	cout << "~linkedList called." << endl;
	node* curr = getTop(), * del;
	while (curr != NULL) {
		del = curr;
		curr = curr->next;
		delete(del);
	}
}
int linkedList::menu() {
	int choice = 0;
	while (choice < 1 || choice > 5) {
		cout << "\nEnter your choice" << endl;
		cout << " 1. Add a name." << endl;
		cout << " 2. Delete a name." << endl;
		cout << " 3. Show list." << endl;
		cout << " 4. Show reverse list. " << endl; // to be implemented by students
		cout << " 5. EXIT " << endl;
		cin >> choice;
	}
	return choice;
}
