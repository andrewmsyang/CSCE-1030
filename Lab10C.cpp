#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
/*
        Author: Andrew Yang(ay0123@my.unt.edu)
        Date: 11/19
        Instructor: Joseph Helsing
        Description:Pointers and Dynamic Memory
*/
struct Employee
{
	string name;//full name of the Employee
	int experience;//number of years of experience
	double bonus;//bonus earned
};

int main()
{
	Employee* employ = NULL;//pointer to point at type Employee
	string employName;
	int employYear;
	double employBonus;
	cout << "Enter the name: ";
	getline(cin, employName);//Get name
	cout << "Enter the years of experience: ";
	cin >> employYear;//Get experience

	employ = (Employee*) malloc (sizeof(Employee));
	employ->name = employName;
	employ->experience = employYear;

	if (employYear > 10){//check employee bonus
		employBonus = 5000.00;
	}
	else{
		employBonus = 3000.00;
	}

	employ->bonus = employBonus;

	cout << "The name of the employee is: " << employ->name << endl;
	cout << "the bonus earned by the employee is: " << employ->bonus << endl;

	delete employ;

	return 0;
}
