#include <iostream>
using namespace std;

int main() {
    float length1, width1, length2, width2;
    float area1, area2;

    cout << "Enter the length of Rectangle 1: ";
    cin >> length1;
    cout << "Enter the width of Rectangle 1: ";
    cin >> width1;
  
    cout << "\nEnter the length of Rectangle 2: ";
    cin >> length2;
    cout << "Enter the width of Rectangle 2: ";
    cin >> width2;

    area1 = length1 * width1;
    area2 = length2 * width2;
  
    cout << "\nArea of Rectangle 1: " << area1 << endl;
    cout << "Area of Rectangle 2: " << area2 << endl;

    if (area1 == area2) {
        cout << "\nBoth rectangles have equal areas." << endl;
    } 
    else if (area1 > area2) {
        cout << "\nRectangle 1 has a larger area than Rectangle 2." << endl;
    } 
    else {
        cout << "\nRectangle 2 has a larger area than Rectangle 1." << endl;
    }

    return 0;
}
