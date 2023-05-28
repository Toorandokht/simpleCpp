#include <iostream>

//square a number - with function

using namespace std;
double a,c;

double power(double a, double b)
{
	double m=1;
	int i;
	for(i=1;i<=b;i++)
	m *=a;
	return m;
}

int main() 
{
	cout<<"Please enter (a) value to have its square value: ";
 	cin>>a;
 	c=power(a,2);
 	cout<<"square of "<<a<<" is: " << c;
	
	return 0;
}