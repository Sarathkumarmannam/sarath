#include<iostream>
using namespace std;
class item
{
  private:
  static int count;
  int n;
  public:
  void get(int a)
  {
      n=a;
      count++;
  }

    void print()
    {
        std::cout<<"VALUE"<<count;
    }
};
int item::count;

int main()
{
    item x,y,z;
    x.print();
        y.print();
            z.print();
x.get(10);
y.get(20);z.get(30);
 x.print();
        y.print();
            z.print();
    return 0;
}
//output:VALUE0VALUE0VALUE0VALUE3VALUE3VALUE3