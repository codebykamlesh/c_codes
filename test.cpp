#include <bits/stdc++.h>
using namespace std;

void counter(){
    static int i = 0;
    i++;
    cout << "Counter value : " << i << endl;
}

int main(){
    counter();
    counter();
    counter();
}