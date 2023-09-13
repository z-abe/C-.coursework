#include <iostream>
#include <vector>

using namespace std;

template<typename T>
int binarySearch(vector<T> arr, T target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> intArr = { 0, 1, 1, 2, 3, 5, 6, 13, 21, 32, 55 };
    int intTarget = 5;

    cout << "Integer test array contains:" << endl;
    for (int num : intArr) {
        cout << num << " ";

    }
    cout << endl;

    int intResult = binarySearch(intArr, intTarget);
    if (intResult == -1) {
        cout << intTarget << " is not in the array." << endl;
    }
    else {
        cout << intTarget << " is at index " << intResult << endl;
    }

    vector<string> strArr = { "head", "knees", "shoulders", "toes" };
    string strTarget = "elbows";

    cout << "String test array contains:" << endl;
    for (string str : strArr) {
        cout << str << " ";
    }
    cout << endl;

    int strResult = binarySearch(strArr, strTarget);
    if (strResult == -1) {
        cout << strTarget << " is not in the array." << endl;
    }
    else {
        cout << strTarget << " is at index " << strResult << endl;
    }

    return 0;
}
