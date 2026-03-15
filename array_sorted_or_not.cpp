#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << n + 1<< "th element: ";
        cin >> arr[i];
    }

    if (isSorted(arr, n)) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is NOT sorted." << endl;
    }
}
