#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << i + 1 << "th elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool hasDuplicate = false;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << "Duplicate found: " << arr[i] << endl;
                hasDuplicate = true;
                break;
            }
        }
        if (hasDuplicate) break;
    }
    if (!hasDuplicate) {
        cout << "No duplicates in the array." << endl;
    }
}
