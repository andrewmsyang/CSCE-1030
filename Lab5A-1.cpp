#include<iostream>
#include<string>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/5
Instructor: Joseph Helsing
Description:String Manipulation//To find the start and end of DNA
*/
using namespace std;

int main()
{
	string sequence;//string sequence
	const string start="ATG";//const string ATG
	const string end="TAG";//const string TAG
	int x;//a variable to calculate the length
	string gene;//string gene
	cout<<"Enter your DNA sequence: ";//ask for input
	getline(cin,sequence);//input

	cout<<"First start codon is "<<sequence.find(start)<<endl;//result
	cout<<"First end codon is "<<sequence.find(end)<<endl;//result
	
	if(sequence.find(start)!=-1 && sequence.find(end)!=-1)//set the range 
	{
		x=sequence.find(end)-sequence.find(start)+3;//calculation of length of DNA
       		gene= sequence.substr(sequence.find(start),x);//change to characters
		cout<<"Your entire gene is: "<<gene<<endl;//result of gene
	}
	else
	{
		cout<<"Error, your input is out of range."<<endl;//of pf range
	}
	
	return 0;
}
