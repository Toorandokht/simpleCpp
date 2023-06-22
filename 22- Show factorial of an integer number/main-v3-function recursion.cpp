#include <iostream>

//    Show factorial of an integer number - with function recursion
using namespace std;

int factorial(int t)
{
	int f=1;
	if ((t == 0) || (t==1))
		return 1;
		
	else
	return t*factorial(t-1);
	
}

int main()
{
	int a;	
	cout<<"Please enter a natural number you want to get its factorial: ";
	cin>>a;
	
	cout<<"the factorial of "<<a<<" is "<< factorial(a) <<endl;
	
	return 0;
}