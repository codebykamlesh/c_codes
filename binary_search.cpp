#include <iostream>
using namespace std;

int main() {
  int a[7] = {10,20,30,40,50,60,70};
  int low = 0;
  int high = sizeof(a) - 1;
  int find = 30;

  while (low <= high){
    int mid = (low + high)/2;
    
    if (find == a[mid]){
        cout << "Find at index " << mid << endl;
      break;
    }
    else if(find < a[mid]){
        high = mid - 1;
    }
    else{
        low = mid + 1;
    }
  }
}