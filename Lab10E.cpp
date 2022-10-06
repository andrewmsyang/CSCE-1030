#include <iostream>
/*
        Author: Andrew Yang(ay0123@my.unt.edu)
        Date: 11/19
        Instructor: Joseph Helsing
        Description: To calculate the average of the tests of each students
*/
using namespace std;

int main()
{
	int number_of_student, number_of_test;//variables
	cout<< "How many students?"; //ask for the user
	cin>>number_of_student;//input
	int **testscores;//2D arry
	testscores = new int*[number_of_student];
	int *average;//1D arry
	average = new int[number_of_student];

	for(int i=0; i<number_of_student;++i)
	{
	cout<<"How many tests for this student #"<<i+1<<"?";
	cin>>number_of_test;
	testscores[i] = new int[number_of_test];
	cout<<"Enter test scores: "<<endl;
	int sum=0;
	for(int j=0; j<number_of_test;++j)
	{
		cin>>testscores[i][j];//test scores
		sum+=testscores[i][j];//sum of test scores
	}
	average[i] = static_cast<float>(sum)/number_of_test;//aveage

	}
	for(int i=0; i<number_of_student; i++)//print average
	{
		cout<<"The average is "<<average[i]<<endl;
	}

	delete[] average;//delete piont

	for(int i=0; i<number_of_student; i++)//2D delete point
	{
	delete [] testscores[i];
	}

	delete [] testscores;

	return 0;
}
