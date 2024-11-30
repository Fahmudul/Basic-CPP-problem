#include <iostream>
using namespace std;
int main()
{

  int x;
  cout << "Enter the array size: " << endl;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; i++)
  {
    cout << "Enter number " << i + 1 << endl;
    cin >> arr[i];
  }
  int bigno = arr[0], smallno = arr[0];
  for (int i = 1; i < x; i++)
  {
    if (smallno > arr[i])
    {
      smallno = arr[i];
    }
  }
  for (int i = 1; i < x; i++)
  {
    if (bigno < arr[i])
    {
      bigno = arr[i];
    }
  }
  cout << "The largest number is " << bigno << "." << endl;
  cout << "And the largest number is " << smallno << "." << endl;

  return 0;
}