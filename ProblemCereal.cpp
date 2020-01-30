#include <iostream>

using namespace std;

int main()
{

  double numOunces; // declare ounces as a float
  double numTons; // declare ounces as a float

  cout << "Enter the weight of the package of cereal (oz): " << endl; // prompt user for cereal input
  cin >> numOunces; // store user input

  numTons = numOunces / 35273.92; // compute the number of tons by converting number of ounces

  cout << "The weight of the package of cereal is " << numTons << " metric tons."; // output the weight in metric tons

  return 0;
}
