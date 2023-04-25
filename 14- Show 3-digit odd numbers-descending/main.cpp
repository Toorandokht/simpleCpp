#include <iostream>

//show 3-digit odd numbers-descending
using namespace std;

int i;
int main(int argc, char** argv)
{
	for (i=999;i>99;i--)	
	{
	if (i%2==1)
	{
		cout<<i<<endl;
	}	
	}
	
	return 0;
}