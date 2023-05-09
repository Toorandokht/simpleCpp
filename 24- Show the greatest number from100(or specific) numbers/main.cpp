#include <iostream>

//   Show the greatest number from 100(or specific) numbers
using namespace std;


int i,a,b,c,n;
int main(int argc, char** argv)
{	
	cout<<"how many numbers you want to enter to get the highest one?"<<endl;
	cin>>n;
		
    for(i=1;i<=n;i++)    
		{
		cout<<"Please enter your numbers: ";
		cin>>a;
		
			if(a>b)
    		{  
    		c=a;
			a=b;
			b=c;
			}
		}
		cout<<"the greatest number is "<<b<<endl;
			
	
	return 0;
}