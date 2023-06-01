#include <iostream>

//Getting higher decimal number - with function

using namespace std;

int max(double a, double b, double c)
{
	double max;
	max=a;
	if (b>max)
	max=b;
	if (c>max)
	max=c;
	
	return max;
}

int main()
{
	double a,b,c;
	cout<<"enter the value for the first number: " << "a=";
	cin>>a;
	cout<<"\n"<<"enter the value for the second number: " << "b=";
	cin>>b;
	cout<<"\n"<<"enter the value for the third number: " << "c=";
	cin>>c;

	cout<<"The max number is = " <<max(a,b,c)<<endl;
	
	
	return 0;
}