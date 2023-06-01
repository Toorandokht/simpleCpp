#include <iostream>

//    Show factorial of an integer number - with function
using namespace std;

int factorial(int t)
{
	int f;
	if (t == 0)
		return 1;
		
	else if (t > 0)
	{
		f=1;
		for(int i=1;i<=t;i++)    
	   	f=f*i;
	}
	
	return f;
}

int main()
{
	int a;	
	cout<<"Please enter the number you want to get its factorial: ";
	cin>>a;
	
	cout<<"the factorial of "<<a<<" is "<< factorial(a) <<endl;
	
	return 0;
}