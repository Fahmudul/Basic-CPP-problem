#include <iostream>
using namespace std;
int main()
{
  // build an array
  int sizeOfArray, targetNumber, currentIndex = 0;
  cout << "Enter the size of array: " << endl;
  cin >> sizeOfArray;
  int arr[sizeOfArray];
  for (int i = 0; i < sizeOfArray; i++)
  {
    cout << "Enter number " << i + 1 << endl;
    cin >> arr[i];
  }
  cout << "Enter the target number: ";
  cin >> targetNumber;
  for (int i = 0; i < sizeOfArray; i++) // 0 1 2 3 4 5 
  {
    if (arr[i] == targetNumber)
    {
      cout << "Target number found at index " << i << endl;
      break;
    }
    currentIndex++;
  }
  if (currentIndex == sizeOfArray)
  {
    cout << "Target number not found in the array." << endl;
  }
  return 0;
}