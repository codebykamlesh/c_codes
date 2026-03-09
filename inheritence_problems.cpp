// #include <bits/stdc++.h>
// using namespace std;
// class Animal{
//   public:
//   void eat(){
//     cout << "Animal is eating" << endl; 
//   }
// };
// class Cat : public Animal{
//     public:
//     void meow(){
//         cout<< "Cat is meowing" <<endl;
//     }
// };
// class Dog : public Animal{
//   public:
//   void bark(){
//     cout << "Dog is barking" << endl;
//   }
// };
// class Breed : public Dog{
//   public:
//   void type(){
//     cout << "Dog is Doberman" << endl;
//   }
// }; 
// int main(){
//     Breed d;
//     d.eat();
//     d.bark();
//     d.type();

//     Cat c;
//     c.eat();
//     c.meow();
// }



#include <bits/stdc++.h>
using namespace std;
class Animal{
  public:
  void eat(){
    cout << "Animal is eating" << endl; 
  }
};
class Cat : virtual public Animal{
  public:
  void meow(){
      cout<< "Cat is meowing" <<endl;
  }
};
class Dog : virtual public Animal{
  public:
  void bark(){
    cout << "Dog is barking" << endl;
  }
};
class Breed : public Dog, public Cat{
  public:
  void type(){
    cout << "Dog is Doberman" << endl << "Cat is desi" << endl;
  }
}; 
int main(){
  Breed b;
  b.type();
  b.bark();
  b.meow();
  b.eat();
}