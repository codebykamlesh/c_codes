#include<iostream>
using namespace std;

int main(){
    string a;
    cout<<"Enter Your Grade : ";
    cin>> a;

    if (a == "A"){
        cout<<"Excellent";
    }
    else if (a == "A+"){
        cout<<"Outstanding";
    }
    else if (a == "B+"){
        cout<<"Very Good";
    }
    else if (a == "B"){
        cout<<"Good";
    }
    else if (a == "C"){
        cout<<"Fair";
    }
    else if (a == "D"){
        cout<<"Padler";
    }
    else if (a == "F"){
        cout<<"Fail";
    }

    // switch (a)
    // {
    // case 'A':
    //     cout<<"Excellent";
    //     break;
    // case 'B':
    //     cout<<"Good";
    //     break;
    // case 'C':
    //     cout<<"Fair";
    //     break;
    // case 'D':
    //     cout<<"Padlee";
    //     break;
    // case 'F':
    //     cout<<"Fail";
    //     break;
    
    // default:cout<<"invalid";
    //     break;
    // }
    
}