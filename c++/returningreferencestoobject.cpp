#include<iostream>
using namespace std;
class number
{
  int num;
  public:
  void input()
  {
      cout<<"Enter a Number";
      cin>>num;
  }
  void show()
  {
      cout<<"The Minimum Number"<<num;
    }
    void min(number t)
    {
        if(t.num<num)
        show(t);
        else
        show(*this);
    }
};
    int main()
    {
        number n,n1,n2;
        n1.input();
        n2.input();
        n1.min(n2);
        return 0;
    }


