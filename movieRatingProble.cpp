#include <iostream>
using namespace std;
int main()
{
  float ratingArray[6];
  string movieNameArray[6];
  char exitConfirmation;
  int currentIndex = 0; // this variable is used to keep track which index we are currently at in the array
  // this approach is for dedicated to jimbanu vai. The horny kid
  char option;
  while (option != 'n')
  {
    cout << "*******************************************" << endl;
    cout << "1. Add a Movie and Rating" << endl;
    cout << "2. View All Movies and Ratings" << endl;
    cout << "3. Get Average Rating" << endl;
    cout << "4. Search for a Movie" << endl;
    cout << "Enter your choice: between 1-4" << endl;
    cout << "*******************************************" << endl;

    cin >> option;
    // Checking option
    switch (option)
    {
    case '1':
      // Add movie name to movieName array
      cout << "Enter your favoirte movie name: " << endl;
      // though we are using string we should use getline to take any string including white space. but out syllabus has some boundaries. so for that reason we will give user input without any white space
// example.
// new movie x (wrong)
// newmovie ✔ (correct)
      cin >> movieNameArray[currentIndex];
      // Add rating to rating array
      cout << "Enter your favorite movie rating: " << endl;
      cin >> ratingArray[currentIndex];
      // Increment currentIndex
      currentIndex++;
      break;
    case '2':
      //  first checking if the ratingArray and movieName array is not empty
      if (currentIndex == 0) // here currentIndex 0 means we haven't added any movie yet. cause whenever we add any movie the current index value will be increase by one. So since the currentindex is 0 that means we haven't added any movie yet.
      {
        cout << "No movies have been rated yet" << endl;
      }
      else
      {
        for (int i = 0; i < currentIndex; i++)
        {
          cout << "Movie Name: " << movieNameArray[i] << " Rating: " << ratingArray[i] << endl;
        }
      }
      break;
    case '3':
    {
      // first checking if the movie array is not empty
      if (currentIndex == 0)
      {
        cout << "No ratings available to calculate average" << endl;
      }
      else
      {
        // Get Average Rating
        float ratingSum = 0;
        for (int i = 0; i < currentIndex; i++)
        {
          ratingSum += ratingArray[i];
        }
        cout << "Average rating is: " << ratingSum / currentIndex << endl;
        // here one things to keep in mind is we are setting the array size to 6 but it is possible that a user can add the number of movies based on his choice. So whenever we calculate average our goal is to sum all the rating and then divide by the number of movie added. so for example the user added 3 movies. the currentIndex will also be 3. so thats why we divided ratingSum by currentIndex.
      }
      break;
    }
    case '4':
    {

      // search for a movie
      string movieName;
      cout << "Enter the movie name to see its rating: " << endl;
      cin >> movieName;
      //here also we will give any input without white space
      int movieFoundAtIndex = 0;
      for (int i = 0; i < currentIndex; i++)
      {
        if (movieNameArray[i] == movieName)
        {
          cout << "The rating of " << movieName << " is " << ratingArray[i] << endl;
        }
        else
        {
          movieFoundAtIndex++;
        }
      }
      if (movieFoundAtIndex == currentIndex)
      {
        cout << "Movie not found" << endl;
      }
      break;
    }

    default:
      cout << "Invalid Option" << endl;
    }
    cout << "Enter y to continue and n to exit" << endl;
    cin >> exitConfirmation;
    if (exitConfirmation == 'n')
    {
      break;
    }
    else
    {
      continue;
    }
  }

  return 0;
}
