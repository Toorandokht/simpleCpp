#include <iostream>

//Getting two integer numbers & show the GCD & LCM - with function
using namespace std;

int GCD (int a,int b);
int LCM (int a,int b);

int main()
{
int a,b,t;
	cout<<"enter 1st integer number: " << "a= ";
	cin>>a;
	cout<<"enter 2nd integer number: " << "b= ";
	cin>>b;
	
	cout<<"The common divisors for "<< a <<" and "<< b << " include:\n";
	
	for(t=1;t<=a+1;t++)
		if((a%t==0) && (b%t==0))
			cout<<t<<endl;	
	
	cout<<"The greatest common divisor(GCD) for "<< a <<" and "<< b << " is: "<<GCD(a,b)<<endl;
	cout<<"The least common multiple(LCM) for "<< a <<" and "<< b << " is: "<<LCM(a,b);
	
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
	
int LCM(int a,int b)
{
	double l;
	l=(a*b)/GCD(a,b);
	return l;
}
