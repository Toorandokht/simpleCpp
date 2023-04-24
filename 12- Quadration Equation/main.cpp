#include <iostream>
#include <math.h>
//Quadration Equation
using namespace std;

float a,b,c,x1,x2,b2;
float delta,sdelta; // sdelta = sqrt(delta)


int main(int argc, char** argv)
{
	cout<<"in ax^2+bx+c quadration equation, please enter a: ";
	cin>>a;

	cout<<"\n"<<"in ax^2+bx+c quadration equation, please enter b: ";
	cin>>b;
	
	cout<<"\n"<<"in ax^2+bx+c quadration equation, please enter c: ";
	cin>>c;
	
	b2=pow(b,2);
	delta=b2-(4*a*c);
	sdelta=sqrt(delta);
	
	if ( delta > 0 )
	{
		cout<<" delta is greater than zero and we have two roots";
		
		x1=(-b+sdelta)/(2*a);
		x2=(-b-sdelta)/(2*a);
		
		cout<<"\n"<<"x1 is: " << x1;
		cout<<"\n"<<"x2 is: " << x2;
	}
	
	else if ( delta == 0 )
	{
		cout<<" delta is zero and we have one double root";
		x1=(-b)/(2*a);
		
		cout<<"\n"<<"x is: " << x1;
	}
	
	else if ( delta < 0 )
	{
		cout<<" delta is less than zero and we have no answer";
	}
	
	
	return 0;
}