#include <iostream>

//    Show factorial of an integer number
using namespace std;


int a,i,f=1,t;
int main(int argc, char** argv)
{
	
	while(1)
	{
	
	cout<<"Please enter the number you want to get its factorial: ";
	cin>>t;
	
	if (t==0)
	{
		cout<<"0! is 1"<<endl;
	}

	else if(t>0)
    {
    	for(i=1;i<=t;i++)    
		{    
		f=f*i;
		}  
		cout<<"the factorial of "<<t<<" is "<< f <<endl;
		f=1;
	}
	
	else
	{
		cout<<"please enter a positive number"<<endl;
	}
	  
	}
	
	return 0;
}