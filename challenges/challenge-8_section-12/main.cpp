#include <iostream>

using namespace std;

int *apply_all(int *array1, int size1, int *array2, int size2);
void print(int const *array, int size);

int main() {
  const int array1[]{1, 2, 3, 4, 5};
  const int array2[]{10, 20, 30};
  const size_t array1_size{5};
  const size_t array2_size{3};

  cout << endl;
  print(array1, array1_size);
  print(array2, array2_size);

  int *results = apply_all(array1, array1_size, array2, array2_size);
  print(results, array1_size * array2_size);
  
  cout << endl << endl;

  delete [] results;

  return 0;
}

int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2) {
  int *new_array = {nullptr};
  new_array = new int[size1 * size2];

  for (size_t i{0}; i < size2; i++)
    for (size_t j{0}; j < size1; j++)
      *(new_array + i * size1 + j) = array2[i] * array1[j];

  return new_array;
}

void print(const int *const array, size_t size) {
  cout << "[ ";

  for (size_t i{0}; i < size; i++)
    cout << *(array + i) << " ";
  cout << "]" << endl;
}