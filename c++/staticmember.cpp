#include<iostream>
// static functions uses static data and static members only
//There should be redeclaration of satic data and functions as there are visible globally
//they can be called using class name than by using an object
using namespace std;
class member
{
  static int s;
  int ns;
  public:
  void read()
  {
  std::cout<<"Enter a number"<<endl;
  cin>>ns;
    cout<<++s<<endl<<"-------";
  }
  static int sum()
  {
      cout<<s<<endl;
      return (0);//read 1 st comment
  }
};
/*also specify data type of static data*/
int member::s;//read comment 2
int main()
{
    member one,second;
    one.read();
    member :: sum();
    second.read();
    member:: sum();//read comment 3
    cout<<"*****************";
        return 0;
}
