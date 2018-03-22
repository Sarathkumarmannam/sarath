#include<iostream>
using namespace std;
class sub
{
public:
int a;
public:
void display();
};
void sub::display()
{
//a=0;
cout<<a;
}
int main()
{
    sub x;
    x.a=15;
    x.display();
    return 0;
}