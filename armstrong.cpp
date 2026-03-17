#include <iostream>
#include <cmath>
using namespace std;

bool is_armstrong(int num) {
    int temp = num;
    int digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    int total = 0;
    while (temp > 0) {
        int digit = temp % 10;
        total += pow(digit, digits);
        temp /= 10;
    }

    return total == num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (is_armstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
}
