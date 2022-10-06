#include<iostream>
#include<cmath>
#include<string>
using namespace std;
/*
        Author: Andrew Yang(ay0123@my.unt.edu)
        Date: 11/16
        Instructor: Joeseph Helsing
        Description: Structures
*/
struct Record{//struct variables
	string name;
        int feet, inches;
        float weight;
};


float calculateBMI(float,int,int);//equation

int main()
{
	Record Person;//struct type
	
	cout<<"Enter the person's name: ";
	cin>>Person.name;

	cout<<"Enter the person's weight in pounds: ";
	cin>>Person.weight;

	cout<<"Enter the person's height in feet and inches: ";
	cin>>Person.feet>>Person.inches;
	
	float bmi= calculateBMI(Person.weight,Person.feet,Person.inches);//bmi equation

	cout<<"The BMI for "<<Person.name<<" is: "<<bmi<<endl;//result

	return 0;
}

float calculateBMI(float weight, int feet, int inches)//calculations
{
	int totalHeight=feet*12+inches;
	
	return (703*weight)/pow(totalHeight,2);
}
