#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

class student{
public:
    
    student(){
        cout<<"Constructor called"<<endl;
    }

    ~student(){
        cout<<"Destructor called";
    }
};

int main(){
    student s1;
}