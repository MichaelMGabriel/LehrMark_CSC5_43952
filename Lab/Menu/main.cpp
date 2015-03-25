/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Mar 23rd, 2015
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve problem 1"<<endl;
    cout<<"Type 2 to solve problem 2"<<endl;
    cout<<"Type 3 to solve problem 3"<<endl;
    cout<<"Type 4 to solve the Cable Bill"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{
                int sum=1+2+3+4+5+6+7+8+9+10;
                cout<<endl;
                cout<<"Solution to 1 sum(1->10)="<<sum<<endl;
                cout<<endl;
                break;
            }
            case '2':{
                int prod=1*2*3*4*5*6*7*8*9*10;
                cout<<endl;
                cout<<"Solution n!(1->10)="<<prod<<endl;
                cout<<endl;
                break;
            }
            case '3':{
                float quot=1.0f/2/3/4/5/6/7/8/9/10;
                cout<<endl;
                cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
                cout<<endl;
                break;
            }
            case '4':{
                //Declare Variables
                ofstream out;//Output the results in a file
                float vwdHrs;//Hours viewed (hrs)
                char package;//Package AaBbCc
                const int SIZE=40;//Max size of name = 39 characters
                char name[SIZE];//Customer Name
                float bill;//Cable Bill in $'s
                //Open the file
                out.open("Cable.dat");
                //Prompt the user for inputs
                cout<<"How many hours did you view this month?"<<endl;
                cin>>vwdHrs;
                cout<<"What is your package A,B,C"<<endl;
                cin>>package;
                cout<<"What is the customers name?"<<endl;
                cin.ignore();
                cin.getline(name,SIZE);
                //Calculate the paycheck
                switch(package){
                    case 'A':
                    case 'a':{
                        bill=9.95;
                        if(vwdHrs>10)bill+=2*(vwdHrs-10);
                        break;
                    }
                    case 'B':
                    case 'b':{
                        bill=14.95;
                        if(vwdHrs>20)bill+=(vwdHrs-20);
                        break;
                    }
                    case 'C':
                    case 'c':{
                        bill=19.95;
                        break;
                    }
                    default:  cout<<"Wrong Package Chosen"<<endl;
                };
                //Output the results to the file
                out<<fixed<<setprecision(2)<<showpoint;
                out<<"Your Cable Bill From CSC5 RCC Programming Class"<<endl;
                out<<"Customer Name: "<<name<<endl;
                out<<"Package: "<<package<<endl;
                out<<"Hours Viewed: "<<vwdHrs<<endl;
                out<<"Amount Owed: $"<<bill<<endl;
                //Close the file
                out.close();
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}