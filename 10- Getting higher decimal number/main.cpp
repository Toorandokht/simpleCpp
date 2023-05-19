#include <iostream>

//Getting higher decimal number

using namespace std;

float a,b,c;
int main()
{
	cout<<"enter the value for the first decimal number: " << "a=";
	cin>>a;
	cout<<"\n"<<"enter the value for the second decimal number: " << "b=";
	cin>>b;
	cout<<"\n"<<"enter the value for the third decimal number: " << "c=";
	cin>>c;

	if (a>b && b>c)
	{
		cout<<"a: " <<a<<" is the highest value";
	}
	
	else if (b>a && a>c)
	{
		cout<<"b: " <<b<<" is the highest value";
	}
	
	else if (c>b)
	{
		if (b>a)
		{
			cout<<"c: " <<c<<" is the highest value";
		}
	}
	
	
	return 0;
}
