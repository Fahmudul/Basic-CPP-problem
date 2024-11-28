# Basic-CPP-problem

Here are two scenario-based problems tailored to students who have basic knowledge of arrays, loops, conditionals, and switch-case statements. These problems are engaging and designed for practice.

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

