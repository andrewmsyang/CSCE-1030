#include<iostream>
#include<cmath>
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/26
Instructor: Joseph Helsing
Description: To calculate the area of a right cylinder.(sidearea, basearea, and totalarea)
*/
using namespace std;

const double PI = 3.14159;//pi

//function prototypes
float calcBaseArea(float r);
float calcSideArea(float h, float r);
void  prnSurfArea(float base_area, float side_area);

int main()
{
	
		float h;//height
		float r;//radius
		float base_area;//area of base
		float side_area;//area of side
	
		
		cout<<"Enter the radius of the right cylinder in feet: ";//ask user for input
		cin>>r;//input
		
		cout<<"Enter the height of the right cylinder in feet: ";//ask user for input
		cin>>h;//input
		
		base_area = calcBaseArea(r);//output base area
		cout<<"Base surface area of right cylinder is "<<base_area<<" square feet."<<endl;
	
		side_area = calcSideArea(h, r);//output side area
		cout<<"Side surface area of right cylinder is "<<side_area<<" square feet."<<endl;

		prnSurfArea(base_area, side_area);//declar total area
}
/*
Function:calcBaseArea
Parameters:a float representing radius
Return:equation
Description:This fuction is to calculate base area
*/
float calcBaseArea(float r)//equation
{
	return (2 * PI * pow(r,2));
}

/*
Function:calcSideArea
Parameters:float of height and float of radius
Return:equation
Description:This fuction is to calculate the side area
*/
float calcSideArea(float h, float r)//equation
{
	return (h * (2 * PI * r));
}

/*
Function:prnSurfArea
Parameters:float base area and float side area
Return:none
Description:This function is to calculate the total area
*/
void prnSurfArea(float base_area, float side_area)//equation
{
	float total_area;
	total_area = base_area + side_area;
	cout<<"Totoal surface area of right cylinder is "<<total_area<<" square feet."<<endl;
}

