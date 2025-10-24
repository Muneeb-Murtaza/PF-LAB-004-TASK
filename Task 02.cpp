#include <iostream>
#include <string>
using namespace std;
int main() {
    string month1, month2, month3;  
    double rain1, rain2, rain3;     
    double average;                
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the rainfall (in inches) for " << month1 << ": ";
    cin >> rain1;
    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the rainfall (in inches) for " << month2 << ": ";
    cin >> rain2;
    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the rainfall (in inches) for " << month3 << ": ";
    cin >> rain3;
    average = (rain1 + rain2 + rain3) / 3;
    cout << "\nThe average rainfall for " 
         << month1 << ", " << month2 << ", and " << month3 
         << " is " << average << " inches." << endl;
Return 0; }
