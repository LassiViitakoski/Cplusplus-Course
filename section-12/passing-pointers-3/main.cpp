#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string> *v);
void display(int *array, int sentinel);

int main() {
  vector<string> stooges{"Larry", "Moe", "Curly"};
  display(&stooges);

  return 0;
}

void display(int *array, int sentinel) {
  while (*array != sentinel)
    cout << *array++ << " ";
  cout << endl; 
}

void display(const vector<string> *v) {
  for (auto str: *v)
    cout << str << " ";
  cout << endl;
}