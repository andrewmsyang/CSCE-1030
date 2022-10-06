#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;

int main()
{
	enum Season{Spring='S', Summer='M', Fall='F', Winter='W'};
	char S, M, F, W;
	const int springavgtemp= 68;
	const int summravgtemp= 95;
	const int winteravgtemp= 42;
	const int fallavgtemp= 72;
	char Season;
	int y;
	
	cout<<"Enter S for Spring, M for Summer, F for Fall and W for Winter:";
	cin>>Season;
	cout<<"Enter today's temperature:";
	cin>>y;
	
	switch(Season)
	{
		case Spring:
			if(y>springavgtemp)
			{
				cout<<"It is hotter than usual."<<endl;
			}
			else if(y<springavgtemp)
			{
				cout<<"It is colder than usual."<<endl;
			}
			else
			{
				cout<<"The weather looks normal."<<endl;
			}
			break;
		
		case Summer:
			if(y>summravgtemp)
			{
				cout<<"It is hotter than usual."<<endl;
			}
			else if(y<summravgtemp)
			{
				cout<<"It is colder than usual."<<endl;
			}
			else
			{
				cout<<"The weather looks normal."<<endl;
			}
			break;	
		
		case Fall:
			if(y>fallavgtemp)
			{
				cout<<"It is hotter than usual."<<endl;
			}
			else if(y<fallavgtemp)
			{
				cout<<"It is colder than usual."<<endl;
			}
			else
			{
				cout<<"The weather looks normal."<<endl;
			}
			break;
		
		case Winter:
			if(y>winteravgtemp)
			{
				cout<<"It is hotter than usual."<<endl;
			}
			else if(y<winteravgtemp)
			{
				cout<<"It is colder than usual."<<endl;
			}
			else
			{
				cout<<"The weather looks normal."<<endl;
			}
			break;
			
		default:
			cout<<"Wrong Season."<<endl;
			break;
	}

	return 0;
}