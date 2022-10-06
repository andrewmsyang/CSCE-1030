#include <iostream>
using namespace std;
/*
        Author: Andrew Yang(ay0123@my.unt.edu)
        Date: 11/19
        Instructor: Joseph Helsing
        Description: Dynamic Arrays
*/

int main()
{
	
	int size;//size variable for loop
	typedef int* InPtr;//declare point
	InPtr numlist;//numlist point
		
	cout<<"What is the size of arry?";//ask for the user
	cin>>size;//cin size

	numlist = new int[size];//new memory
	
	for(int i=0; i<size; i++)//read the intergers
	{
		cout<<"Enter value #"<<i+1<<": ";
		cin>>numlist[i];
	}
	//display the numbers in reverse order
	for(int i=size; i>0; i--)
	{
	
		cout<<"Value #"<<i<<": ";
		cout<<numlist[i-1]<<endl;
	}
	delete numlist;//delete the pointer
	
	return 0;

}
