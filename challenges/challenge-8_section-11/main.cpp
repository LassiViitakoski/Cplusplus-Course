#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int find_smallest(vector<int> &numbers);
int find_largest(vector<int> &numbers);
void handler(vector<int> &numbers, char[]);
double calculate_average(vector<int> &numbers);
string show_menu();
string print_numbers(vector<int> &numbers);

int main()
{
  vector<int> numbers{};
  char accepted_letters[]{'P', 'A', 'M', 'S', 'L', 'Q'};
  cout << fixed << setprecision(1);

  handler(numbers, accepted_letters);

  return 0;
}

void handler(vector<int> &numbers, char *accepted_letters)
{
  cout << endl;
  cout << show_menu() << endl;
  cout << "What do you wanna do?" << endl;

  string input{};
  string output{};
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
    output = numbers.size() == 0 ? "[] - the list is empty." : print_numbers(numbers);
    cout << output << endl;
    handler(numbers, accepted_letters);
    break;
  case 'A':
  {
    int new_number{};
    cin >> new_number;
    numbers.push_back(new_number);
    output = to_string(new_number) + " added.";
    cout << output << endl;
    handler(numbers, accepted_letters);
    break;
  }
  case 'M':
  {
    double average = calculate_average(numbers);
    output = isnan(average) ? "Unable to calculate the average - no data." : "Average of numbers : " + to_string(average);
    cout << output << endl;
    handler(numbers, accepted_letters);
    break;
  }
  case 'S':
  {
    int smallest = find_smallest(numbers);
    output = isnan(smallest) ? "Unable to determine the smallest number -  list is empty" : "The smallest number is " + to_string(smallest);
    cout << output << endl;
    handler(numbers, accepted_letters);
    break;
  }
  case 'L':
  {
    int largest = find_largest(numbers);
    output = isnan(largest) ? "Unable to determine the largest number - list is empty" : "The largest number is " + to_string(largest);
    cout << output << endl;
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

string print_numbers(vector<int> &numbers)
{
  string result{"["};

  for (auto num : numbers)
  {
    result += " " + to_string(num);
  }

  return result + " ]";
}

double calculate_average(vector<int> &numbers)
{
  int total{};

  for (auto num : numbers)
  {
    total += num;
  }

  return static_cast<double>(total) / numbers.size();
}

int find_smallest(vector<int> &numbers)
{
  if (numbers.size() == 0)
    return NAN;

  int result{numbers.at(0)};

  for (auto num : numbers)
    if (num < result)
      result = num;

  return result;
}

int find_largest(vector<int> &numbers)
{
  if (numbers.size() == 0)
    return NAN;

  int result{numbers.at(0)};

  for (auto num : numbers)
  {
    if (num > result)
    {
      result = num;
    }
  }

  return result;
}
