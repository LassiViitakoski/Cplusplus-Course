#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
  int input{};
  int division_result{};
  int remainder_result{};

  vector<pair<int, string>> vec{
      {100, "dollars"}, {25, "quarters"}, {10, "dimes"}, {5, "nickels"}, {1, "pennies"}};

  cout << "Enter an amount in cents: ";
  cin >> input;

  cout << "You have" << endl;

  for (long long unsigned int i = 0; i < vec.size(); i++)
  {
    division_result = floor(static_cast<double>(input) / vec.at(i).first);
    remainder_result = input % vec.at(i).first;
    input = division_result == 0 ? input : remainder_result;

    cout << vec.at(i).second << " : " << division_result << endl;
  }

  return 0;
}
