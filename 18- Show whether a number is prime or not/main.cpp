#include <iostream>

//Show whether a number is prime or not
using namespace std;

int t,a,n;
int main(int argc, char** argv)
{
	cout<<"enter an integer number: " << "a= ";
	cin>>a;
	cout<<"the divisors include:\n";
	
	for(t=1;t<=a+1;t++)
	{
		
		if(a%t==0)
		{
			
			cout<<t<<endl;
			n++;
				
		}
		
	}
	cout <<"the number of its divisor is "<<n<<endl;
	if (n==2)
	{
		cout<<"your entered number: " << a << " is a prime number";
	}
	
	else if (n!=2)
	{
		cout<<"your entered number: " << a << " is not a prime number";
	}
	return 0;
}