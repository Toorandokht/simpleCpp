#include <iostream>

//Determine Odd or Even Number - with function

using namespace std;

int evenodd(int x)
{
	if(x%2==1)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int a;
	cout<<"Please enter your number to check whether it is odd or Even: ";
	cin>>a;
	
	if (evenodd(a) == 0)
	cout<< a << " is an even number\n";
	
	else if (evenodd(a) == 1)
	cout << a << " is an odd number";	
	
}