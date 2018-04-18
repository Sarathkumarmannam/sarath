//Bypasses Throw if input's Sum is zero
//Demonstrate Catching all Exception Kinds and
//explicit exceptions
#include<iostream>
using namespace std;
void integer(int a,int b)
{
try{
    if(a+b==0)
    cout<<"Neutralised \n";
    else if (a+b>0)
    throw "positive";
    else if (a<0)
    throw -1;
    else throw -1.1;
}
catch(const char *m)//explicitly catching integer exceptions
{
    cout<<m;
}
catch(...)//Catching all Exceptions[Rely's on other kind of exceptions]
{
    cout<<"Input arguments aren't yielding to ZERO"<<endl;
}
}
int main()
{
    int m,n;
    cout<<"Input Integers:"<<endl;
    cin>>m>>n;
    integer(m,n);
}
/*

Input Integers:
5 6
Input Integers:
-8 8
Neutralised
Input Integers:
-8 2
Input arguments aren't yielding to ZERO
*/