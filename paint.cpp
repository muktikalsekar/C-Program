//write a program to implement multiple inheritance to find the area of rectangle and total cost to paint the complete area.
#include<iostream>
#include<conio.h>
using namespace std;
int l,b;
class arearect
{
	public:
		int result;
		arearect()
		{
			cout<<"enter the length:"<<endl;
			cin>>l;
			cout<<"enter the bredth:"<<endl;
			cin>>b;
			result=l*b;
			cout<<"area of rectangle is:"<<result<<endl;
		}
};
class cost
{public:
	float c;
	cost()
	{	
	cout<<"enter the cost for per rectangle:"<<endl;
	cin>>c;
}
};
class paint:public arearect,public cost
{
	public:
		int total_cost;
		paint()
		{
		total_cost=c*result;
			cout<<"total cost is:"<<total_cost;
		}
};
int main()
{
	paint p;
	return 0;
}

