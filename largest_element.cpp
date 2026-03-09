#include<iostream>
using namespace std;
int main()
{
    int a[7]={8,10,25,40,3,8,15};
    int max=a[0];
    for(int i=0;i<7;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    cout<<"Largest element: "<<max;
}
