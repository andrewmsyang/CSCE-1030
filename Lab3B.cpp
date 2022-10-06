#include <iostream>
using namespace std;
/*
Author: Andrew Yang(ay0123@my.unt.edu)
Date:9/14/2018
Instructor: Joseph Helsing
Description: To calulate tje salestax and the final amout of purchase.
*/

int main()
{
	const float taxrate = 0.0825;//constant variable of taxrate
	float pvalue;//variable of purchase value
	float finalamout;//variable of final amout
	float saletax;//variable of sales tax

	cout<<"Enter purchase value:";//ask fot the purchase value
	cin>>pvalue;//user enter 

	saletax= taxrate*pvalue;//formula to calculate sales tax
	finalamout= saletax+pvalue;//formula to calculate final amout
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);//floating number to 2 decimal places

	cout<<"The final amout is $"<<finalamout<<endl;//prompt the resualt

return 0;
}
