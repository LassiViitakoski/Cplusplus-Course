#include <iostream>
#include <vector>

using namespace std;

enum Direction
{
  left,
  right,
  up,
  down
};

int main()
{
  vector<int> y{1, 23, 4};
  vector<pair<int, string>> vec{
      {0, "Sunday"}, {1, "Monday"}, {2, "Tuesday"}, {3, "Wednesday"}, {4, "Thursday"}, {5, "Friday"}, {6, "Saturday"}};

  int day_code{4};

  for (auto &element : vec)
  {
    if (element.first == day_code)
    {
      cout << element.second;

      break;
    }
  }

  return 0;
}