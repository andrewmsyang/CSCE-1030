#include<iostream>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/5
Instructor: Joseph Helsing
Description: While loop/To calsulate the grades
*/
using namespace std;

int main()
{
	int grade;//grade entered by user
	double sum=0;//initialize sum to 0
	double average;//variable of average
	int i;//an interger to counts

	while (i<6)//read grades and compute sum
	{
		cout<<"Enter grade: ";
		cin>>grade;
		sum+=grade;
		i++;//update count
	}
	
	average= sum/6;//average
	cout<<"The average is "<<average<<endl;
	
        return 0;
}

