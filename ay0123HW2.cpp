#include<iostream>
#include<cmath>
/*
Name: ay0123HW2.cpp
Author: Andrew Yang(andrewyang@my.unt.edu)
Date: 10/7
Instructor: Joseph Helsing
Description: Six numbers  
*/
using namespace std;

int main()
{
	cout<<"+---------------------------------------+"<<endl;
        cout<<"|    Computer Science and Engineering   |"<<endl;
        cout<<"|    CSCE 1030 - Computer Science I     |"<<endl;
        cout<<"| Andrew Yang  ay0123  ay0123@my.unt.edu|"<<endl;
        cout<<"+---------------------------------------+"<<endl;
        cout<<"                                         "<<endl;

	float num, sum=0, mean=0, min, max;//varabiles of menu
	int x;//chice
	enum options{SUM=1, MEAN, MIN, MAX, EXIT};//data type
	
	do 
    {
        cout<<"+******************* M E N U *****************+"<<endl;
        cout<<"| 1. Compute sum of 6 floating-point numbers  |"<<endl;
        cout<<"| 2. Compute mean of 6 floating-point numbers |"<<endl;
        cout<<"| 3. Compute min of 6 floating-point numbers  |"<<endl;
        cout<<"| 4. Compute max of 6 floating-point numbers  |"<<endl;
        cout<<"| 5. Exit                                     |"<<endl;
        cout<<"+*********************************************+"<<endl;
	cout<<"----> ";//ask for enter
        cin>>x;//input
        
        if(x<1||x>5)//set range
        {   
		cout<<"Invalid selection ("<<x<<"). Please enter choice 1 - 5."<<endl;
		cout<<endl;
		continue;//continue the loop if it is ture
	}
	else if(x==5)//set the range
        {
		break;//stop the loop if it is true
        }
        else
        {   
	cout<<"You will now be prompted to enter 6 numbers."<<endl;
            switch (x)
            {   
		case SUM:   for(int i=0;i<6;++i)//compute sum of 6 number
                            {   
				cout<<"Enter number "<<i+1<<": ";
                                cin>>num;
                                sum+=num;
                            }
                            	cout<<"The sum of the 6 numbers is: "<<sum<<endl;
                    		break;
                    
                case MEAN:  for(int i=0;i<6;++i)//computer mean of numbers
                            {   
				cout<<"Enter number "<<i+1<<": ";
                                cin>>num;
                                mean+=num;
                            }
                            	mean/=6;
                            	cout<<"The mean of the 6 numbers is: "<<mean<<endl;
                    		break;
                    
                case MIN:	cout<<"Enter number 1: ";//compute min of numbers
                            	cin>>num;
                            	min=num;
                    
                            for(int i=1;i<6;++i)
                            {  
				cout<<"Enter number "<<i+1<< ": ";
                                cin>>num;
                            if(min>num)
                                {   
				min=num;
				}
                            }
                                cout<<"The min of the 6 numbers is: "<<min<<endl;
                    		break;
                    
                case MAX:	cout<<"Enter number 1: ";//compute max of numbers
                            	cin>>num;
                            	max=num;
                    
                            for(int i=1;i<6;++i)
                            {   
				cout<<"Enter number "<<i+1<< ": ";
                                cin>>num;
                            if (max<num)
                                {   
				max=num;
				}
                            }
                           	 cout<<"The max of the 6 numbers is: "<<max<<endl;
                   		 break;
            }
   	cout<<endl;
        }
    
    }while(1);//do while loop
    
	cout<<"Thank you for using this program! Have a great day!"<<endl;
	cout<<endl;

 return 0;
}
