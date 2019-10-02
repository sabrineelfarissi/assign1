
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    
    //declaring data file
    ifstream inFile;
    string fileName;
    string original;
    string jan_month;
    string feb_month;
    string dec_month;
    int hoursWorked;
    int total_Dec = 0;
    int total_Jan = 0;
    int total_Feb = 0;
    
    //opening data file
    cout << "Enter file name  : ";
    cin >> fileName;
    
    inFile.open(fileName.c_str());
    while (inFile.fail()){
        inFile.clear();
        cout << "Incorrect File Name. Please try again. " << endl << "Enter file name :";
        cin >> fileName;
        inFile.open(fileName.c_str());
    }
    
    string dec = "Dec" ;
    string jan = "Jan" ;
    string feb = "Feb";
    
    
    //finding month in the data set, adding the total number of hors worked for each month
    
    while (inFile >> original >> hoursWorked){
        if (original.find(dec) != std::string::npos){
            dec_month = dec;
            if (dec_month == "Dec") {
                total_Dec = hoursWorked + total_Dec;
            }
        }
        
        if (original.find(jan) != std::string::npos){
            jan_month = jan;
            if (jan_month == "Jan" ) {
                total_Jan = hoursWorked + total_Jan;
            }
        }
        
        if (original.find(feb) != std::string::npos){
            feb_month = feb;
            if (feb_month == "Feb" ) {
                total_Feb = hoursWorked + total_Feb;
            }
        }
        
    }
    
    //printing output
    cout << "Month" << " " << "Total Hours" << endl;
    cout << dec_month << " " << total_Dec << endl;
    cout << jan_month << " " << total_Jan << endl;
    cout << feb_month << " " << total_Feb << endl;
    
    
    
    return 0;
 
    
    
    
}
