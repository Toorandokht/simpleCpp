#include <iostream>
#include <math.h>
//Quadration Equation - with function
using namespace std;

int delta(double a, double b, double c)
{
	double b2,del;

	b2=pow(b,2);
	del=b2-(4*a*c);
	
	return del;
}

int main()
{
	double a,b,c,d,sd,x1,x2;
	cout<<"in ax^2+bx+c quadration equation, please enter a: ";
	cin>>a;

	cout<<"\n"<<"in ax^2+bx+c quadration equation, please enter b: ";
	cin>>b;
	
	cout<<"\n"<<"in ax^2+bx+c quadration equation, please enter c: ";
	cin>>c;
	
	d= delta(a,b,c);
	sd=sqrt(d);
	
	if ( d > 0 )
	{
		x1=(-b+sd)/(2*a);
		x2=(-b-sd)/(2*a);

	cout<<"this equation has two roots including"<<endl
	<<	"x1: "<< x1 << " and x2: " << x2;
	}
	
	else if ( d == 0 )
	{
		x1=(-b)/(2*a);
		cout<<"delta is zero and we have one double root";
		cout<<"\n"<<"x is: " << x1;
	}
	
	else if ( d < 0 )
		cout<<"delta is less than zero and we have no answer";
		
	return 0;
}