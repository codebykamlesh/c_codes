#include<bits/stdc++.h>
using namespace std;

class customer{
    private:
    string name;
    long int acc_no;
    double balance;

    public:
    customer(string n, long int a, long double b){
        name = n;
        acc_no =  a;
        balance = b;
        this-> PrintDetails();
    }
    
    void PrintDetails(){
        cout<<fixed<<setprecision(6);
        cout<<"Name : "<<name<<endl<<"Account No : "<<acc_no<<endl<<"Balance : "<<balance<<endl;
        this->check_panalty();
        cout<<endl;
    }

    void check_panalty(){
        if (this->balance < 5000){
            cout<<name<<", "<<"\033[91mYou have to pay panelty\033[0m";
        }
    }

    customer(customer &x){
        name = x.name;
        acc_no =  x.acc_no;
        balance = x.balance;
    }
};

int main(){
    cout<<"\033[92m---Account Details---\033[0m"<<endl<<endl;
    customer c1("Smit", 123456789, 846645545.23);
    // c1.PrintDetails();
    // // customerobj1.check_panalty();

    customer c2("Rudram", 987456321, 741258963.12);
    // customer c2(c1);
    // c2.PrintDetails();
    // // customerobj2.check_panalty();
}