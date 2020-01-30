#include <iostream>

using namespace std;

int main()
{

  double numHours; // get user input for hours worked
  cout << "How many hours were worked this week? " << endl;
  cin >> numHours; // store hours

  // get overtime with assumption that 40 hours is the standard amount of hours worked per week
  double overtimeHours = numHours - 40.0;

  if (overtimeHours <= 0) { // if overtime is not included
    double grossPay = 40 * 16; // calculate grossPay
    double socialSec = 0.06 * grossPay;
    double federalTax = 0.14 * grossPay;
    double stateTax = 0.05 * grossPay;
    double medInsurance = 10.0;
    double taxes = socialSec + federalTax + stateTax + medInsurance; // add all withholding amounts
    double netPay = grossPay - taxes; // subtract withholding from gross pay

    // output totals
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Withholding: $" << taxes << endl;
    cout << "Net Pay: $" << netPay << endl;
  }

  else { // if overtime is included
    double overtimePay = overtimeHours * 24.0; // multiply overtime hours by overtime rate (16 * 1.5)
    double grossPay = (40.0 * 16.0) + (overtimePay); // add overtime rate to standard rate of pay
    double socialSec = 0.06 * grossPay;
    double federalTax = 0.14 * grossPay;
    double stateTax = 0.05 * grossPay;
    int medInsurance = 10;
    double taxes = socialSec + federalTax + stateTax + medInsurance;
    double netPay = grossPay - taxes; // subtract withholding from gross pay

    // output totals
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Withholding: $" << taxes << endl;
    cout << "Net Pay: $" << netPay << endl;
  }

  return 0;
}
