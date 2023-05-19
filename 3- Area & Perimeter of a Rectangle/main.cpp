#include <iostream>

//Area & Perimeter of a Rectangle

using namespace std;

float l=0,w=0;
float A=0,P=0;

int main()
{
	cout<<"Please enter the legth of Rectangle: ";
	cin>>l;
	
	cout<<"Please enter the width of Rectangle: ";
	cin>>w;
	
	A = l * w;
	P = 2 * (l + w);
	cout<<"the Area of your Rectangle is: " << A << "\n";
	cout<<"the Perimeter of your Rectangle is: " << P ;
	
	
	return 0;
}
