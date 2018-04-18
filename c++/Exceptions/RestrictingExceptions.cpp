//Exceptions Restricting
/* Def:Pre-defining the type of possible throw types from a function
*/
#include<iostream>
using namespace std;
void sum () throw(int,double)
{
   int a,b;
   cin>>a>>b;
        if(a<b)
        throw 1;//success
        else if(b>a)
        throw 0.0;//Failure
        else
        throw ("Equal");
        catch(const char * m)
        {
            cout<<"Values are Same:"<<m;
        }
}
int main()
{
    try{
        sum();
    }
    catch(...)
    {
        cout<<"The Values are not Equal";
    }
}