//write a program to multiply and divide two numbers using inline function.
#include<iostream>
#include<conio.h>
using namespace std;

class mul_div
{
float x,y,result;
public:
	void get();
	void mul();
	void div();
};
	inline void mul_div :: get()
	{
			cout<<"enter first value:"<<endl;
		cin>>x;
		cout<<"enter second value:"<<endl;
		cin>>y;
	}
	    inline void mul_div :: mul()
		{	
		result=x*y;
		cout<<"multiplication of two values is:"<<result<<endl;	
		}
		inline void mul_div :: div()
		{
				result=x/y;
		cout<<"division of two values is:"<<result<<endl;	
		}
		 main()
		{
			mul_div m;
			m.get();
			m.mul();
			m.div();
		}

