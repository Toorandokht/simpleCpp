#include <iostream>
#include <math.h>

//perpendicular tirangle

using namespace std;

int a,b,c;
int a2,b2,c2;
int space,Perimeter;
int main()
{
	cout<<"enter the value for first triangle disrict: " << "a=";
	cin>>a;
	
	cout<<"\nenter the value for second triangle disrict: " << "b=";
	cin>>b;
	
	cout<<"\nenter the value for third triangle disrict: " << "c=";
	cin>>c;
	
	a2=pow(a,2);
	b2=pow(b,2);
	c2=pow(c,2);
	
	
	if (a2==b2+c2)
	{
	space=(b2+c2)/2;
	cout<<"your triangle is perpendicular and its space is: "<<space;	
	}
	
	else if (b2==a2+c2)
	{
	space=(a2+c2)/2;
	cout<<"your triangle is perpendicular and its space is: "<<space;	
	}

	else if (c2==a2+b2)
	{
	cout<<"your triangle is perpendicular and its space is: "<<space;	
	}
	
	else
	cout<<"your triangle is not a perpendicular and its perimeter is: "<<(a+b+c);


	return 0;
}
