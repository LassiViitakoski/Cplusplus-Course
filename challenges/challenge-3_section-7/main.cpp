#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<int> vector1{};
  vector<int> vector2{};

  vector1.push_back(10);
  vector1.push_back(20);

  cout << "vector1: index 0: " << vector1.at(0) << endl;
  cout << "vector1: index 1: " << vector1.at(1) << endl;
  cout << "vector1: size: " << vector1.size() << endl;

  vector2.push_back(10);
  vector2.push_back(20);

  cout << "vector2: index 0: " << vector2.at(0) << endl;
  cout << "vector2: index 1: " << vector2.at(1) << endl;
  cout << "vector2: size: " << vector2.size() << endl;

  vector<vector<int>> vector_2d{};
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  vector1.at(100);

  return 0;
}