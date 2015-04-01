/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 1st, 2015, 9:17 AM
 * Purpose:  Busted Keypad, I am hungry, find closest temp for
 *           food!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short tAbove=999,tBelow=0,temp,posSet=0;
    //Prompt the user
    cout<<"Input a temperature from 0 to 999"<<endl;
    cout<<"Keys 1,4,and 7 don't work"<<endl;
    cout<<"Type in the desired temp and then closest temps are displayed"<<endl;
    cin>>temp;
    //Exhaust Possible temperature choices
    for(int t100=0;t100<=9;t100++){
        for(int t10=0;t10<=9;t10++){
            for(int t1=0;t1<=9;t1++){
                if(t100==1||t10==1||t1==1)continue;//skip
                if(t100==4||t10==4||t1==4)continue;//skip
                if(t100==7||t10==7||t1==7)continue;//skip
                posSet++;//How many temperature settings are possible
                unsigned int tloop=t100*100+t10*10+t1;//What is this setting
                unsigned int tdiffA=tloop-temp;//Temp diff on high side
                unsigned int tdiffB=temp-tloop;//Temp diff on low side
                if((tdiffA>=0)&&(tdiffA<(tAbove-temp)))tAbove=tloop;
                if((tdiffB>=0)&&(tdiffB<(temp-tBelow)))tBelow=tloop;
            }
        }
    }
    //Output the range of temperature settings
    cout<<"The input temperature = "<<temp<<" degrees"<<endl;
    cout<<"The closest temp on the high side = "<<tAbove<<" degrees"<<endl;
    cout<<"The closest temp on the  low side = "<<tBelow<<" degrees"<<endl;
    cout<<"There are a total of "<<posSet<<" temperature settings"<<endl;
    //Exit stage right
    return 0;
}