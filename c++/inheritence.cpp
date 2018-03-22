#include<iostream>
using namespace std;
class base
{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
    public:
    base(){ a=1,b=2,c=3;}
    void sum(){cout<<endl<<"Sum is "<<a+b+c<<endl;}

};
class derived:public base
{
  //.............
};
int main()
{
    derived obj;
    obj.sum();
    return 0;
}
//output is:Sum is 6