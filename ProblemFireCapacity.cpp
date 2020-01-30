#include <iostream>

using namespace std;

int main()
{
  int numPeople; // declare number of people as an integer
  int maxCapacity; // declare maximum capacity as an integer

  cout << "How many people will be attending? " << endl; // prompt user for the number of people attending
  cin >> numPeople; // store number of people
  cout << "What is the legal room capacity? " << endl; // prompt user for the maximum room capacity
  cin >> maxCapacity; // store room maximum capacity

  if (numPeople <= maxCapacity) { // check whether or not number of people is less than or equal to the maximum room capacity
    int addPeople;
    addPeople = maxCapacity - numPeople; // number of additional people is the difference between maximum allowed and number of people
    cout << "It is legal to hold the meeting and may allow an additional " << addPeople << " ."; // output the number of additional people
  }
  else { // if the number of people exceeds the maximum room capacity
    int lessPeople;
    lessPeople = numPeople - maxCapacity; // number of people above the maximum capacity is the difference between the number of people and the maximum capacity
    cout << "The meeting cannot be held as planned due to fire regulations. " << lessPeople << " people would need to be excluded in order to meet the fire regulations.";
  } // output number of people over maximum

  return 0;
}
