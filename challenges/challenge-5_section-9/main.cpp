#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

string show_menu()
{
  return (
      string("P - Print numbers\n") +
      string("A - Add a number\n") +
      string("M - Display mean of the numbers\n") +
      string("S - Display the smallest number\n") +
      string("L - Display the largest number\n") +
      string("Q - Quit"));
}

string print_numbers(vector<int> numbers)
{
  if (numbers.size() == 0)
  {
    return "[] - the list is empty.";
  }

  string result{"["};

  for (auto num : numbers)
  {
    result += " " + to_string(num);
  }

  return result + " ]";
}

string calculate_average(vector<int> numbers)
{
  if (numbers.size() == 0)
  {
    return "Unable to calculate the average - no data.";
  }

  int total{};

  for (auto num : numbers)
  {
    total += num;
  }

  return "Average of numbers : " + to_string(static_cast<double>(total) / numbers.size());
}

string calculate_smallest(vector<int> numbers)
{
  if (numbers.size() == 0)
  {
    return "Unable to determine the smallest number -  list is empty";
  }

  int result{numbers.at(0)};

  for (auto num : numbers)
  {
    if (num < result)
    {
      result = num;
    }
  }

  return "The smallest number is " + to_string(result);
}

string calculate_largest(vector<int> numbers)
{
  if (numbers.size() == 0)
  {
    return "Unable to determine the largest number - list is empty";
  }

  int result{numbers.at(0)};

  for (auto num : numbers)
  {
    if (num > result)
    {
      result = num;
    }
  }

  return "The largest number is " + to_string(result);
}

void handler(vector<int> numbers, char *accepted_letters)
{
  cout << endl;
  cout << show_menu() << endl;
  cout << "What do you wanna do?" << endl;

  string input{};
  cin >> input;

  if (input.length() != 1)
  {
    cout << "Unknown Selection, please try again." << endl;

    return handler(numbers, accepted_letters);
  }

  char input_letter = input.c_str()[0];
  char upper_cased_letter = toupper(input_letter);

  for (size_t i{0}; i < sizeof(accepted_letters); i++)
  {
    if (accepted_letters[i] == upper_cased_letter)
      break;

    if (sizeof(accepted_letters) == i + 1)
    {
      cout << "Unknown Selection, please try again." << endl;

      return handler(numbers, accepted_letters);
    }
  }

  switch (upper_cased_letter)
  {
  case 'P':
  {
    cout << print_numbers(numbers) << endl;
    handler(numbers, accepted_letters);
    break;
  }
  case 'A':
  {
    int new_number{};
    cin >> new_number;

    numbers.push_back(new_number);

    cout << to_string(new_number) << " added." << endl;
    handler(numbers, accepted_letters);
    break;
  }
  case 'M':
  {
    cout << calculate_average(numbers) << endl;
    handler(numbers, accepted_letters);
    break;
  }
  case 'S':
  {
    cout << calculate_smallest(numbers) << endl;
    handler(numbers, accepted_letters);
    break;
  }
  case 'L':
  {
    cout << calculate_largest(numbers) << endl;
    handler(numbers, accepted_letters);
    break;
  }
  case 'Q':
  {
    cout << "Goodbye!" << endl;
    break;
  }
  }
}

int main()
{
  vector<int> numbers{};
  char accepted_letters[]{'P', 'A', 'M', 'S', 'L', 'Q'};
  cout << fixed << setprecision(1);

  handler(numbers, accepted_letters);

  return 0;
}