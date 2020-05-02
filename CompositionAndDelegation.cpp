//write a program to implement object composition and delegation.
#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
	string name;
	int sal;
	public:
		void get()
		{
			cout<<"enter the name of employee: "<<endl;
			cin>>name;
			cout<<"enter salary of employee "<<name<<" :"<<endl;
			cin>>sal;
		}
		void set()
		{
			cout<<"name of employee is: "<<name<<endl;
			cout<<"salary of"<<name<<" is:"<<endl;
		}
};
class salary
{
	
	int salary[3];
	public:
		employee e;
		void get()
		{
			e.get();
			int i;
			cout<<"**enter the salary of 3 month**"<<endl;
			for(i=1;i<=3;i++)
			{			
			cout<<"enter the salary of a month:"<<endl;
			cin>>salary[i];
			}
		}
		void set()
		{
			int j;
			int total,Total;
			for(j=1;j<=3;j++)
			{
				e.set();
				cout<<"salary of month "<<j<<" is:"<<salary[j]<<endl;
					total=salary[j];
					Total=total+salary[j];
			}
					cout<<"the total salary of three month is="<<Total<<endl;
		}
	};
				main()
				{
					salary s1;
					cout<<"****enter Employee Details****"<<endl;
					s1.get();
					cout<<"****************************************************"<<endl;
					cout<<"Employee details are:"<<endl;
					s1.set();
				
}
