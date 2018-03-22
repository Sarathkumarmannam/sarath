#include<iostream>
using namespace std;
class loc{
int longitude,latitude;
public:
loc(){};
loc(int lo,int la)
{
    longitude=lo;
    latitude=la;
}
void show()
{
    cout<<longitude<<endl<<latitude<<endl;
    }
loc operator +(loc op2);
} ;
loc loc::operator +(loc op2)
{
    loc temp;
    temp.longitude=longitude+op2.longitude;
    temp.latitude=latitude+op2.latitude;
    return temp;
}
int main()
{
    loc op1(15,20),op2(22,16);
    op1.show();
    op2.show();
    op1=op1+op2;
    op1.show();
    return 0;
    }