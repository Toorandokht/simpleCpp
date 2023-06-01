#include <iostream>
#include <math.h>
//Triangle type - with function

using namespace std;

int triangle(double a, double b, double c)
{
	double a2,b2,c2;
	a2=pow(a,2);
	b2=pow(b,2);
	c2=pow(c,2);
	
	if ((a==b) && (b==c))
	return 0;
	
	else if ((a==b) || (b==c))
	return 1;
	
	else if ((a2==b2+c2) || (b2==a2+c2) || (c2==a2+b2))
	return 2;
	
	else
	return 3;
}

int main()
{
	double a,b,c;
	
	cout<<"enter the value for first triangle disrict: " << "a=";
	cin>>a;
	cout<<"\nenter the value for second triangle disrict: " << "b=";
	cin>>b;
	cout<<"\nenter the value for third triangle disrict: " << "c=";
	cin>>c;
	
	if (triangle(a,b,c)==0)
		cout<<" this is a Equilateral triangle";
		
	else if (triangle(a,b,c)==1)
		cout<<" this is a Isosceles triangle";
		
	else if (triangle(a,b,c)==2)
		cout<<" this is a prependicular triangle";
	
	else
		cout<<" this is a scalene triangle";
		
	return 0;
}