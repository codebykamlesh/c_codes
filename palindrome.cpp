#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    cout<<"Enter a name : ";
    cin>> s ;
    int i=0;
    int j=strlen(s)-1;
    while(i<j){ 
        if(s[i]!=s[j]){
            cout<<"NOT A PALINDROME";
            break;
        }
        i++;
        j--;
    }
    if(i==j||i>j)
        cout<<"PALINDROME";
    
return 0;
}
