#include <iostream>
// Area & Perimeter of a circle - with function

using namespace std;

double power(double c, double d)
{
	int i;
	double m=1;
	for(i=1;i<=d;i++)
	m *= c;
	
	return m;
}

double perimeter(double r)
{
	double pi=3.14,p;
	p=2*pi*r;
	return p;
}

double Area(double r)
{
	double pi=3.14,A;
	A=pi*power(r,2);
	return A;
}
int main() 
{
double a;
	cout<<"Please enter (radius) value to have its Area & Perimeter values: ";
	cin>>a;
	
 	
	cout<<"A= "<<Area(a)<<"\n";
	cout<<"P= "<<perimeter(a);
	
	return 0;
}