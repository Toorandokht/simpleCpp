#include <iostream>

// showing prime numbers in your range
using namespace std;

int t,i,a,b,n;
int main()
{
	cout<<"enter the lower number of your range"<<endl;
	cin>>a;
	cout<<"enter the higher number of your range"<<endl;
	cin>>b;
	
for(i=a;i<=b;i++)
{
	for(t=1;t<=b;t++)
	{
		if(i%t==0)
		{	
			n++;		
		}
	}
		if (n==2)
		{
			cout<< i << " is a prime number"<<endl;
		}
		
		n=0;	
}

	return 0;
}
