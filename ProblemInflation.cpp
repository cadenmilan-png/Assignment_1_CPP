#include <iostream>

using namespace std;

int main()
{

  double numYears; // declare number of years as a double
  double inflationRate; // declare inflation rate as a double
  double costItem; // declare the cost of the item as a double
  int i; // declaring variable i as an integer

  cout << "What is the cost of the item? " << endl; // prompt user for cost of the item
  cin >> costItem; // store that input
  cout << "What is the number of years from now that the item will be purchased? " << endl; // prompt user for the number of years from now that item will be purchased
  cin >> numYears; // store that input
  cout << "What is your inflation rate (%)?" << endl; // prompt user for inflation rate percentage
  cin >> inflationRate; // store that input
  inflationRate = inflationRate/100; // convert inflation rate into a percentage

  for (i = 0; i < numYears; ++i) { // use for loop to calculate inflation rate after each year up until desired year
    costItem = costItem + (costItem * inflationRate);
  }

  cout << "The estimated cost of the item in " << numYears << " is $" << costItem << "." << endl; // output cost of item in the desired year

  return 0;
}
