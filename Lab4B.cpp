#include<iostream>
/*
Author: Andrew Yang(ay0123@my.unt.edu)
Date: 9/28
Instructor: Joseph Helsing
Description: To calculate 2 numbers in different cases. 
*/
using namespace std;

int main()
{
	int num1, num2, Options;//variables of 2 numbers and options 
	enum Options{ADD=1, MULT, SUB, DIV};//enum types
	cout<<"Welcome to the 1030 calculator. Please choose an option from the following list.\n";//print
	cout<<"1 for addition, 2 for multiplication, 3 for subtraction, 4 for division: ";//print rules
	cin>>Options;//user enter
	
	switch(Options)//different cases
	{
		case ADD://add
		cout<<"Please enter two numbers to add: ";
		cin>>num1>>num2;
		cout<<"Your result is "<<num1+num2<<endl;
		break;
		
		case MULT://multiply
		cout<<"Please enter two number to multiply: ";
		cin>>num1>>num2;
		cout<<"Your result is "<<num1*num2<<endl;
		break;
	
		case SUB://subtract
                cout<<"Please enter two number subtract: ";
                cin>>num1>>num2;
                cout<<"Your result is "<<num1-num2<<endl;
                break;
		
		case DIV://divide
                cout<<"Please enter two numbers to divide: ";
                cin>>num1>>num2;
		if(num2==0)//if the demonomatto equal to 0
		{
			cout<<"Error! Your demonimator cannot be 0!"<<endl;
		}
		else
		{
			cout<<"Your result is "<<num1/num2<<endl;		
		}
                break;
		
		default://outside of option
		cout<<"That is not a valid choice."<<endl;
		break;
	}
	
	cout<<"Good bye"<<endl;
		
        return 0;
}
