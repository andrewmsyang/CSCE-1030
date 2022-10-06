#include<iostream>
#include<string>
/*
Author: Andrew Yang(ay0123@my.unt.edu)
Date: 9/28
Instructor: Joseph Helsing
Description: To check the user enter is a palindrome or not.
*/
using namespace std;

int main()
{
	bool initialized=false;//bool false
	string userword;//string 
	cout<<"Enter length 3,4,5:";//ask for input
	cin>>userword;//user enter
	
	if(userword.length()==5)//string equals to 5
	{
		if(userword.at(0)==userword.at(4)&&userword.at(1)==userword.at(3))//comparing
		{
			initialized= true;
			cout<<"Your enter is a palindrome."<<endl;//result
		}
		else
		{
			initialized= false;
			cout<<"Your enter is not a palindrome."<<endl;
		}
	}
	else if(userword.length()==4)//string equals to 4
	{
		if(userword.at(0)==userword.at(3)&&userword.at(1)==userword.at(2))//comparing
                {
                        initialized= true;
			cout<<"Your enter is a palindrome."<<endl;//result
                }
                else
                {
                        initialized= false;
			cout<<"Your enter is not a palindrome."<<endl;
                }
	}
	else if(userword.length()==3)//string equals to 3
	{
		if(userword.at(0)==userword.at(2))//comparing
                {
                        initialized= true;
			cout<<"Your enter is a palindrome."<<endl;//result
                }
                else
                {
                        initialized= false;
			cout<<"Your enter is not a palindrome."<<endl;
                }
	}
	else//ouside of range
	{
		cout<<"Error! The word is wrong size."<<endl;
	}

        return 0;
}
