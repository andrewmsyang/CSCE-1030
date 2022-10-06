#include<iostream>
#include<cmath>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

const int ROW_SIZE=4;
const int COL_SIZE=4;

int find_max(int my_array[ROW_SIZE][COL_SIZE], int& row_index, int& column_index)
{
	row_index=0;
	column_index=0;
	int max;
	for(int i=0; i<ROW_SIZE; ++i)
	{
		for(int j=0; j<COL_SIZE; ++j)
		{
			if(max < my_array[ROW_SIZE][COL_SIZE])
			{
				max= my_array[ROW_SIZE][COL_SIZE];
				row_index=i;
				column_index=j;
			}
		}
	}
	return max;
}

int main()
{
	int my_array[ROW_SIZE][COL_SIZE];
	int max_row=4, max_column=4;
	int my_max= find_max(int my_array[ROW_SIZE][COL_SIZE], max_row, max_column);
	cout<<"The largest number of the array is "<<my_max<<" and is located at ("<<max_row<<", "<<max_column<<").";
	
	return 0;	
}