#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter " << n << " numbers:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int minNum = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < minNum)
    {
      minNum = arr[i];
    }
  }
  cout << "The smallest number is: " << minNum << endl;

  return 0;
}