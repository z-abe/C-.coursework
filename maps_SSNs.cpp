#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> ssnMap;
    ssnMap["Paul Brown"] = "123-45-6790";
    ssnMap["Mary Smith"] = "123-45-6791";
    ssnMap["John Smith"] = "123-45-6789";
    ssnMap["Lisa Brown"] = "123-45-6792";

    for (auto it = ssnMap.begin(); it != ssnMap.end(); it++) {
        cout << "Person " << it->second << ": " << it->first << endl;
    }

    cout << "Iterating through list..." << endl;

    string name = "John Brown";
    auto it = ssnMap.find(name);
    if (it == ssnMap.end()) {
        cout << name << " not found" << endl;
    } else {
        cout << it->first << " found " << it->second << endl;
    }

    name = "Paul Brown";
    it = ssnMap.find(name);
    if (it == ssnMap.end()) {
        cout << name << " not found" << endl;
    } else {
        cout << it->first << " found " << it->second << endl;
    }

    system("pause"); 
    return 0;
}
