#include <iostream>

//Show the Greatest common divisor(GCD) of a number
using namespace std;

int a,b,t,r;
int main()
{
	cout<<"enter 1st integer number: " << "a= ";
	cin>>a;
	cout<<"enter 2nd integer number: " << "b= ";
	cin>>b;
	
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
	cout<<b;
	
	return 0;
}
