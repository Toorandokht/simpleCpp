#include <iostream>

//Show common divisor of two numbers
using namespace std;

int a,b,t;
int main(int argc, char** argv)
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
	
	return 0;
}