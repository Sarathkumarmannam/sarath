//constructors and destructors in inheritence
#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    base(int m)
    {
        cout<<"constructor of base class"<< m <<"\n";
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
  derived(int m):base(3)
  {
      cout<<"Constructor of Derived class"<<m<<"\n";
  }
    ~derived()
    {
        cout<<"Destructor of Derived Class\n";
    }
    };
    class derived1:public derived
    {
        public:
        derived1(int m):derived(2)
  {
      cout<<"Constructor of Derived class 1"<<m<<"\n";
  }
    ~derived1()
    {
        cout<<"Destructor of Derived Class 1\n";
    }
    };
    int main()
    {
        derived1 d1(1);
        return 0;
    }
