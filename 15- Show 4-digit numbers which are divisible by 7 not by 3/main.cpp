#include <iostream>

//show 4-digit numbers which are divisible by 7 not by 3

using namespace std;

int i;
int main(int argc, char** argv)
{
	for (i=1000;i<10000;i++)
	{
		if (i%7==0 && i%3==1)
		
		cout <<i<<endl;
	}
	return 0;
}