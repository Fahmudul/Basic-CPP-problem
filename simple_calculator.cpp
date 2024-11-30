#include <iostream>
using namespace std;
int main()
{
  int number1, number2, result, choice;
  char option;
  bool runLoop = true;
  while (runLoop)
  {
    cout << "1. Add two  numbers" << endl;
    cout << "2. Subtract two numbers" << endl;
    cout << "3. Multiply two numbers" << endl;
    cout << "Enter your choice: between 1, 2, 3:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "Enter first number" << endl;
      cin >> number1;
      cout << "Enter second number" << endl;
      cin >> number2;
      result = number1 + number2;
      cout << "Result: " << result << endl;
      break;
    case 2:
      cout << "Enter first number" << endl;
      cin >> number1;
      cout << "Enter second number" << endl;
      cin >> number2;
      result = number1 - number2;
      cout << "Result: " << result << endl;
      break;
    case 3:
      cout << "Enter first number" << endl;
      cin >> number1;
      cout << "Enter second number" << endl;
      cin >> number2;
      result = number1 * number2;
      cout << "Result: " << result << endl;
      break;
    deafult:
      cout << "Invalid process" << endl;
      break;
    }
    cout << "Press y to continue anything else to exit" << endl;
    cin >> option;
    if (option == 'y')
    {
      runLoop = true;
    }
    else
    {
      runLoop = false;
    }
  }
  return 0;
}