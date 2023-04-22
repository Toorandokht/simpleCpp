#include <iostream>


//Float average of three numbers
using namespace std;

int a=0,b=0,c=0;
float average=0;

int main(int argc, char** argv)
{
	cout<<"Please Enter first number value: " <<"\n" << "a=" ;
	cin>>a;
	
	cout<<"Please Enter first number value: " <<"\n" << "b=" ;
	cin>>b;
	
	cout<<"Please Enter first number value: " <<"\n" <<"c=" ;
	cin>>c;
	
	average=(a+b+c)/3.0;
	
	cout<<"\n"<<"The average of three numbers is: " << average;
		
	
	return 0;
}