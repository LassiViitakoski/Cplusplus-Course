#include <iostream>

using namespace std;

int main()
{
  const double smallRoomPrice{25.0};
  const double largeRoomPrice{35.0};
  const double taxRate{.06};
  int largeRooms{0};
  int smallRooms{0};

  cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
  cout << "\nHow many small rooms would you like cleaned? ";
  cin >> smallRooms;

  cout << "How many large rooms would you like cleaned? ";
  cin >> largeRooms;

  cout << "Price per small room: $" << smallRoomPrice << endl;
  cout << "Price per large room: $" << largeRoomPrice << endl;

  double cost{smallRooms * smallRoomPrice + largeRooms * largeRoomPrice};
  double taxCost{cost * taxRate};

  cout << "Cost : $" << cost << endl;
  cout << "Tax : $" << taxCost << endl;
  cout << "=================================================" << endl;
  cout << "Total estimate: $" << cost + taxCost << endl;

  return 0;
}
