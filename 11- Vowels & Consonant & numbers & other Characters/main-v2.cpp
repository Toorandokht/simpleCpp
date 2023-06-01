#include <iostream>

//Vowels & Consonant & numbers & other Characters - with function

using namespace std;

int datatype(char str[10])
{
	int i;
	if(	str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
		||	str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'	)
		return 0;
	
	else if((str[i]>='a') && (str[i]<='z') || (str[i]>='A') && (str[i]<='Z' ))
		return 1;
	
	else if((str[i]>='0') && (str[i]<='9'))
		return 2;
		
	else
		return 3;
}

int main()
{
	char a[1000];
	int i;
	cout<<"enter your character: ";
	cin>>a;
	
	if (datatype(a) == 0)
		cout<< a << " is one of the vowels";
	
	if (datatype(a) == 1)
		cout<< a << " is one of the consonants";
	
	if (datatype(a) == 2)
		cout<< a << " is a digit";
	
	if (datatype(a) == 3)
		cout<< a << " is one of the other characters";
	
	return 0;
}