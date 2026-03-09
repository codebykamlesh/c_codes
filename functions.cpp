#include<iostream>
using namespace std;

int addition(int a, int b){
    return a + b;
}
int subtraction(int a, int b){
    return a - b;
}
int multiplication(int a, int b){
    return a * b;
}
float division(float a, int b){
    return a / b;
}

int main(){
    int a, b;
    cout<<"Enter Two No : ";
    cin>> a >> b;
    cout<<"The Additon is "<< addition(a, b) <<endl;
    cout<<"The Subtraction is "<< subtraction(a, b) <<endl;
    cout<<"The Multiplicatin is "<< multiplication(a, b) <<endl;
    cout<<"The Division is "<< division(a, b) <<endl;
}