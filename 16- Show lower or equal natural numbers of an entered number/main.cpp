#include <iostream>

//Show lower or equal natural numbers of an entered number
using namespace std;

int a,t;
int main()
{
	cout<<"enter a natural number: ";
	cin>>a;
	
	while(a<=0)
	{
		cout<<"You did not enter a natural number\n" << "please enter a natural number: ";
		
		cin>>a;
	}
	
	for(t=1;t<=a;t++)
	{
		cout <<t<<endl;
	}
	
	return 0;
}
