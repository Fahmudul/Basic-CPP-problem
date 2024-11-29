# Basic-CPP-problem



---

### **Problem - 1: Restaurant Order Management System**
Create a simple Restaurant Order Management System. The program should present the following menu options:  
1. View Menu:  
   - The program displays a menu of items with their corresponding prices:  
     ```
     1. Burger - $5
     2. Pizza - $8
     3. Pasta - $7
     4. Sandwich - $4
     ```
2. Place an Order:  
   - The user will select an item number and enter the quantity they want to order.  
   - The program will calculate the total cost and display it.  
3. View Order Summary:  
   - Display the items ordered and their total cost.  
   - If no order has been placed, display a message: "No order placed yet!"  
4. Exit:  
   - End the program.  

After completing an action, the program will ask the user if they want to perform another action (enter 'y' or 'n') and loop until the user decides to exit. The program should validate inputs and handle errors gracefully.  

**Requirements:**  
1. Use an array to store item names and prices.  
2. Use switch-case and loops for menu options.  
3. Handle invalid inputs and display appropriate messages.

---

### **Problem - 2: Library Management System**
Create a simple Library Management System that allows users to manage books. The program should present the following menu options:  
1. Add a Book:  
   - The user will enter the name of a book.  
   - The program will add the book to an array and display a success message. (The library can hold a maximum of 5 books.)  
2. View All Books:  
   - Display all the books currently in the library.  
   - If no books have been added yet, display: "The library is empty."  
3. Search for a Book:  
   - The user will enter the name of a book.  
   - The program will search for the book in the array and display whether it is found or not.  
4. Exit:  
   - End the program.  

After completing an action, the program will ask the user if they want to perform another action (enter 'y' or 'n') and loop until the user decides to exit. The program should validate inputs and handle errors gracefully.  

**Requirements:**  
1. Use an array to store book names.  
2. Use switch-case, loops, and conditional statements for logic.  
3. Handle invalid inputs (e.g., trying to add more than 5 books) and provide clear feedback.

---

Here are three new scenario-based problems with longer setups to introduce some confusion but still grounded in basic concepts like arrays, loops, conditional statements, and switch-case. 

---

### **Problem 3: City Weather Tracker**  
You are tasked with creating a weather tracking program for a fictional weather monitoring agency. The program should allow users to:  
1. **Add Temperature Data for Cities**:  
   - The user will enter the name of a city and its temperature (in Celsius).  
   - Store this data in two separate arrays: one for city names and one for temperatures. (The program can store data for up to 5 cities.)  
2. **View All Recorded Data**:  
   - Display the names of the cities along with their respective temperatures.  
   - If no data has been recorded yet, display: "No data available."  
3. **Get Average Temperature**:  
   - Calculate and display the average temperature of all recorded cities.  
   - If no data has been recorded, display: "No data available to calculate average."  
4. **Find the Hottest City**:  
   - Identify the city with the highest temperature and display its name and temperature.  
   - If no data has been recorded, display: "No data available."  

After executing an action, the program should ask if the user wants to perform another action (enter 'y' or 'n') and loop until the user decides to exit.  

**Requirements:**  
- Use two arrays to store city names and temperatures.  
- Use loops for operations like calculating averages and finding the hottest city.  
- Handle invalid inputs (e.g., trying to add more than 5 cities) gracefully.  

---

### **Problem 4: Movie Ratings System**  
A local cinema wants you to create a program to manage movie ratings provided by viewers. The program should include:  
1. **Add a Movie and Rating**:  
   - The user will enter the name of a movie and a rating (out of 5 stars).  
   - Store this data in two arrays: one for movie names and one for ratings. (The program can store up to 6 movies.)  
2. **View All Movies and Ratings**:  
   - Display all movies along with their ratings.  
   - If no movies have been rated yet, display: "No movies have been rated yet."  
3. **Get Average Rating**:  
   - Calculate and display the average rating of all movies.  
   - If no movies have been rated yet, display: "No ratings available to calculate average."  
4. **Search for a Movie**:  
   - The user will enter the name of a movie, and the program will display its rating if it exists.  
   - If the movie is not found, display: "Movie not found."  

After completing an action, the program should ask if the user wants to perform another action (enter 'y' or 'n') and loop until the user decides to exit.  

**Requirements:**  
- Use arrays to store movie names and ratings.  
- Use switch-case and loops for the menu and operations.  
- Handle invalid inputs and guide the user back to the main menu if needed.  

---

### **Problem 5: Quiz Competition Tracker**  
A school is hosting a quiz competition and needs a program to track team scores. The program should allow users to:  
1. **Add Team Scores**:  
   - The user will enter the name of a team and its score (an integer).  
   - Store this data in two arrays: one for team names and one for scores. (The program can handle up to 4 teams.)  
2. **View All Teams and Scores**:  
   - Display the names of all teams along with their scores.  
   - If no teams have been added yet, display: "No teams have participated yet."  
3. **Find the Highest Scoring Team**:  
   - Display the name of the team with the highest score and its score.  
   - If no teams have been added yet, display: "No scores available."  
4. **Update Team Score**:  
   - The user will enter the name of a team, and if it exists, they can update its score.  
   - If the team is not found, display: "Team not found."  

After completing an action, the program should ask if the user wants to perform another action (enter 'y' or 'n') and loop until the user decides to exit.  

**Requirements:**  
- Use two arrays to store team names and scores.  
- Use loops and conditional statements for operations like finding the highest score and updating scores.  
- Validate inputs and ensure smooth navigation between menu options.  

---


## Prerequisites of the above problem

Here are **10-12 smaller problems** that act as prerequisites to the more complex problems above. These problems focus on core concepts like loops, arrays, conditional statements, and switch-case. They aim to build the foundational skills needed to solve the harder problems. 

---

### **1. Print Numbers from 1 to N**  
Write a program that takes an integer `N` as input and prints all numbers from `1` to `N`.  
- **Hint:** Use a loop (for/while).  

---

### **2. Find the Maximum number from an array created by user input**  
Write a program that takes number then set it in the array as input and prints the largest number.  
- **Hint:** Use `if-else` conditions.  

---

### **3. Calculate the Average of an Array**  
Write a program that accepts `N` integers from the user, stores them in an array, and calculates their average.  
- **Hint:** Use an array and a loop to sum the numbers.  

---

### **4. Find the Smallest Number in an Array**  
Write a program that accepts `N` integers, stores them in an array, and finds the smallest number.  
- **Hint:** Use a loop to compare each number.  

---

### **5. Count Even and Odd Numbers in an Array**  
Write a program that accepts `N` integers from the user, stores them in an array, and counts how many of them are even and odd.  
- **Hint:** Use a loop and the modulus operator `%`.  

---

### **6. Search for a Number in an Array**  
Write a program that accepts `N` integers and a target number. Check if the target number exists in the array and display its index (or display "not found").  
- **Hint:** Use a loop to search through the array.  

---

### **7. Problem Statement: Simple Calculator Menu Using Switch-Case**

Write a program that acts as a simple calculator with a menu of options. The program should:

1. Display the following menu to the user:
    - **1. Add two numbers**
        - Ask the user to input two numbers.
        - Calculate and display their sum.
    - **2. Subtract two numbers**
        - Ask the user to input two numbers.
        - Calculate and display the result of subtracting the second number from the first.
    - **3. Multiply two numbers**
        - Ask the user to input two numbers.
        - Calculate and display their product.
    - If the user selects any other option, display "Invalid choice."

2. After performing a calculation, ask the user if they want to continue:
    - If the user enters **'y' or 'Y'**, display the menu again.
    - If the user enters **'n' or 'N'**, exit the program.

3. Use a **switch-case** structure to handle the menu selection and operations.
### **8. Reverse an Array**  
Write a program that accepts `N` integers from the user, stores them in an array, and prints the array in reverse order.  
- **Hint:** Use a loop to iterate from the end of the array.  

---

### **9. Validate User Input**  
Write a program that asks the user to enter a number between 1 and 10. If the number is outside the range, ask the user to enter again until a valid input is given.  
- **Hint:** Use a `while` loop for validation.  

---

### **10. Find the Largest and Smallest Numbers in an Array**  
Write a program that accepts `N` integers and finds both the largest and smallest numbers in the array.  
- **Hint:** Use variables to track the largest and smallest values during iteration.  

---

### **11. Calculate the Sum of Digits of a Number**  
Write a program that takes an integer as input and calculates the sum of its digits.  
- **Hint:** Use a loop and modulus `%` to extract digits.  

---

### **12. Categorize a Number**  
Write a program that takes an integer as input and categorizes it as:  
- Positive  
- Negative  
- Zero  

- **Hint:** Use `if-else` conditions to check the value.  

---

## More problems



### **1. Identify Palindrome Numbers**
Write a program that takes a number as input and determines if it is a palindrome. A number is a palindrome if it reads the same forwards and backwards.  
- **Hint:** Reverse the digits of the number and compare it to the original.  
- **Example Input:** `121`  
- **Output:** `"121 is a palindrome."`

---

### **2. Count Words in a Sentence**
Write a program that takes a sentence as input and counts the total number of words in the sentence.  
- **Hint:** Words are separated by spaces.  
- **Example Input:** `"Hello, how are you?"`  
- **Output:** `"The sentence has 4 words."`

---

### **3. Replace Negative Numbers in an Array**
Write a program that takes `N` numbers in an array. Replace all negative numbers in the array with `0` and print the updated array.  
- **Hint:** Use a loop to iterate through the array.  
- **Example Input:** `[-3, 5, -7, 10, -1]`  
- **Output:** `[0, 5, 0, 10, 0]`

---

### **4. Categorize Marks**
Write a program that takes `N` student marks and categorizes them as:  
- `"Fail"` if marks < 40  
- `"Pass"` if marks are between 40 and 60 (inclusive)  
- `"Excellent"` if marks > 60  
Store the categories in an array and print them.  
- **Example Input:** `[35, 45, 70]`  
- **Output:** `["Fail", "Pass", "Excellent"]`

---

### **5. Sum of Prime Numbers**
Write a program that takes two numbers as input and calculates the sum of all prime numbers between them.  
- **Hint:** Use a nested loop to check for prime numbers.  
- **Example Input:** `5, 15`  
- **Output:** `"Sum of prime numbers between 5 and 15 is 41."`

---

### **6. Generate Number Triangle**
Write a program to take an integer `N` as input and generate a triangle of numbers:  
- **Example Input:** `N = 4`  
- **Output:**  
  ```
  1
  1 2
  1 2 3
  1 2 3 4
  ```

---

### **7. Find Unique Elements in an Array**
Write a program that takes `N` numbers as input in an array and prints only the unique elements (elements that appear exactly once).  
- **Example Input:** `[1, 2, 2, 3, 4, 4, 5]`  
- **Output:** `[1, 3, 5]`

---

### **8. Find Second Largest Number**
Write a program that takes `N` integers and finds the second largest number in the array.  
- **Hint:** Sort the array or use conditional logic to track the two largest numbers.  
- **Example Input:** `[10, 20, 15, 5, 30]`  
- **Output:** `"The second largest number is 20."`

---

### **9. Sum of Digits Until Single Digit**
Write a program that takes an integer as input and keeps summing its digits until a single digit is obtained.  
- **Example Input:** `1234`  
- **Output:** `"The single digit is 1."`  
  (Explanation: \(1+2+3+4 = 10\), then \(1+0 = 1\))

---

### **10. Find Missing Number in Array**
Write a program to find the missing number from an array containing numbers from `1` to `N`, where one number is missing.  
- **Hint:** Calculate the sum of `1` to `N` and subtract the sum of array elements.  
- **Example Input:** `Array: [1, 2, 4, 5], N = 5`  
- **Output:** `"The missing number is 3."`

---

### **11. Frequency Count of Array Elements**
Write a program that counts the frequency of each element in an array and displays the results.  
- **Hint:** Use nested loops or a second array to track counts.  
- **Example Input:** `[1, 2, 2, 3, 1, 1]`  
- **Output:**  
  ```
  1 appears 3 times
  2 appears 2 times
  3 appears 1 time
  ```

---

### **12. Check Armstrong Number**
Write a program to check if a given number is an Armstrong number.  
- **Hint:** An Armstrong number is equal to the sum of its digits raised to the power of the number of digits.  
- **Example Input:** `153`  
- **Output:** `"153 is an Armstrong number."`

---




