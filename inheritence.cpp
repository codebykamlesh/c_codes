#include <bits/stdc++.h>
using namespace std;
class Animal{
  public:
  void eat(){
    cout << "Animal is eating" << endl; 
  }
};
class Dog : public Animal{
  public:
  void bark(){
    cout << "Dog is barking" << endl;
  }
};
class Breed : public Dog{
  public:
  void type(){
    cout << "Dog is Doberman" << endl;
  }
}; 
int main(){
  Breed d;
  d.eat();
  d.bark();
  d.type();
}