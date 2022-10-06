#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
#include<stdlib.h>
using namespace std;


void my_strcmp(char ch_str1[],char ch_str2[], bool& longer, int& length)
{
	int len1, len2;
	len1 = strlen(ch_str1);
	len2 = strlen(ch_str2);
	if(len1>len2)
	{
		longer=true;	
		length=strlen(ch_str1);
		cout<<"First C-string is longer and its length is "<<length;
	}
	else if(len2>len2)
	{
		longer=false;
		length=strlen(ch_str2);
		cout<<"Second C-string is longer and its length is"<<length;
	}	
}
int main()
{
	const int MAX_SIZE=50;
	char my_str1[MAX_SIZE]="This is test";
	char my_str2[MAX_SIZE];
	cout<<"Enter text: ";
	cin>>my_str2[MAX_SIZE];
	bool longer;
	my_strcmp(my_str1[MAX_SIZE], my_str2[MAX_SIZE], longer, length);
		
	return 0;	
}