//a program to declare a class and implement passing object by pointer
#include<iostream>
#include<conio.h>
using namespace std;
class emp
{public:
	int id;
	char name[20];
	int sal;
	
		void get(void);
	friend	void add(emp * ,int);
		void set(void);
};
void emp::get()
{
	cout<<"enter employee id:"<<endl;
	cin>>id;
	cout<<"enter employee name:"<<endl;
	cin>>name;
	cout<<"enter employee salary:"<<endl;
	cin>>sal;
}
void emp::set()
{
	cout<<"employee id: "<<id<<endl;
	cout<<"employee name: "<<name<<endl;
	cout<<"employee sal: "<<sal<<endl;
}
void add(emp *a,int new_sal)
{
	a->sal=new_sal;
	cout<<"new salary of employee "<<a->id<<"  is: "<<a->sal<<endl;
	}
	 main()
	{
		int salary;
		emp e1;
		e1.get();
		cout<<"*******current information*******"<<endl;
		e1.set();
		cout<<"enter new salary:"<<endl;
		cin>>salary;
		add(&e1,salary);
		cout<<"*******new information*******"<<endl;
		e1.set();
	}
