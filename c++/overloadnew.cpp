#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class student
{
	char name[20];
	int regdno;
	public:
	student()
	{
		strcpy(name,"\0");
		regdno=0;
	}
	student(char str[20],int r)
	{
		strcpy(name,str);

		regdno=r;
	}
	void display()
	{
	 	cout<<"\nMy name is "<<name<<"\tRegdno is "<<regdno<<"\n";
	}
	void *operator new(size_t size)
	{
		void *p;
		cout<<"\nOverloaded new operator size="<<size<<"\n";
		p=malloc(size);
		return p;
	}
	void operator delete(void *p)
	{
		cout<<"\nOverloaded delete operator\n";
		free(p);
	}
};
int main()
{
	student *stu;
	stu = new student("abcd",1001);
	stu->display();
	delete stu;
	return 0;

}

