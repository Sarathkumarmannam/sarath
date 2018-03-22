/*Program to initialise data members of a constructorr class*/
//it is automatically invoked when an object is created
//no retur7n type
//same as class name
//it's always necessary to create a default constructor while using parameterised constructorr
#include<iostream>
using namespace std;
class cons{
    public:
    int a,b,c;
    char x,y;
    public:
    cons()//default
    {
        a=9999;
    }
    cons(int p,char q)
    {
        x=q;
        b=p;
        }
    cons(char y,int c);
    void display()
    {
        cout<<a<<"----"<<endl;
        }
    void display1()
    {
        cout<<x<<"----"<<b<<endl;
        }
    void display2()
    {
        cout<<y<<"----"<<c<<endl;
        }


};
cons::cons(char y,int c)
{
    y='P';
    c=25;
}
int main()
{
cons obj;
cons obj1(1,'a');
cons obj2('b',2);
obj.display();
obj1.display1();
obj2.display2();
return 0;
}
