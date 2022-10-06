#include <iostream>
#include <fstream>
/*
        Author: Andrew Yang(ay0123@my.unt.edu)
        Date: 11/16
        Instructor: Joseph Helsing
        Description:Read the intergers from the text and calculate average
*/
using namespace std;

int main(){
	ifstream inFS;//Input file stream
	int fileNum;//data value from file
	int fileSum=0;//sun value from file
	int i;
	double fileavg;//average value from file
	cout<<"Open file act9A.txt."<<endl;//try tp open file
	inFS.open("act9A.txt");	//opening a file
	for(i=0;i<9;++i)//for loop to read the intergers and add them together
	{
		if(!inFS.eof())//to the end
		{
			inFS>>fileNum;
			fileSum+=fileNum;
		}
		else
		{
		break;
		}
	}
	fileavg=fileSum/(static_cast<double>(i));
	cout<<"The average of intergers is "<<fileavg<<endl;//output the average of intergers
	
	inFS.close();//Done with file, so close it


	return 0;
}

