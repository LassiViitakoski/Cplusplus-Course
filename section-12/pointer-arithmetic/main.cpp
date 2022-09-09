#include <iostream>

using namespace std;

int main() {
  int scores[]{100, 98, 95, 68, -1};
  int *score_ptr{scores};

  while(*score_ptr != -1) {
    cout << *score_ptr << endl;
    score_ptr++;
  }

  cout << endl << "----------------------" << endl;;
  score_ptr = scores;

  while(*score_ptr != -1)
    cout << *score_ptr++ << endl; // We first use the pointer and then raise it.






  return 0;
}