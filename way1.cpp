#include <iostream>
using namespace std;
int main()
{
  int x, y;
  char choice;
  do
  {
    cout << "1. Add two numbers." << endl;
    cout << "2. Subtract two numbers." << endl;
    cout << "3. Multiply two numbers." << endl;
    cout << "Chose 1/2/3: " << endl;
    cin >> choice;

    switch (choice)
    {
    case '1':
      cout << "Enter the 2 numbers:" << endl;
      cin >> x >> y;
      cout << x << " + " << y << " = " << x + y << endl;
      break;
    case '2':
      cout << "Enter the 2 numbers:" << endl;
      cin >> x >> y;
      cout << x << " - " << y << " = " << x - y << endl;
      break;
    case '3':
      cout << "Enter the 2 numbers:" << endl;
      cin >> x >> y;
      cout << x << " x " << y << " = " << x * y << endl;
      break;
    default:
      cout << "Invalid output." << endl;
      break;
    }
    // cout << "Do you want to run the program again?(y/n)" << endl;
    // cin >> choice;
  } while (choice == 'y' || choice == 'Y');

  return 0;
}

// #include <iostream>

// using namespace std;

// int main()
// {
//   char choice;
//   int n1, n2, result;

//   do
//   {
//     cout << "For Your Fucking Calculator:\n";
//     cout << "1. Add two numbers\n";
//     cout << "2. Subtract two numbers\n";
//     cout << "3. Multiply  numbers\n";
//     cout << "Shit In your choice (1/2/3): ";
//     cin >> choice;

//     switch (choice)
//     {
//     case '1':
//       cout << "Enter two mother fucking numbers: ";
//       cin >> n1 >> n2;
//       result = n1 + n2;
//       cout << "Sum = " << result << endl;
//       break;
//     case '2':
//       cout << "Enter two mother fucking numbers: ";
//       cin >> n1 >> n2;
//       result = n1 - n2;
//       cout << "Difference = " << result << endl;
//       break;
//     case '3':
//       cout << "Enter two mother fucking numbers: ";
//       cin >> n1 >> n2;
//       result = n1 * n2;
//       cout << "Product = " << result << endl;
//       break;
//     default:
//       cout << "Laude choice Diya Hae Madarchod.\n";
//     }

//     cout << "Do you want to continue? (y/n): ";
//     cin >> choice;
//   } while (choice == 'y' || choice == 'Y');

//   cout << "Exiting calculator.\n";

//   return 0;
// }