/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 4, 2015, 8:22 AM
 *      Purpose:  Demonstration
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    char c;//Character to be used to display C
    //Prompt for the letter C to be user
    cout<<"What letter would you like to use for Big C"<<endl;
    cin>>c;
    //Output Big C
    cout<<"   "<<c<<c<<c<<c<<endl;
    cout<<"  "<<c<<"    "<<c<<endl;
    cout<<" "<<c<<"      "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<" "<<c<<"      "<<c<<endl;
    cout<<"  "<<c<<"    "<<c<<endl;
    cout<<"   "<<c<<c<<c<<c<<endl;
    //Exit stage right
    return 0;
}