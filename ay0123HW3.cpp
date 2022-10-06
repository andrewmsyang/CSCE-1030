#include <iostream>
using namespace std;
/*
        Name: ay0123HW3.cpp
        Auhhor: Andrew Yang (ay0123@my.unt.edu)
        Date: 10/23
        Instructor: Joseph Helsing
        Description: CSCE 1030: Homework 3
*/

int const SIZE = 7; //constant SIZE variable

void start (char initial[][SIZE], int a);
void output (char initial[][SIZE], int a);
int count (char initial[][SIZE], int a);
void recover(char initial[][SIZE], char now[][SIZE], int a);
void spread(char initial[][SIZE], char now[][SIZE], int a);

int main()
{
        cout<<"+---------------------------------------+"<<endl;
        cout<<"|    Computer Science and Engineering   |"<<endl;
        cout<<"|    CSCE 1030 - Computer Science I     |"<<endl;
        cout<<"| Andrew Yang  ay0123  ay0123@my.unt.edu|"<<endl;
        cout<<"+---------------------------------------+"<<endl;
        cout<<"                                         "<<endl;

	char initial[SIZE][SIZE];
	char now[SIZE][SIZE];   			 //two char array
	int x, y;                                        //integer coordinates
	int day = 0;                                     //integer day number
	
   	start (initial, SIZE);           
   	start (now, SIZE);                               //void functions

    while (1)
    {
        cout << "Please Enter a location to infect: ";
        cin >> x >> y;                             	 //input

        if (x < 1 || y < 1 || x > SIZE || y > SIZE)     //if coordinates is not in range
        {
            cout << "Those coordinates are outside the bounds of this region." << endl;
        }
        else
        {
            break;                                      //exit
        }
    }

    initial[x-1][y-1] = 'i';                            //set position 'i'

    while (1)   
    {
        cout << "Day " << day <<endl;
        output(initial, SIZE);
        cout << endl;

        spread(initial, now, SIZE);
        recover(initial, now, SIZE);
        day++;

        for (int i = 0; i < SIZE; ++i)        		//chnage the array
        {
            for (int j = 0; j < SIZE; ++j)
            {
                initial[i][j] = now[i][j];
            }
        }

        if (count(initial, SIZE) == 0)                  //exit
        {
            break;
        }
    }

    cout << "Day " << day <<endl;
    output(initial, SIZE);
    cout << endl;
    cout << "It took " << day + 1 << " days for the outbreak to end." << endl;

    return 0;
}

/*
 Function: start
 Parameters: char initial[][SIZE], int a
 Return: none
 Description: initialize array
*/
void start (char initial[][SIZE], int a)
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            initial[i][j] = 's';
        }
    }
}

/*
 Function: output
 Parameters: char initial[][SIZE], int a
 Return: none
 Description: print out array
*/
void output (char initial[][SIZE], int a)
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            cout << initial[i][j] << " ";
        }
        cout << endl;
    }
}

/*
 Function: count
 Parameters: char initial[][SIZE], int a
 Return: number
 Description: count the number in array
*/
int count (char initial[][SIZE], int a)
{
    int number = 0;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            if (initial[i][j] == 'i')
            {
                number ++;
            }
        }
    }
    return number;
}

/*
 Function: recover
 Parameters: char initial[][SIZE], char now[][SIZE], int a
 Return: none
 Description: recovered
*/
void recover(char initial[][SIZE], char now[][SIZE], int a)
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            if (initial[i][j] == 'i')
            {
                now[i][j] = 'r';
            }
        }
    }
}

/* 
 Function: spread
 Parameters: char initial[][SIZE], char now[][SIZE], int a
 Return: none
 Description: spread
*/
void spread(char initial[][SIZE], char now[][SIZE], int a)
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            if (initial[i][j] == 's')           //test if this people is susceptible
            {
                switch (i)                      //test what is the x coordinate
                {   case 0: if (j == 0)         //test what is the y coordinate
                            {
                                if (initial[i+1][j] == 'i' || initial[i+1][j+1] == 'i' || initial[i][j+1] == 'i')
                                {
                                    now[i][j] = 'i';
                                }
                            }
                            else if (j == a - 1)
                            {
                                if (initial[i+1][j] == 'i' || initial[i+1][j-1] == 'i' || initial[i][j-1] == 'i')
                                {
                                    now[i][j] = 'i';
                                }
                            }
                            else
                            {
                                if (initial[i+1][j] == 'i' || initial[i+1][j+1] == 'i' || initial[i][j+1] == 'i' || initial[i][j-1] == 'i' || initial[i+1][j-1] == 'i')
                                {
                                    now[i][j] = 'i';
                                }
                            }
                            break;
                    case SIZE-1: if (j == 0)
                                {
                                    if (initial[i-1][j] == 'i' || initial[i-1][j+1] == 'i' || initial[i][j+1] == 'i')
                                    {
                                        now[i][j] = 'i';
                                    }
                                }
                                else if (j == a - 1)
                                {
                                    if (initial[i-1][j] == 'i' || initial[i-1][j-1] == 'i' || initial[i][j-1] == 'i')
                                    {
                                        now[i][j] = 'i';
                                    }
                                }
                                else
                                {
                                    if (initial[i-1][j] == 'i' || initial[i-1][j-1] == 'i' || initial[i][j+1] == 'i' || initial[i][j-1] == 'i' || initial[i-1][j+1] == 'i')
                                    {
                                        now[i][j] = 'i';
                                    }
                                }
                            break;
                    default:    if (j == 0)
                                {
                                    if (initial[i-1][j] == 'i' || initial[i-1][j+1] == 'i' || initial[i][j+1] == 'i' || initial[i+1][j] == 'i' || initial[i+1][j+1] == 'i')
                                    {
                                        now[i][j] = 'i';
                                    }
                                }
                                else if (j == a - 1)
                                {
                                    if (initial[i-1][j-1] == 'i' || initial[i-1][j] == 'i' || initial[i][j-1] == 'i' || initial[i+1][j-1] == 'i' || initial[i+1][j] == 'i')
                                    {
                                        now[i][j] = 'i';
                                    }
                                }
                                else
                                {
                                    if (initial[i-1][j-1] == 'i' || initial[i-1][j] == 'i' || initial[i-1][j+1] == 'i' || initial[i][j-1] == 'i' || initial[i][j+1] == 'i' || initial[i+1][j-1] == 'i' || initial[i+1][j] == 'i' || initial[i+1][j+1] == 'i')
                                    {
                                        now[i][j] = 'i';
                                    }
                                }
                }
            }
        }
    }
}
