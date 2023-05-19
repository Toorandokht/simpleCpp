#include <iostream>

//Triangle type

using namespace std;

int a,b,c;

int main()
{
	cout<<"enter the value for first triangle disrict: " << "a=";
	cin>>a;
	cout<<"\nenter the value for second triangle disrict: " << "b=";
	cin>>b;
	cout<<"\nenter the value for third triangle disrict: " << "c=";
	cin>>c;
	
	if ((a==b && b==c)) // && means and
		cout<<" this is Equilateral triangle";
		
	/* the other format for above code is:
		if (a==b)
	 {
	 	if (b==c)
	 	{cout<<" this is Equilateral triangle";}
	 }
	 it means we have one if inside the other one
	*/
	else if (a==b || b==c || a==c) // || means or
		cout<<" this is Isosceles triangle";
		
	else
		cout<<" this is Scalene triangle";
		
	
	return 0;
}
