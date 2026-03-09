#include<iostream>
using namespace std;

int change (int x){
    x = 20;
}

int main(){
    int a = 10;
    change(a);
    cout<<a;
}