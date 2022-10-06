#include <iostream>
using namespace std;
/*
Author: Andrew Yang(ay0123@my.unt.edu)
Date:9/14/2018
Instructor: Joseph Helsing
Description: Calculate an arithmetic expression using a char variable as integral.
*/

int main()
{
	
	const float OFFSET = 0.32;//constent number
	float var1 = 39.4;//variable 1
	float var2 = 7.5;//varriable 2
	char var3 = '4';//char variable
	float var4 = 22;//variable4
	float var5;//variable 5

	static_cast<float>(var3);//changing char variable to float
	
	var5=((var4-var1)/var2)+ OFFSET + var3;//an equation to calculate = 50
 
	cout<<var5<<endl;//prompt out the answer

return 0;
}

