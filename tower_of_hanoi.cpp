#include <iostream>
using namespace std;

void hanoi(int n, char source, char target, char temporary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }

    hanoi(n - 1, source, target, temporary);
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    hanoi(n - 1, temporary, target, source);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    hanoi(n, '1', '3', '2');
    return 0;
}
