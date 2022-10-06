#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstdlib>
#include<string>
/*
	Exam1
	Andrew Yang
	ay0123
*/
using namespace std;
int main(){

	string fullname;
	int Exam1, Exam2;
	const int value=2;
	double average;
	
	cout<<"Enter name:";
	getline(cin,fullname);
	
	cout<<"Enter first grade:";
	cin>>Exam1;
	
	cout<<"Enter second grade:";
	cin>>Exam2;
	
	average= (static_cast<double>(Exam1)+static_cast<double>(Exam2))/static_cast<double>(value);
	
	cout<<fullname<<" scored "<<Exam1<<" in Exam 1 and "<<Exam2<<" in Exam 2. The average score is "<<average;
	
	return 0;
}
