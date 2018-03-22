#include<iostream>
using namespace std;
// add two variables of a object pointer
class ptr
{
    private:
    int m,n;
    public:
    ptr
    {
        m=5,n=6;
    }
    void add()
    {
        cout<<m+n;
    }
};
int main()
{
    ptr a;
    ptr *pa;
    pa=&a;
    pa.add();
}