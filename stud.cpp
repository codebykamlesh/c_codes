#include<iostream>
using namespace std;

class student{
public:
    string name;
    int roll;

    void PrintDetails(){
        cout<<name<<" "<<roll<<endl;
    }
};

int main(){
    student s1;
    s1.name = "Mayank";
    s1.roll = 30;
    s1.PrintDetails();

    student s2;
    s2.name = "Jenil";
    s2.roll = 31;
    s2.PrintDetails();
}