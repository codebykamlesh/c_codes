// #include <bits/stdc++.h>
// using namespace std;

// class Student{
// public:
//     string name;
//     int *data;
//     Student(string name){
//         this->name;
//         data = new int(10);
//         cout<<"Constructor is called\t"<<name<<endl;
//     }
//     ~Student(){
//         delete data;
//         cout << "Destructor is called\t"<<name<<endl;
//     }
// };

// int main(){
//     Student s1("abc");
//     Student s2("xyz");
//     Student s3("def");
// }

#include<iostream>
using namespace std;

class student {
private:
    int marks;
public:
    void setmarks (int m) {
        marks = m;
        if(marks >= 0 && marks <= 100){
            cout << "Valid marks" << endl;
        } 
        else{
            cout << "Invalid marks" << endl;
        }
    }
    void display() {
        cout << marks << endl;
    }
};

int main() {
    int m; 
    cout << "Enter marks: ";
    cin >> m;
    student s1;
    s1.setmarks(m);
    s1.display();
    return 0;
}

// #include<iostream>
// using namespace std;

// class student {
// private:
//     int marks;
// public:
//     // constructor
//     student(int m){
//         marks = m;
//         if (marks >= 0 && marks <= 100) {
//             cout << "Valid marks" << endl;
//         }
//         else{
//             cout << "Invalid marks" << endl;
//         }
//         this -> display();
//     }
//     void display() {
//         cout << "Marks = " << marks << endl;
//     }
// };

// int main() {
//     int m;
//     cout << "Enter marks: ";
//     cin >> m;
//     student s1(m);
//     return 0;
// }