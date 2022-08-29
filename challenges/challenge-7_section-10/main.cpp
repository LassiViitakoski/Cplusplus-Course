#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input{};

  cout << "Insert some word : ";
  getline(cin, input);

  size_t i{};
  size_t j{};

  if (!input.length())
    return 0;

  while (i < input.length())
  {
    for (size_t k{i}; k < input.length() - 1; k++)
      cout << " ";
    j++;

    while (j > 0)
    {
      cout << input.at(j - 1);

      if (j < i + 1)
        j++;
      else
      {
        while (j > 0)
        {
          j--;

          if (j > 0)
          {
            cout << input.at(j - 1);
          }
        }

        j = 0;
      }
    }

    cout << endl;
    i++;
  };

  // for (size_t i{}; i < input.length(); i++)
  // {
  //   if (i == 0)
  //   {
  //     cout << input.at(i) << endl;
  //     continue;
  //   }

  //   for (size_t j{}; j < i + 1; j++)
  //   {
  //     cout << input.at(j);
  //   }

  //   for (size_t k{};)

  //     cout << endl;
  // }

  return 0;
}