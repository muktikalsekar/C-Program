//a program to declare a class and implement passing object by value
#include<iostream>
#include<conio.h>
using namespace std;
class value
{
	public:
		int e;
		string name;
		void employee(value E)
		{
			e=e+E.e;
		}
};
main()
{string name,name1;
	int a,b;
	value v1,v2;
	v1.e=25000;
	v2.e=3500;
	cout<<"record of employee 1:"<<endl;
	cout<<"name of employee"<<endl;cin>>name;
cout<<"salary is: "<<v1.e<<endl;
	cout<<"record of employee 2:"<<endl;
	cout<<"name of employee"<<endl;
	cin>>name1;
cout<<"salary is: "<<v2.e<<endl;

v2.employee(v1);
cout<<"new record of employee"<<endl;
	cout<<"record of employee 1 is:"<<name<<endl;
	
cout<<"salary is: "<<v1.e;
	cout<<"record of employee 2:"<<name1<<endl;
	
cout<<"salary is: "<<v2.e<<endl;
	
}
