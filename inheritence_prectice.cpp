#include <bits/stdc++.h>
using namespace std;

class Colors{
public:
    static constexpr const char* GOLD    = "\033[38;5;136m";
    static constexpr const char* PURPLE  = "\033[38;5;129m";
    static constexpr const char* RESET   = "\033[0m";
    static constexpr const char* CYAN    = "\033[38;5;51m";
    static constexpr const char* GREEN   = "\033[38;5;46m";
    static constexpr const char* RED     = "\033[38;5;196m";
    static constexpr const char* BLUE    = "\033[38;5;27m";
    static constexpr const char* ORANGE  = "\033[38;5;208m";
    static constexpr const char* MAGENTA = "\033[38;5;201m";
};



class Employee{
public:
    Employee(){
        cout <<Colors::GOLD<<"Class Employee"<< Colors::RESET << endl; 
    }
    void showemployee(){
        cout<<Colors::CYAN<<"Employee is called"<<Colors::RESET <<endl;
    }
};
class Developer : public Employee{
public:
    Developer(){
        cout <<Colors::BLUE << "Class Developer"<<Colors::RESET << endl;
  }
    void showdeveloper(){
        cout<<Colors::GREEN<<"Developer is called"<<Colors::RESET <<endl;
  }
};
class Manager : public Employee{
public:
    Manager(){
    cout<<Colors::MAGENTA << "Class Manager"<<Colors::RESET << endl;
    }
    void showmanager(){
        cout<<Colors::ORANGE<<"Manager is called"<<Colors::RESET <<endl ;
  }
}; 
int main(){
    cout<<Colors::PURPLE<<"Calling Manager"<<Colors::RESET <<endl;
    Manager m;
    m.showemployee();
    m.showmanager();
  
    cout<<Colors::RED<<"Calling Manager"<<Colors::RESET <<endl;
    Developer d;
    d.showemployee();
    d.showdeveloper();
}