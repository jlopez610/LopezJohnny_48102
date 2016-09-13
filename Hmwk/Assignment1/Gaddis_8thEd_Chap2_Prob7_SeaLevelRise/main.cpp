/* 
 * File:   main.cpp
 * Author: Johnny Lopez
 * Created on September 13, 2016, 11:55 AM
 * Purpose:  Calculate when homeowners in Riverside will
 *           have beachfront property.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CNVMMFT=304.8;   //Conversion millimeters to feet from Google
const float CNVMMM=1000.0F;  //Conversion millimeters to meters

//Functional Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float rate=1.5f; //Sea level rise rate in mm/year
    int nYear1=5,nYear2=7,nYear3=10; //Years to calculate rise
    float rise1,rise2,rise3; //Solutions to the three years above
    int nYrBch; // Number of years before your house is beach front property
    float elevRiv=860.0f; //Elevation of Riverside in feet according to wikipedia
    
    //Process values -> Map Inputs to Outputs
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    
    //Display Output
    cout<<"The rate of sea level rise is = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<"years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<"years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nYear3<<"years the sea will rise "<<rise3<<" mm"<<endl;
    cout<<"At this rate Riverside won't have beach front property for ";
    cout<<nYrBch<<" years"<<endl;
    cout<<"This rate equates to "<<nYrBch*rate/CNVMMM<<endl;
    
    //Exit Program
    return 0;
}