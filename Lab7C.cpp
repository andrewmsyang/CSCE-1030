#include<iostream>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/26
Instructor: Joseph Helsing
Description: Passing arrays to fuctions
*/
using namespace std;

const int SIZE=5;//const size
void get_min(double my_array[],double& min);//get min function

int main()
{
	double my_array[SIZE]={1.1,-3.6,2.5,2.9,-3.4};//double array
	double minimum=my_array[0];//array to minimum
	get_min(my_array, minimum);//the equation
	cout<<"Smallest value:"<<minimum<<endl;
        return 0;
}

/*
Function: get_min
Parameters: double my_array[],double& min
Return: none
Description: To get the minimum 
*/
void get_min(double my_array[], double& min)
{
        for(int i=1;i<SIZE;++i)
        {
                if(min>my_array[i])
                {
                        min=my_array[i];
                }

        }
}
