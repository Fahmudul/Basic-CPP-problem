#include <iostream>
using namespace std;
int main()
{
  int arraySize;
  cout << "Enter array size" << endl;
  cin >> arraySize;
  int number[arraySize]; // []
  // array build
  for (int i = 0; i < arraySize; i++)
  {
    cout << "Enter number " << i + 1 << endl;
    cin >> number[i]; // i =0
  }
  // find the maximum number from the created array
  int maxNumber = number[0];
  for (int i = 1; i < arraySize; i++)
  {
    if (number[0] < number[i])
    {
      maxNumber = number[i];
    }
  }
  cout << maxNumber;
  return 0;
}