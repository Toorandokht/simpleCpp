#include <iostream>

// show common multiples of two numbers till your specific endpoint
using namespace std;

int t,a,b,e;
int main()
{
	cout<<"enter you first(lower number) to see the multiples"<<endl;
	cin>>a;
	cout<<"enter you second(higher number) to see the multiples"<<endl;
	cin>>b;
	cout<<"enter the endpoint of your range"<<endl;
	cin>>e;
	
	for(t=a;t<=e;t++)
	{
		if((t%a==0) && (t%b==0))
			
		cout<< t <<endl;
	}
			
	return 0;
}
