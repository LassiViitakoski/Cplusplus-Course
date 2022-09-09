#include <iostream>

using namespace std;

int main() {
  int scores[]{100, 95, 89};
  int *score_ptr{scores};

  cout << "Value of scores: " << scores << endl;
  cout << "Value of score_ptr: " << score_ptr << endl;
  
  cout << endl << "Array subscript notation ----------------" << endl;
  cout << scores[0] << endl;
  cout << scores[1] << endl;
  cout << scores[2] << endl;

  cout << endl << "Pointer subscript notation ---------------" << endl;
  cout << score_ptr[0] << endl;
  cout << score_ptr[1] << endl;
  cout << score_ptr[2] << endl;

  cout << endl << "Pointer offset notation ---------------" << endl;
  cout << *score_ptr << endl;
  cout << *(score_ptr + 1) << endl;
  cout << *(score_ptr + 2) << endl;

  cout << endl << "Array offset notation -------------------" << endl;
  cout << *scores << endl;
  cout << *(scores + 1) << endl;
  cout << *(scores + 2) << endl;
  cout << endl;

  int x{10};

  cout << *(&x) << endl;

  return 0;
}