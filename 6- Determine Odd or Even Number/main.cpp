#include <iostream>

//Determine Odd or Even Number

using namespace std;

int a=0;
int main(int argc, char** argv)
{
	cout<<"Please enter your number to check whether it is odd or Even: ";
	cin>>a;
	
	if (a % 2 == 0)
	cout<< a << " is an even number\n";
	
	else
	cout << a << " is an odd number";	
	
	//or
//	if (a % 2 == 1) // if (a % 2 != 0)
//	cout << a << " is an odd number";
	
	return 0;
}