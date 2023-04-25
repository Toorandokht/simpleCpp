#include <iostream>

//show 3-digit even numbers
using namespace std;

int i;
int main(int argc, char** argv)
{
	for (i=100;i<1000;i++)	
	{
	if (i%2==0)
	{
		cout<<i<<endl;
	}	
	}
	
	return 0;
}