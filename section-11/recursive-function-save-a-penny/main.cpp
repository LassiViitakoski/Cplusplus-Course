#include <iostream>
#include <iomanip>

using namespace std;

#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count{0};

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPE BELOW THIS LINE----

double a_penny_doubled_everyday(int, double total_amount); //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void amount_accumulated()
{

  //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
  //----WRITE THE FUNCTION CALL BELOW THIS LINE----

  //----WRITE THE FUNCTION CALL ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

double a_penny_doubled_everyday(int days, double total_amount)
{
  if (days == 1)
    return total_amount;

  return a_penny_doubled_everyday(days - 1, total_amount * 2);
}

int main()
{
  double total_amount = a_penny_doubled_everyday(18, 0.01);

  cout << "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;

  return 0;
}