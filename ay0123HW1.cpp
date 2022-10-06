#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
/*
Author: Andrew Yang(ay0123@my.unt.edu)
Date:9/16/2018
Instructor: Joseph Helsing
Description:a program that calculates the acceleration due to gravity of a planet using the formula.
*/

int main()
{
        int h;//int variable for height
        const double G = 6.673e-11;//constant variable
        long int r;//long int variable for radius
	double g,t,M;//other variables

        cout<<"+---------------------------------------+"<<endl;
        cout<<"|    Computer Science and Engineering   |"<<endl;
        cout<<"|    CSCE 1030 - Computer Science I     |"<<endl;
        cout<<"| Andrew Yang  ay0123  ay0123@my.unt.edu|"<<endl;
        cout<<"+---------------------------------------+"<<endl;
        cout<<"                                         "<<endl;

        cout<<"Enter mass in kg:";//ask for mass
        cin>>M;//user enter
        cout<<"Enter radius in meters:";//ask for radius
        cin>>r;//user enter

        g = (G*M)/(pow(r,2));//formula to calculate acceleration 
          
        printf("The acceleration due to gravity is %.2lf meters per second squared. \n",g);//print out the answer, 2 digit after decimal point.
          
        cout<<"Enter height in feet:";//ask for height
        cin>>h;//user enter
        
        g*=3.28;//unit conversion
        t = sqrt(2*h/g);//formula to calculate time

        printf("The object will reach the surface is %.2lf seconds. \n",t);//print out the answer, 2 digit after decimal point.
    
return 0;
}
