#include <iostream>
using namespace std;
/*
        Author: Andrew Yang(ay0123@my.unt.edu)
        Date: 11/19
        Instructor: Joseph Helsing
        Description: To calculate the average of each of the student test scors. 
*/


struct Student//stuct variables
{
	char namestudents[50];//char array of size 50
	int test[5];//int size 5
	double average;//the average
};

int main()
{
	int number;//number of student
	Student arr[10];//structure array for 10 students
	cout<<"How many students?";//asking user the numb of students
	cin>>number;//input	

	for(int i=0; i<number; ++i)
	{
		cout<<"Enter the student name: ";//ask user for the input
		cin.ignore();//read the array
		cin.get(arr[i].namestudents,50);//output array
		cout<<"Enter 5 tests of scores: "<<endl;//ask user for the input
		int sum=0;//sum of the tests variables
		for(int j=0; j<5; j++)
		{
		cin>>arr[i].test[j];//input tests scores
		sum += arr[i].test[j];//the sum of the tests
		}
		arr[i].average= static_cast<float>(sum)/5;//the average of the tests scores
	}

	for(int i=0; i<number; ++i)//a loop to print the name and the avaeage
	{
		cout<<arr[i].namestudents<<endl;
		cout<<arr[i].average<<endl;
	}

	return 0;
}
