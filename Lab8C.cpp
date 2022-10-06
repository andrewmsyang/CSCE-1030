#include<iostream>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 11/2
Instructor: Joseph Helsing
Description: Passing Two-Dimensional Arrays to Functions
*/
using namespace std;

const int COLS=6;

/*
Function: computeAverage
Parameters: float grades[][COLS], int a, int b
Return: none
Description: to calcuate the grades
*/
void computeAverage(float grades[][COLS], int a, int b)
{
        for(int i=0;i<a;++i)
        {
		float sum=0;
                for(int j=0; j<b-1;++j)
                {
                        sum+=grades[i][j];
                        grades[i][b-1]=sum/(b-1);
                }
        }
}


int main()
{
	const int ROWS=3;//3 students
	float grades[ROWS][COLS];
	
	for(int i=0;i<ROWS; i++)
	{
		for(int j=0; j<COLS-1; j++)
		{
			cout<<"Enter QUIZ#"<<j+1<<" for STUDENT #"<<i+1<<": ";
			cin>>grades[i][j];
		}
	}
	computeAverage(grades, ROWS, COLS);

	for(int i=0;i<ROWS; i++)
	{
		cout<<"STUDENT #"<<i+1<<": ";
		for(int j=0; j<COLS; j++)
		{
			cout<<grades[i][j]<<" ";
		}
			cout<<endl;
	}
        return 0;
}
