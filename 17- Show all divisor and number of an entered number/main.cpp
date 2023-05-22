#include <iostream>

//Show all divisor and number of an entered number
using namespace std;

int t,a,n;
int main()
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

	
	return 0;
}
