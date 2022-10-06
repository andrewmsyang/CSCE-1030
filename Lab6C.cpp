#include <iostream>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/19
Instructor: Joseph Helsing
Description: Sorting Arrays 
*/
using namespace std;
int main()
{
        char arr[]={'b','f','a','z','m','g'};//array
        char numb;//a varible to swap
        
	for(int i=0;i<6;++i)//comparing each character
	{
		for(int j=i+1;j<6;++j)
                {
			if(arr[i]>arr[j])
                	{
                        numb = arr[j];
                        arr[j]= arr[i];
                        arr[i]= numb;//swapp
                	}
		}
        }
	for(int i=0; i<6; ++i)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
        return 0;
}
