#include <iostream>
using namespace std;
int main()
{

  // int marks[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  // cout << sizeof(marks) / sizeof(marks[0]) << endl; // 10 * 4 = 40; 40 / 4 = 10
  string bookNameArray[5]; // {" mocking bird", " new book"}
  //                                 0               1
  int currentIndex = 0;
  int totalAddedBook = 0;

  // cout << sizeof(bookNameArray) / sizeof(bookNameArray[0]) << endl;
  int option;
  while (true)
  {
    cout << "Enter an option between 1-3 and 4 to exit" << endl;
    cin >> option;
    switch (option)
    {
    // Add a book functionalties
    case 1:
      if (currentIndex >= 5)
      {
        cout << "Library is full";
      }
      else
      {
        // add book to the libray
        cout << "Enter your book name" << endl;
        string bookName;
        cin.ignore();
        getline(cin, bookName);
        bookNameArray[currentIndex] = bookName;
        currentIndex++;
        totalAddedBook++;
      }
      break;

    case 2:
      // show all book
      cout << "[";
      for (int i = 0; i < totalAddedBook; i++)
      {
        cout << bookNameArray[i] << ", ";
      }
      cout << "]" << endl;
      break;

    case 3:
      // find a book
      string bookToFind;
      cin.ignore();
      getline(cin, bookToFind);

      for (int i = 0; i < totalAddedBook; i++)
      {
        if (bookNameArray[i] == bookToFind)
        {
          cout << "Book found at index " << i << endl;
        }
        else
        {
          // break
          cout << "book not found" << endl;
        }
      }
    }
  }
  return 0;
}