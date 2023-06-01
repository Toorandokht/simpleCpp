#include <iostream>

//Showing days of Shamsi Months - with function

using namespace std;

int shamsi(int a)
{
	if (a>0 && a<7)
	return 0;
	
	else if (a>7 && a<12)
	return 1;
	
	else if (a == 12)
	return 2;
	
	else
	return 3;
}

int main()
{	
	int a;
	cout<<"enter the number of your month: ";
	cin>>a;
	
	if (shamsi(a) == 0)
	{
	cout << "the entered month has 31 days";
	}
	
	else if (shamsi(a) == 1)
	{
	cout << "the entered month has 30 days";
	}
	
	else if (shamsi(a) == 2)
	{
	cout << "the entered month has 30 days or every 4 years has it has 29 days";
	}
	
	else if (shamsi(a) == 3)
	cout << "please enter a valid value [1 to 12]";
	
	return 0;
}