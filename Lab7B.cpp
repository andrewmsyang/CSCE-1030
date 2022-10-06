#include<iostream>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/26
Instructor: Joseph Helsing
Description: To calucalate the discriminant of coefficient a,b and c.
*/
using namespace std;

void get_coeff(double& coeff, int pos);//declaration function of cofficient 
double bb_4ac(double& a, double& b, double& c);//declaration of a,b and c

int main()
{
	double a, b, c, y;//variablies
	y= bb_4ac(a, b, c);//decalere bb_4ac in to y (equation)
	cout<<"The discriminant is "<<y<<endl;//asnswer output

	return 0;
}

/*
Function: bb_4ac
Parameters: double& a,b,c
Return:equation
Description:This function is to get the coeff value of a,b,c 
*/
double bb_4ac(double& a, double& b, double& c)//finding the coefficient of a,b and c
{
	get_coeff(a, 2);//coefficient of a
	get_coeff(b, 1);//coefficient of b
	get_coeff(c, 0);//coeddicient of c

	return (b * b - 4 * a * c);//equation
}

/*
Function: get_coeff
Parameters: double& coeff, int pos
Return:none
Description: This fuction is to get the user input of three coefficients
*/
void get_coeff(double& coeff, int pos)
{
	cout<<"Enter the value of a,b and c seperated by <Enter>";//asking user for input
	cin>>coeff;//input
	cout<<endl;
}

