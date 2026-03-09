#include<iostream>
using namespace std;

class student{
public:
    string name;
    int roll;
    
    student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }

    void PrintDetails(){
        cout<<name<<" "<<roll<<endl;
    }
};

int main(){
    student s1("Mayank", 23);
    s1.PrintDetails();
}