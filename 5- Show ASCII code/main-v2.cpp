#include <iostream>

//Show ASCII code - with function
using namespace std;

int ASCII(char a)
{
	int b;
	b=int(a);
	return b;
}

int main()

{
	char x;
	int  z;
	
	cout<< "Enter the character: ";
	cin>>x;
	z=ASCII(x);
	cout<<"ASCII value of "<< x << "  is  " << z;
	

	return 0;
}