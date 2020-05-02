//write a program to implement manipulation of live objects.
#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
int id,age;
public:
emp() 
{
	char task;
cout<<"Do you want to initialize?"<<endl; 
cin>>task;
if(task=='Y'||task=='y')
{
	cout<<"enter employee id:"<<endl;
	cin>>id;
	cout<<"enter employee age:"<<endl;
	cin>>age;
}
else
{
	id=0;
	age=0;
}
}
emp(int r)
{
	id=r;
	age=0;
}

emp(int r,int a) 
{
id=r;
age=a;
}

void set(int r,int a)
{
	emp(r,a);
}
void display()
{
	if(id)
		cout<<"id is"<<id<<endl;
	else
		cout<<"not specify"<<endl;
	if(age)
		cout<<"age is:"<<age<<endl;
	else
		cout<<"not specify"<<endl;
	
}
};
int main()
{
	cout<<"***manipulation of live objects***"<<endl;
emp *e1,*e2,*e3,*e4;
e1=new emp;
e2=new emp(1);
e3=new emp(2,20);
cout<<"live objects are:"<<endl;
e1->display();
e2->display();
e3->display();
return 0;
}

