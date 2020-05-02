//Design class such that they supports the following statements:Rupees r1,r2;dollar d1,d2;d1=r1;//converts rupees into dollar r2=d2;
 //converts dollar into rupees write a program which does such conversation according to the world market value.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class Rupee
{
	public:
		float r;
		Rupee()
		{
			cout<<"enter the amount in rupees"<<endl;
			cin>>r;
		}
		void set(){
		
			float dollar=r/75.46;
			cout<<"the Rs"<< r<<" into dollar $ "<<dollar<<endl;
		}
		
};
class Dollar
{
	public:
		float d;
		Dollar()
		{			
			cout<<"enter the amount in dollar: "<<endl;
			cin>>d;
		}
		void set()
		{
		
			float rupee=d*75.46;
			cout<<"the $"<<d<<" into rupee Rs"<<rupee<<endl;
		}
		
};
int main()
{
Dollar D1;
Rupee R1;
R1.set();
D1.set();
return 0;
}
