#include <iostream>

//Vowels & Consonant & numbers & other Characters

using namespace std;

char str[1000];
int i;

int main()
{
	cout<<"enter your character: ";
	cin>>str;
	
	
	if(	str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
	||	str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'	)
	{
	cout<< str << " is one of the vowels";
	}
	
	else if(	(str[i]>='a') && (str[i]<='z') || (str[i]>='A') && (str[i]<='Z' )	)
	{
	cout<< str << " is one of the consonants";
	}
	
	else if(	(str[i]>='0') && (str[i]<='9') )
	{
	cout<< str << " is a digit";
	}
	
	else
	{
	cout<< str << " is one of the other characters";
	}
	
	return 0;
}
