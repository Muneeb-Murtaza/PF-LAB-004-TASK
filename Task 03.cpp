#include <iostream>
using namespace std;

int main() {
    // Define a named constant for π
    const double PI = 3.1415926535;

    double radius, height;    
    double area, volume;
  
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;
  
    area = 2 * PI * radius * height + 2 * PI * radius * radius;
    volume = PI * radius * radius * height;
  
    cout << "\nThe surface area of the cylinder is: " << area << endl;
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
