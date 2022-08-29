#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

  cout << vowels[0] << endl;
  cout << vowels[4] << endl;

  vector<int> test_scores{100, 98, 89};

  cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
  cout << "\n Enter 3 test scores: " << endl;

  cin >> test_scores.at(0);
  cin >> test_scores.at(1);
  cin >> test_scores.at(2);

  int score_to_add{0};

  cout << "Enter number to add to vector: " << endl;
  cin >> score_to_add;
  test_scores.push_back(score_to_add);

  for (long long unsigned int i = 0; i < test_scores.size(); i++)
  {
    cout << "Test score at index " << i << " is " << test_scores.at(i) << endl;
  }

  // 2D - vector
  vector<vector<int>> movie_ratings{
      {1, 2, 3, 4},
      {1, 2, 4, 4},
      {1, 3, 4, 5}};

  cout << movie_ratings[1][2];

  return 0;
}