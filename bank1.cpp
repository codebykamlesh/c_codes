#include <bits/stdc++.h>
using namespace std;

class Customer {
public:
    string name;
    int acc_no;
    float balance;

    Customer(string n = "", int a = 0, float b = 0.0) {
        name = n;
        acc_no = a;
        balance = b;
    }

    void display() const {
        cout << fixed << setprecision(2);
        cout << "Name: " << name << endl;
        cout << "Account number: " << acc_no << endl;
        cout << "Balance: " << balance << endl << endl;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
        cout << "New balance: " << balance << endl << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
            cout << "New balance: " << balance << endl << endl;
        }
    }
};

int main() {
    map<int, Customer> customers;
    int choice;

    while (true) {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Add Customer\n";
        cout << "2. Display All Customers\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        if (choice == 1) {
            int acc;
            cout << "Enter account number: ";
            cin >> acc;

            if (customers.find(acc) != customers.end()) {
                cout << "Account number already exists! Cannot add duplicate.\n";
            } else {
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear newline
                string name;
                float balance;
                cout << "Enter name: ";
                getline(cin, name); // allows full names with spaces
                cout << "Enter balance: ";
                cin >> balance;

                customers[acc] = Customer(name, acc, balance);
                cout << "Customer added successfully.\n";
            }
        }
        else if (choice == 2) {
            if (customers.empty()) {
                cout << "No customers available.\n";
            } else {
                for (auto &pair : customers) {
                    pair.second.display();
                }
            }
        }
        else if (choice == 3) {
            int acc; float amt;
            cout << "Enter account number: ";
            cin >> acc;
            cout << "Enter amount: ";
            cin >> amt;
            auto it = customers.find(acc);
            if (it != customers.end()) {
                it->second.deposit(amt);
            } else {
                cout << "Account number not found!\n";
            }
        }
        else if (choice == 4) {
            int acc; float amt;
            cout << "Enter account number: ";
            cin >> acc;
            cout << "Enter amount: ";
            cin >> amt;
            auto it = customers.find(acc);
            if (it != customers.end()) {
                it->second.withdraw(amt);
            } else {
                cout << "Account number not found!\n";
            }
        }
        else if (choice == 5) {
            cout << "Exiting program...\n";
            break;
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}