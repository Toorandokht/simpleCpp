#include <iostream>

//Show ASCII code
using namespace std;

char x;
char y;
int z;
int main()
{
	// 1st way		
	cout<< "Enter the first character: ";
	cin>>x;
	
	cout<<"ASCII value of "<< x << "  is  " << int(x);
	
	
	// 2nd way
	cout<< "\n,""Enter the second character: ";
	cin>>y;
	z=y;
	cout<<"ASCII value of "<< y << "  is  " << z;
	

	return 0;
}
