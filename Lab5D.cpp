#include<iostream>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/5
Instructor: Joseph Helsing
Description: Using the for loop
*/
using namespace std;

int main()
{
	int number;//user entered number
	int minimum;//minimun number
	const int N=10;//how many numbers are there
	int i;//for loops counts
	
	cout<<"Enter number:";//ask for enter
	cin>>number;//inputs
	minimum=number;

	for(i=1;i<N;i++)//for loops
	{
		cout<<"Enter number:";
		cin>>number;
		if(minimum>number)//set range
		{
			minimum=number;//update
		}
	}
	
	cout<<"Minimum number:"<<minimum<<endl;
	
        return 0;
}

