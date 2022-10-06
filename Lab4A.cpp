#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
/*
Author: Andrew Yang(ay0123@my.unt.edu)
Date: 9/28
Instructor: Joseph Helsing
Description: To compare the user enter number and the random number.
*/
using namespace std;

int main()
{
	int x;//x variable of user enter
	int v;//v variable of random number
	
	cout<<"Enter a value between 1 and 100: ";//ask for user enter

	cin>>x;//user entering the number
	srand(time(NULL));//random seed
	if(x>=1&&x<=100)//the range of x between 1 to 100
	{
		v=rand()%100+1;//random number between 1 to 100
		cout<<"The random number is: "<<v<<endl;//print out the random number
		 if(x>v)//if user number bigger than random number
		{
			cout<<"Your number is larger than random number."<<endl;//print result
		}	
		else if(x<v)//number smaller than random num
		{
			cout<<"Your number is smaller than random number."<<endl;//print result
		}
		else//numbr equal to random number
		{
			cout<<"Youur number is equal to random number."<<endl;//print result
		}
	}		
	else//outside of reange
	{
		cout<<"Your number is outside the range."<<endl;//print the result
	}


return 0;
}
