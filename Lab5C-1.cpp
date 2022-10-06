#include<iostream>
#include<cctype>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/5
Instructor: Joseph Helsing
Description: Using the do while loop//calculate the grades
*/
using namespace std;

int main()
{
        int grade;//grade entered by user
	double sum=0;//initialize sum to 0
        double average;//variable of average
        int i=0;//an interger to counts
	char x;//a char to continue or not

        do//read grades and compute sum
        {
                cout<<"Enter grade: ";//ask for grade
                cin>>grade;//input
                sum+=grade;//calculate
                i++;//update count
		cout<<"Continue to Enter?: ";
		cin>>x;//input
		x=toupper(x);//to upper
       }while(x=='Y');//range of loop

	average= sum/i;//average
        cout<<"The average is "<<average<<endl;

        return 0;
}
