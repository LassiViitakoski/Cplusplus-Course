#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

int main() {
  vector<string> vec{"Marksman River", "f33l lik3 dyin", "Kuningas Rollo"};
  string s = "Keijo";

  print(100);
  print(100.10);
  print(100.10F);
  print(s);
  print("Keijo", "Turpeinen");
  print(vec);
}

void print(int n) {
  cout << "Printing integer : " << n << endl;
}

void print(double d) {
  cout << "Printing double : " << d << endl;
}

void print(string s) {
  cout << "Printing string : " << s << endl;
}

void print(string s1, string s2) {
  cout << "Printing string1 : " << s1 << " and string2 : " << s2 << endl;
}

void print(vector<string> v) {
  cout << "Printing vector of string : " << endl;
  cout << "[ ";

  for (auto s: v) {
    cout << s << ", ";
  }

  cout << "]" << endl;
}
