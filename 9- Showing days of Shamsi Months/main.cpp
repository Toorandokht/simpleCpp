#include <iostream>

//Showing days of Shamsi Months

using namespace std;

int a; // a is the number of desired month

int main(int argc, char** argv)
{	
	cout<<"enter the number of your month: ";
	cin>>a;
	
	if (a>0 && a<7)
	{
	cout << "the entered month has 31 days";
	}
	
	else if (a>6 && a<12)
	{
	cout << "the entered month has 30 days";
	}
	
	else if (a == 12)
	{
	cout << "the entered month has 30 days or every 4 years has it has 29 days";
	}
	
	
	return 0;
}