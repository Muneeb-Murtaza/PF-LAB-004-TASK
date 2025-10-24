#include <iostream>
using namespace std;

int main() {
    int currentYear, birthYear, age;
  
    cout << "Enter the current year: ";
    cin >> currentYear;

    cout << "Enter the applicant's year of birth: ";
    cin >> birthYear;

    age = currentYear - birthYear;

    cout << "\nThe applicant is " << age << " years old." << endl;

    if (age >= 18 && age <= 28) {
        cout << "The applicant is eligible for hiring." << endl;
    } else {
        cout << "The applicant is NOT eligible for hiring." << endl;
    }

    return 0;
}
