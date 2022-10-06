#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct Product
{
	string name;
	int num;
	double supply;
};

int main()
{
	Product my_product;
	
	cout<<"Enter name: ";
	getline(cin,my_product.name);
	
	cout<<"Enter initial supply: ";
	cin>>my_product.supply;
	
	cout<<"How many shipments? ";
	cin>>my_product.num;
	
	int size;
	typedef double* shipments;
	shipments made;
	made = new double[size];
	int count=0;
	
	cout<<"Enter shipments size: ";
	for(int i=0; i<my_product.num; i++){
		cin>>size;
		count+=size;
	}
	delete made;
	
	int update=0;
	update=my_product.supply-count;
	
	cout<<"Update Supply of New Product is "<<update;
	
	return 0;
}