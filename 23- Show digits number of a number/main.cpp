#include <iostream>

//show how many digits a number has
using namespace std;

int a,a1,d=0,r,SoD;
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
