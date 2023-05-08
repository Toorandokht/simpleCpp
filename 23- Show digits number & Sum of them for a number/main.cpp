#include <iostream>

// Show digits number & Sum of them for a number
using namespace std;

int a,r,SoD,a1,d=0;
int main(int argc, char** argv)
{
	cout<<"enter your number: " << "a= ";
	cin>>a;
	a1=a;
	
    while(a>0)    
	{    
		r=a%10;    
		SoD=SoD+r;    
		a=a/10;
        d++;   
	}    
	
	cout<<"your number: "<< a1 <<" has "<< d << " digit / digits";
	cout<<"Sum of digits(SoD)= "<<SoD<<endl;
	   
 
	return 0;
}