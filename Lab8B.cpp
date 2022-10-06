#include<iostream>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 11/2
Instructor: Joseph Helsing
Description: Arrays in Functions
*/
using namespace std;

//get a single grade from user, with call-by-call-reference
void get_grade(int grades[], int x);

int main()
{
	const int SIZE = 5;
	int grades[SIZE];
	
	get_grade(grades, SIZE);//function

	for(int i=0; i<SIZE; i++)
	{
		cout<<"grades["<<i<<"] = "<<grades[i]<<endl;
	}

        return 0;
}

/*
Function: get_grade
Parameters: int grades[], int x 
Return: none
Description: to get the grade from a for loop
*/
void get_grade(int grades[], int x)
{
	for(int i=0; i<x; i++)
	{
		cout<<"Enter a grade between 0 and 100: ";
		cin>>grades[i];
	}
	return;
}
