#include <iostream>
using namespace std;
int main()
{

  int x;
  cout << "Enter the size of array: " << endl;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; i++)
  {
    cout << "Enter number " << i + 1 << endl;
    cin >> arr[i];
  }
  for (int i = 0; i < x; i++)
  {
    if (arr[i] % 2 == 0)
    {
      cout << arr[i] << " is even." << endl;
    }
    else if (arr[i] % 2 != 0)
    {
      cout << arr[i] << " is odd." << endl;
    }
  }
  return 0;
}
