//using a function to  demonstrate multiple catches
#include<iostream>
using namespace std;
int operations(int m,int n){
 try{
     if(m==0)
     throw ("Zero Multiply");
     else if (n==0)
     throw (n);
     else
    return m*n;

 }
 catch(const char *a)
 {
     cout<<"Multiplication Error \t Reason:"<<a<<endl;

 }
 catch( int x)
 {
     cout<<"Division Error\t Reason:"<<n;
 }
 return 0;
}
int main(){
    int m,n;
    cout<<"Enter two numbers to perform division and multiplication"<<endl;
    cin>>m>>n;
    cout<<operations(m,n);
    return 0;
}