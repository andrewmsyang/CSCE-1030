#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void get_words(ifstream& in_s, ofstream& out_x);

int main(){

	int count;
	char c; 
	ifstream in_s;
	ofstream out_x;
	
	get_words(in_s,out_x);

	while(in_s.get(c))
	{ 
		out_x.put(c);
		count++;
	}
	cout<<count<<" characters have been copied.";
	
	in_s.close();
	out_x.close();
        return 0;
}

void get_words(ifstream& in_s, ofstream& out_x)
{
	char input_file[100];
	char output_file[100];
	cout<<"Enter the file you want to copy: ";
	cin>>output_file;
	cout<<"Enter the file you want to paste: ";
	cin>>input_file;
	in_s.open(input_file);
	out_x.open(output_file);
	if(in_s.fail())
	{
		cout<<"Unable to open input file"<<input_file<<endl;
		exit(EXIT_FAILURE);
	}
	if(out_x.fail())
	{
		cout<<"Unable to open output file"<<output_file<<endl;
        exit(EXIT_FAILURE);
	}
	
	return;

}