#include <iostream>
#include <fstream>
#include <cstdlib>
/*
        Author: Andrew Yang(ay0123@my.unt.edu)
        Date: 11/16
        Instructor: Joeseph Helsing
        Description:this program reads the entire contents of an input file and will display it with the same format.
*/
using namespace std;

void get_stream(ifstream& in_s, ofstream& out_x);//function

int main(){

	char c; 
	ifstream in_s;//declaration of the stream of type input
	ofstream out_x;//declaration of the stream of type output
	
	get_stream(in_s,out_x);

	cout<<"*** Here are the contents of the input file ***"<<endl;

	while(in_s.get(c))//read all characters and end the file
	{ 
		out_x.put(c);//read all the characters
	}

	cout<<"*** Done writing the contents of the file ***"<<endl;
	
	in_s.close();
	out_x.close();//close the file
        return 0;
}
/*
	function: get_stream
	Parameters: n/a
	return:
	Description:This function 
*/
void get_stream(ifstream& in_s, ofstream& out_x)
{
	char input_file[15];//char variable
	char output_file[15];//char variable
	cout<<"Enter the name of the input file: ";//ask for the file
	cin>>input_file;
	cout<<"Enter the name of the output file: ";//ask for the file 
	cin>>output_file;
	in_s.open(input_file);//connect tp the input file and test
	out_x.open(output_file);
	if(in_s.fail())
	{
		cout<<"Unable to open input file"<<input_file<<endl;
		exit(EXIT_FAILURE);//exsu if cannot open file
	}
	if(out_x.fail())
	{
		cout<<"Unable to open output file"<<output_file<<endl;
                exit(EXIT_FAILURE);//exsu if cannot open file
	}
	return;

}
