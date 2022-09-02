#include <iostream>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

int main() {
  int num{10};
  int another_num{20};
  string name{"Lassi"};
  vector<string> vec{"Larry", "Moe", "Curly"};

  cout << "num before calling pass_by_ref1" << num << endl;
  pass_by_ref1(num);
  cout << "num after calling pass_by_ref1" << num << endl;

  cout << "another_num before calling pass_by_ref1" << another_num << endl;
  pass_by_ref1(another_num);
  cout << "another_num before calling pass_by_ref1" << another_num << endl;

  cout << "String before: " << name;
  pass_by_ref2(name);
  cout << "String after: " << name; 

  cout << endl;
  cout << "stooges before calling pass_by_ref3 ";
  print_vector(vec);
  pass_by_ref3(vec);
  cout << "stooges after calling pass_by_ref3 ";
  print_vector(vec);
  cout << endl;
   
  return 0;
}

void pass_by_ref1(int &num) {
  num = 1000;
}

void pass_by_ref2(string &s) {
  s = "Changed String";
}

void pass_by_ref3(vector<string> &v) {
  v.clear();
}

void print_vector(const vector<string> &v) {
  for (auto s: v) {
    cout << s << " ";
  }

  cout << endl;
}