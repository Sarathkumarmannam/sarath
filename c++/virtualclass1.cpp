#include<iostream>
using namespace std;
class base
{
  public:
  int a;
  void reada()
  {
      cout<<"enter a";
      cin>>a;
  }
  void displaya()
  {
      cout<<a;
  }
};
class derived1:virtual public base
{
  public:
  int b;
  void showb()
  {
    cout<<"b="<<b;
    }
};
class derived2:virtual public base
{
  public:
  int c;
  void showc()
  {
    cout<<c;
  }
};
class derived3:public derived1,public derived2
{
  public:
  int d;
  void showd()
  {
    cout<<"d is"<<a+b+c+d;
  }
};
int main()
{
  derived3 D;
  D.a=1;
  D.b=2,D.c=3,D.d=4;
  D.showd();
}
