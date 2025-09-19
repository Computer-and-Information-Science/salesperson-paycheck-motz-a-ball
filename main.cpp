//Matthew Maza
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
  
ifstream fileDataIn;
string fileName;

//Prompt for file name input
cout << "Type file name here ";
cin >> fileName;

//Declaring variables
string firstName, lastName;
double baseSalary, commissionPercent, sales, expenses, grossPay, commission;

//Open file
fileDataIn.open(fileName);

//Read from file
fileDataIn >> firstName >> lastName >> baseSalary >> commissionPercent >> sales >> expenses;

//Calculations
commission = sales*(commissionPercent/100);
grossPay = baseSalary + commission + expenses;

cout << "Payroll data for " << firstName << " " << lastName << endl;
cout << endl;
cout << setprecision(2) << fixed;

cout << "Base Salary:";
cout << setw(11) << right;
cout << baseSalary << endl;

cout << "Commission: ";
cout << setw(11) << right;
cout << commission << " (" << commissionPercent << "% of " << baseSalary << ")" << endl;

cout << "Expenses: ";
cout << setw(13) << right;
cout << expenses << endl;

cout << "               --------" << endl;

cout << "Total:";
cout << setw(17) << right;
cout << grossPay << endl;


return 0;

}
