#include<iostream>
#include<cstring>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/19
Instructor: Joseph Helsing
Description: C-string
*/
using namespace std;
int main()
{
        char str1[15],str2[15];
	int len1, len2;
	strcpy(str1,"algorithms");

	cout<<"Enter a world with 14 or fewer characters at the prompt: ";
	cin>>str2;

	len1 = strlen(str1);//find length of each C-string and assign to len1 and len2
	len2 = strlen(str2);
	
	//compare lengh of each c string and print out the result
	if(len1 == len2)
	{
		cout<<"The C-strings are the same length."<<endl;
	}
	else
	{
		cout<<"The C-strings are not the same length and must be differen words."<<endl;
		return 0;
	}
	//check if two c strings are the same or not
	if(strcmp(str1,str2)==0)
	{
		cout<<"The two C-strings are the same."<<endl;
	}
	else
	{
		cout<<"The two C-strings are NOT the same."<<endl;
	}
	
        return 0;
}

