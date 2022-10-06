#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<string>
#include<cctype>

using namespace std;

int main()
{
	string sentence;
	int sum;
	
	cout<<"Enter a sentence:";
	getline(sentence,cin);
	
	if(sentence.at()='.')
	{
			while(sentence.at()='.')
			{
				if(sentence=digits)
				{
					sentence/48;
					sum++;
				}
				if(sentence=alphabet)
				{
					sentence.tolower();
					sentence=sentence.tolower();
				}
				cout<<"Sum of digits:"<<sum<<endl;
				cout<<sentence<<endl;
			};
	}
	else
	{
		cout<<"Sentence not ended properly."<<endl;
	}
	
	return 0;
}