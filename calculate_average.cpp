#include <iostream>
using namespace std;
int main()
{
  int x;
  float sum = 0;
  float average;
  cout << "Enter the array size: " << endl;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; i++)
  {
    cout << "Enter number " << i + 1 << endl;
    cin >> arr[i];
  }
  for (int i = 0; i < x; i++)
  {
    sum = sum + arr[i];
  }
  average = sum / x;
  cout << "The average of the number is " << average << ".";

  return 0;
}