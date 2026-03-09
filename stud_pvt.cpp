#include<iostream>
using namespace std;

class student{
private:
    string name;
    int roll;

public: 
    void set(string n, int r){
        name = n;
        roll = r;
    }

    void PrintDetails(){
        cout<<name<<" "<<roll<<endl;
    }
};

int main(){
    student s1;
    s1.set("Mayank", 30);
    s1.PrintDetails();
}