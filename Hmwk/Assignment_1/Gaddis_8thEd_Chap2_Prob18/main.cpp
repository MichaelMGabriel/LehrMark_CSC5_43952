/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 4, 2015, 8:22 AM
 *      Purpose:  2nd Homework Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //Input/Assigned Values
    nCust=16500;//Number of Customers
    pEDrnks=15;//Percentage Energy Drinkers
    pCDrnks=58;//Percentage out of Energy Drinkers that are Citrus Drinkes
    //Process/Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks+0.5;//Round up
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks+0.5;//Round up
    //Output Everything
    cout<<"Customer Survey Problem"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Number of customers = "<<nCust<<endl;
    cout<<"Percentage Energy Drinkers = "
                   <<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers/Energy Drinkers = "
                  <<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    //Exit stage right
    return 0;
}