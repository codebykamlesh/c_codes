#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    int year;

    void PrintDetails(){
        cout<<brand<<" "<<year<<endl;
    }
};

int main(){
    car carobj1;
    carobj1.brand = "BMW";
    carobj1.year = 2023;
    carobj1.PrintDetails();

    car carobj2;
    carobj2.brand = "AUDI";
    carobj2.year = 2015;
    carobj2.PrintDetails();
}