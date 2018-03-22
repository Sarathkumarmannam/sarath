#include<iostream>
using namespace std;
class second;//forward declaration
class first
{
  int f;
  public:
  void get()
  {
      cout<<"get integer"<<endl;
      cin>>f;

  }
  friend void sum(first& t,second& d);

};
class second
{
  int s;
  public:
  void get()
  {
      cout<<"Enter n";
      cin>>s;

  }
  friend void sum(first& t,second& n);
};
void sum(first& t,second& d)
{
cout<<"sum="<<t.f+d.s;

}

int main()
{
    first a;
    second b;
    a.get();
    b.get();
    sum(a,b);
    return 0;
    return 0;
    }