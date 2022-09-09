#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> stooges{"Larry", "Moe", "Curly"};

  for (auto str: stooges)
    str = "Funny";
  for (auto str: stooges)
    cout << str << endl;  // Larry, Moe, Curly
  
  cout << endl << "--------------------";

  for (auto &str: stooges)
    str = "Funny";
  for (auto const &str: stooges)
    cout << str << endl; // Funny, Funny, Funny

  return 0;
}