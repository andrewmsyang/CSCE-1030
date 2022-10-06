#include <iostream>
#include <string>
using namespace std;
/*
        Author: Andrew Yang(ay0123@my.unt.edu)
        Date: 11/19
        Instructor: Joseph Helsing
        Description:Pointers and Dynamic Memory
*/

int main()
{
	int my_int =10, *my_iptr, *my_iptr2;//intergerts variables
	my_iptr=&my_int;//assigin my_int variable to the pointer my_iptr
	cout<<"The value of my_int using the "<<my_int<<endl;
	cout<<"The address of my_int using the "<<my_iptr<<endl;
	cout<<"The address of my_iptr using the "<<my_iptr<<endl;
	cout<<"The value of my_iptr using the "<<my_iptr<<endl;

	*my_iptr= 15;//value 1- to 15
	cout<<"The value of the my_int is now: "<<my_int<<endl;

	my_iptr = new int;//new memory 
	*my_iptr = 20;//value 20
	cout<<"The value of the my_int is now: "<<my_int<<endl;

	my_iptr2 = new int;//new memory
	my_iptr2 = my_iptr;//assigin my_iptr to my_iptr2
	cout<<"The value of the my_int is now: "<<*my_iptr2<<endl;

	delete my_iptr, my_iptr2;//delete both pointers

return 0;
}
