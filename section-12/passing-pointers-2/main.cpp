#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int *a, int *b);

int main() {
  int x{100}, y{200};

  cout << endl;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;

  swap(&x, &y);

  cout << endl;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;

  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}