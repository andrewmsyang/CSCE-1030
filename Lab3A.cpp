#include <iostream>
using namespace std;
/*
Author: Andrew Yang(ay0123@my.unt.edu)
Date:9/14/2018
Instructor: Joseph Helsing
Description: To calculate the area of trapezoid
*/


int main()
{
 int hight;//variable of hight
 int b1;//variable of base one
 int b2;//variable of base two
 float Area;//variable of Area
 float x;//varibale for me to change the type

	cout<<"Enter Base1:";//ask user to enter base1
	cin>>b1;//user enter
	cout<<"Enter Base2:";//ask user to enter base2
	cin>>b2;//user enter
	cout<<"Enter the hight:";//ask user for the hight
	cin>>hight;//user enter
	
	x=b1+b2;//add to integers tpgether
	static_cast<float>(x);//change the type from int to float
	Area= hight*x/2;//the trapezoid formula

	cout<<"The area of the trapezoid is:";//a prompt fpr answer
	cout<<Area<<endl;//the answer of the area

return 0;
}
