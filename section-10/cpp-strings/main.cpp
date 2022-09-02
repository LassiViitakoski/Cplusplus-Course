#include <iostream>
#include <string>

using namespace std;

int main() {
  string word{};

  getline(cin, word);

  size_t position = word.find("testi");

  string x{"adfs"};
  word.erase();

  swap(x, word);

  if (position != string::npos) {
    cout << "Positio löytyi" << endl;
  }

  return 0;
}