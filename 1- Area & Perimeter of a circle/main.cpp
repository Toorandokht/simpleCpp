#include <iostream>
#include <math.h>
//Area & Perimeter of a circle
using namespace std;
float r=0,A=0,P=0,pi=3.14;
float r2=0;

int main() 

{
	cout<<"Please enter (radius) value to have its Area & Perimeter values: ";
	cin>>r;
	
 	r2=pow(r,2);
 	A=pi*r2;
 	P=2*pi*r;
 	
	cout<<"A= "<<A<<"\n";
	cout<<"P= "<<P;
	
	return 0;
}
