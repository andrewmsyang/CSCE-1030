#include<iostream>
using namespace std;
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/19
Instructor: Joseph Helsing
Description: Array// to calculate an compare the height of students
*/
int main()
{
	const int SIZE=8;//8 students
	int height[SIZE];//array to store height of 8 students
	int above_average[SIZE];//array to store average
	int sum=0;//sum
	float average=0;//average
	int x=0;//count

	for(int i=0; i<SIZE; i++)
	{
	cout<<"Enter height in inches of students #"<<i+1<<":";
	cin>>height[i];//input
	sum+=height[i];//calculate of the sum
	}
	average=sum/static_cast<float>(SIZE);//equation
	for(int i=0; i<SIZE; i++)
        {
		if(height[i]>average)//set the range if the height is bigger than avg
		{
			above_average[x]=height[i];
			x++;
		}
        }
	cout<<"You entered:"<<endl;
	for(int i=0; i<SIZE; i++)
        {
	cout<<"Height in inches of student #"<<i+1<<":"<<height[i]<<endl;
        }
	cout<<"The average height of students is "<<average<<endl;
	for(int i=0; i<x; i++)
	{
	cout<<"The student height which is bigger than average: "<<above_average[i]<<endl;//printout the result
	}
	return 0;
}
