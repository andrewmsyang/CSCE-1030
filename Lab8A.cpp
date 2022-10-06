#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 11/2
Instructor: Joseph Helsing
Description: Call By Reference Functions
*/
using namespace std;

//Function declaration that reads the values for num1 and num2
void get_input(int& num1, float& num2);
void modify(int &num1, float &num2);

int main()
{
	int num1;//interger variables
	float num2;
	
	get_input(num1, num2);//get input fuctiom
	modify(num1, num2);//modify function

	cout<<"original values: num = "<<num1<<" num2 = "<<num2<<endl;

	return 0;
}

/*
Function: get_input
Parameters:int& num1, int& num2
Return:none
Description:to get the inout of the integer and float point
*/
void get_input(int& num1, float& num2)
{
	cout<<"Enter an interger: ";
	cin>>num1;

	cout<<"Enter a floating-point number: ";
	cin>>num2;
}

/*
Function: modify
Parameters:int &num1, float &num2
Return:none
Description:to modify the numbr and random number
*/
void modify(int &num1, float &num2)
{
	srand(time(0));
	num1= num1*(rand()%11+20);
	num2= log(num2);
}
