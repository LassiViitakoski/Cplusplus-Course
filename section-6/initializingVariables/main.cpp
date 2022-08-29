#include <iostream>

using namespace std;

int main() {
  int roomWidth {0};
  int roomLength {0};
  string name {"sdfsfdds"};

  cout << "Enter the width and the length of the room seperated by space: ";
  cin >> roomWidth >> roomLength;
  cout << "The are of the room is " << roomWidth * roomLength << " square meters" << endl;

  return 0;
}