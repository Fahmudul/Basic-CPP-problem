#include <iostream>
using namespace std;
int main()
{
  int size = 0;
  cout << "Enter the size of array: " << endl;
  cin >> size;
  string item[size];
  cin.ignore();
  for (int i = 0; i < size; i++)
  {
    cout << "Enter item " << i + 1 << endl;
    getline(cin, item[i]);
  }
  for (int i = 0; i < size; i++)
  {
    cout << item[i] << endl;
  }
  return 0;
}