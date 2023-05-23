#include <iostream>

//Show GCD and LCM of a number
using namespace std;

int a,b,t,r;
int a1,b1,l;
int main()
{
	cout<<"enter 1st integer number: " << "a= ";
	cin>>a;
	cout<<"enter 2nd integer number: " << "b= ";
	cin>>b;
	
	a1=a;
	b1=b;
	cout<<"the common divisors for "<< a <<" and "<< b << " include:\n";
	
	for(t=1;t<=a+1;t++)
	{
		if((a%t==0) && (b%t==0))
		{
			cout<<t<<endl;	
		}
	}
	
	cout<<"the greatest common divisor(GCD) for "<< a <<" and "<< b << " is:\n";
	r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	cout<<b<<endl;
	
	cout<<"the least common multiple(LCM) for "<< a <<" and "<< b << " is:\n";
	l=(a1*b1)/b;
	cout<<l<<endl;
	
	return 0;
}
