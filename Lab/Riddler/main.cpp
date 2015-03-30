/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 30, 2015, 10:17 AM
 * Purpose:  Find a 4 digit number that passes the conditions
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Loop for all possible digits
    for(int d1000=0;d1000<=9;d1000++){
       for(int d100=0;d100<=9;d100++){
          for(int d10=0;d10<=9;d10++){
             for(int d1=0;d1<=9;d1++){
                 if((d1000==3*d10) && 
                    (d1%2==1   )  &&
                    ((d1000+d100+d10+d1)==27)&&
                    (d1!=d10&&d1!=d100&&d1!=d1000&&d10!=d100&&d10!=d1000&&d100!=d1000)){
                     cout<<"The Address Number = ";
                     cout<<d1000<<d100<<d10<<d1<<endl;
                 }
             }
          }
       }
    }

    return 0;
}