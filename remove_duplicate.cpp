#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "This is the array: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[index]) {
            index++;
            a[index] = a[i];
        }
    }
    n = index + 1;
    cout << "This is the new array (duplicates removed): ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}
