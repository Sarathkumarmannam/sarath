//constructors and destructors in inheritence
//passing parameters
#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    base()
    {
        cout<<"constructor of base class \n";
    }
    ~ base()
    {
      cout<<"Destructor of base class";
    }

};
class derived:public base
{
  public:
  int d1;
  derived()
  {
      cout<<"Constructor of Derived class\n";
  }
    ~derived()
    {
        cout<<"Destructor of Derived Class\n";
    }
    };
    class derived1:public derived
    {
        public:
        derived1()
  {
      cout<<"Constructor of Derived class 1\n";
  }
    ~derived1()
    {
        cout<<"Destructor of Derived Class 1\n";
    }
    };
    int main()
    {
        derived1 d1;
        return 0;
    }
    /*
    constructor of base class
Constructor of Derived class
Constructor of Derived class 1
Destructor of Derived Class 1
Destructor of Derived Class
Destructor of base class*/