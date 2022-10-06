#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
/*
	Exam1
	Andrew Yang
	ay0123
*/
using namespace std;
int main(){
	int number, int2;
	char char1, char2;
	double square, double2;
	
	srand(time(0));
	number = rand()%3876+4225;
	
	square = sqrt(number);
	square=static_cast<char>(square);
	char1=square;
	
	printf("Enter a number between 65 and 90:",int2);
	scanf("%d",&int2);
	int2=static_cast<char>(int2);
	char2=int2;
	
	cout<<"The random character generate is "<<char1<<" and your guess was "<<char2;
return 0;
}
