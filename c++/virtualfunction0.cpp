//using scope resolution operator
#include<iostream>
using namespace std;
class base
{
  public:
  int a;
  void read()
  {
      cout<<"enter a";
      cin>>a;
  }
  void show()
  {
      cout<<a;
  }
};
class derived1:public base
{
  public:
  int b;
  void show()
  {
    cout<<"b="<<b;
    }
};
class derived2:public base
{
  public:
  int c;
  void show()
  {
    cout<<c;
  }
};
/*class derived3:public derived1,public derived2
{
  public:
  int d;
  void showd()
  {
    cout<<"d is"<<derived1::a+b+c+d;
  }
};*/
int main()
{
  derived1 D;
  D.a=1;
  D.b=2;
  D.base::show();
}