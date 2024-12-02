#include <iostream>
using namespace std;
int main()
{
  int option, index, quantity = 0;
  int totalCoastArray[4];
  string foodName[4];
  int size;
  do
  {
    cout << "1. View Menu" << endl;
    cout << "2. Place an order" << endl;
    cout << "3. View Order Summary" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: between 1, 2, 3, 4: " << endl;
    cin >> option;
    switch (option)
    {
    case 1:
      cout << "*******************************" << endl;
      cout << "1. Burger - $5" << endl;
      cout << "2. Pizza - $8" << endl;
      cout << "3. Pasta - $7" << endl;
      cout << "4. Sandwich - $4" << endl;
      cout << "*******************************" << endl;
      break;
    case 2:
      cout << "How many categorized food do you want to order" << endl;
      cin >> size;
      for (index = 0; index < size; index++)
      {
        cout << "Enter the food name: " << endl;
        cin >> foodName[index];
        if (foodName[index] == "burger")
        {
          cout << "Enter burger quantity: " << endl;
          cin >> quantity;
          totalCoastArray[index] = quantity * 5;
        }
        else if (foodName[index] == "pizza")
        {
          cout << "Enter pizza quantity: " << endl;
          cin >> quantity;
          totalCoastArray[index] = quantity * 8;
        }
        else if (foodName[index] == "pasta")
        {
          cout << "Enter pasta quantity: " << endl;
          cin >> quantity;
          totalCoastArray[index] = quantity * 7;
        }
        else if (foodName[index] == "sandwich")
        {
          cout << "Enter Sandwich quantity: " << endl;
          cin >> quantity;
          totalCoastArray[index] = quantity * 4;
        }
      }
      break;
    case 3:
      cout << totalCoastArray[0] << endl;
      if (totalCoastArray[0] > 0 && foodName[0] != "")
      {
        int totalPrice = 0;
        for (index = 0; index < size; index++)
        {
          // return 0; return vs break
          cout << "Total Coast of " << foodName[index] << " is: " << totalCoastArray[index] << endl;
          totalPrice += totalCoastArray[index];
        }
        cout << "Total Coast: " << totalPrice << endl;
      }
      else
      {
        cout << "You haven't ordered anything." << endl;
      }
    }
  } while (option != 4);
}