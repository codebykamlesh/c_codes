#include<iostream>
using namespace std;

int main(){
    //     int a, b;
    //     cout<<"Enter Two No : ";
    //     cin>> a >> b;
    //     cout<<"Sum = " <<a + b << endl;
    //     cout<<"Sub = " <<a - b << endl;
    //     cout<<"Mul = " <<a  * b << endl;
    //     cout<<"Div = " <<a / b << endl;
    // }


//     int a;
//     cout<<"Enter a No : ";
//     cin>> a;
//     if (a % 2 == 0){
//         cout<<"The No is Even";
//     }
    
//     else{
//             cout<<"The No is Odd";
//     }
// }

float a;
cout<<"Enter Your Percentage :";
cin>> a;

if (a>100){
    cout<<"Enter Your Valid Percentage....";
}
else if (a>=90 && a<=100){
    cout<<"Your Grade is A+";
}
else if (a>=80 && a<90){
    cout<<"Your Grade is A";
}
else if (a>=70 && a<80){
    cout<<"Your Grade is b+";
}
else if (a>=60 && a<70){
    cout<<"Your Grade is B";
}
else if (a>=50 && a<60){
    cout<<"Your Grade is C";
}
else if (a>=40 && a<50){
    cout<<"Your Grade is D";
}
else {
    cout<<"You are Failed...!!";
}

}