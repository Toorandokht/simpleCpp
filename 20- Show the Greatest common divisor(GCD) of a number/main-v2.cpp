#include <iostream>

//Getting two integer numbers & show the Greatest common divisor (GCD) - with function
using namespace std;

int GCD(int a,int b);

int main(int argc, char** argv)
{
	int a,b,t;
	cout<<"enter 1st integer number: " << "a= ";
	cin>>a;
	cout<<"enter 2nd integer number: " << "b= ";
	cin>>b;
	
	cout<<"the common divisors for "<< a <<" and "<< b << " include:\n";
	
	for(t=1;t<=a+1;t++)
	{
		if((a%t==0) && (b%t==0))
			cout<<t<<endl;	
	}
	
	cout<<"the greatest common divisor(GCD) for "<< a <<" and "<< b << " is "<<GCD(a,b);

	return 0;
}
	
int GCD(int a,int b)
{
	double r;
	r=a%b;
	while(r!=0)
	{
	a=b;
	b=r;
	r=a%b;
	}
	return b;
}