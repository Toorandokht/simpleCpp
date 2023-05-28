#include <iostream>

//Area & Perimeter of a Rectangle

using namespace std;

double Rec_Area(float l,float w)
{
	float A;
	A = l * w;
	return A;
}

double Rec_Per(float l,float w)
{
	float P;
	P = 2 * (l + w);
	return P;
}

int main()
{
float l,w;
	cout<<"Please enter legth of the Rectangle: ";
	cin>>l;
	cout<<"Please enter width of the Rectangle: ";
	cin>>w;
	
	cout<<"the Area of your Rectangle is: " << Rec_Area(l,w) << "\n";
	cout<<"the Perimeter of your Rectangle is: " << Rec_Per(l,w) ;
	
	return 0;
}