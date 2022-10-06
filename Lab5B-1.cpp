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
	int i=0;//an interger to counts
	int count;//count of grades
		
	cout<<"How many grades do u want to enter:";
	cin>>count;
	
	while (i<count)//read grades and compute sum
	{
		cout<<"Enter grade: ";
		cin>>grade;
		sum+=grade;
		i++;//update count
	}
	
	average= sum/count;//average
	cout<<"The average is "<<average<<endl;
	
        return 0;
}

