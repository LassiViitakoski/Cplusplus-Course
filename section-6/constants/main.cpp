/* 
  Frank's Carpet Cleaning Service
  Charges $30 per room
  Sales tax rate is 6%
  Estimates are valid for 30 days

  Prompt the user for the number of rooms they would like cleaned
  and provide an estimate such as:
     
  Estimate for carpet cleaning service:
  Number of rooms: 2
  Price per room: $30
  Cost: $60
  Tax: $3.6
  ====================================
  Total estimate: $63.6
  This estimate is valid for 30 days

  Pseudocode:
  Prompt the user to enter the number of rooms
  Display number of rooms
  Display price per room
  
  Display cost:  (number of rooms * price per room)
  Display tax:   number of rooms * price per room * tax rate
  Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
  Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main() {
  int rooms {0};
  const int price {30.0};
  const float taxRate {.06};
  const int estimateExpiry {30};

  cout << "Hello, welcome to Lassi's Carpet Cleaning Service" << endl;
  // cout << "Estimate for carpet cleaning service: " << endl;
  cout << "\nHow many rooms would you like cleaned?\n";
  cin >> rooms;

  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Number of rooms: " << rooms << endl;
  cout << "Price per room: $" << price << endl;
  cout << "Cost: $" << price * rooms << endl;
  cout << "Tax: $" << price * rooms * taxRate << endl;
  cout << "===============================" << endl;
  cout << "Total estimate: $" << price * rooms + price * rooms * taxRate << endl;
  cout << "This estimate is valid for " << estimateExpiry << " days" << endl;

  return 0;
}