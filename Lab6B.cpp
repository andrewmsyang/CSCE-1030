#include<iostream>
using namespace std;
/*
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/19
Instructor: Joseph Helsing
Description:Two-Dimensional Arrays//to caluclate the row and cloumn
*/
int main()
{
	//declare variables
	const int ROW_SIZE=2;
	const int COLUMN_SIZE=5;
	int matrix[ROW_SIZE][COLUMN_SIZE];//2D array
	int row_sum[ROW_SIZE];//array
	int column_sum[COLUMN_SIZE];//array	
	int rowsum=0, columnsum=0;

	for(int i=0;i<ROW_SIZE;++i)//array for row
	{		

		for(int h=0; h<COLUMN_SIZE;++h)//array for column
		{
			cout<<"Enter data for row#"<<i+1<<" and column#"<<h+1<<":";
			cin>>matrix[i][h];//prompt and read in row and column numbers
		}
	}
	cout<<"You entered:"<<endl;
	for(int i=0;i<ROW_SIZE;++i)//array for row
	{
		for(int h=0;h<COLUMN_SIZE;++h)//array for column
		{
			cout<<matrix[i][h]<<"\t";//print column
		}
		cout<<"\n";
	}
	for(int i=0; i<ROW_SIZE;++i)
	{
		for(int h=0;h<COLUMN_SIZE;++h)
		{
			rowsum+=matrix[i][h];//add 
		}
		row_sum[i]=rowsum;//sum of row
		rowsum=0;
	}
	for(int i=0; i<ROW_SIZE;++i)
	{
		cout<<"The row "<<i+1<<" sum is "<<row_sum[i]<<endl;
	}
	for(int h=0; h<COLUMN_SIZE;++h)
	{
		for(int i=0; i<ROW_SIZE;i++)
		{
			columnsum+=matrix[i][h];//add
		}
		column_sum[h]=columnsum;//sum of column
		columnsum=0;
	}
	for(int h=0;h<COLUMN_SIZE;++h)
	{
		cout<<"The column "<<h+1<<" sum is "<<column_sum[h]<<endl;
	}
	
        return 0;
}


