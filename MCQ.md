Here are **30 Multiple Choice Questions (MCQ) from the topic of Arrays** based on the provided slides:

---

### **Lecture 5: Arrays – 30 MCQs**

1. What is the index of the first element in an array?  
   - A) 1  
   - B) 0  
   - C) -1  
   - D) Depends on the array type  
   **Answer**: B) 0  

2. How are the elements of an array stored in memory?  
   - A) Random locations  
   - B) Contiguous memory locations  
   - C) Scattered in memory  
   - D) Based on size  
   **Answer**: B) Contiguous memory locations  

3. What does the following array declaration mean?  
   `int arr[5];`  
   - A) Declares an array of 5 integers  
   - B) Declares a pointer to an array  
   - C) Declares a single integer variable  
   - D) Declares an uninitialized array of size 10  
   **Answer**: A) Declares an array of 5 integers  

4. Which statement correctly initializes an integer array?  
   - A) `int arr[3] = {1, 2, 3};`  
   - B) `int arr = {1, 2, 3};`  
   - C) `int arr[3] == {1, 2, 3};`  
   - D) `int arr[3] -> {1, 2, 3};`  
   **Answer**: A) `int arr[3] = {1, 2, 3};`  

5. Which of the following causes a compile-time error?  
   - A) `int arr[10];`  
   - B) `int arr[] = {1, 2, 3};`  
   - C) `int arr[-5];`  
   - D) `int arr[0];`  
   **Answer**: C) `int arr[-5];`  

6. What is the valid index range for an array declared as `int arr[8];`?  
   - A) 0 to 7  
   - B) 1 to 8  
   - C) 0 to 8  
   - D) -1 to 8  
   **Answer**: A) 0 to 7  

7. How is the last element of an array `arr` accessed if its size is `n`?  
   - A) `arr[n]`  
   - B) `arr[n-1]`  
   - C) `arr[-1]`  
   - D) `arr[1]`  
   **Answer**: B) `arr[n-1]`  

8. What happens when an invalid index is accessed in an array?  
   - A) Compile-time error  
   - B) Runtime error  
   - C) Undefined behavior  
   - D) Program terminates safely  
   **Answer**: C) Undefined behavior  

9. What is the default value of an uninitialized element in an integer array?  
   - A) 0  
   - B) Garbage value  
   - C) -1  
   - D) Compiler dependent  
   **Answer**: B) Garbage value  

10. Which of the following array declarations is invalid?  
    - A) `float arr[5];`  
    - B) `char letters[] = {'a', 'b', 'c'};`  
    - C) `int arr[5] = {1, 2, 3, 4, 5};`  
    - D) `int arr[5.5];`  
    **Answer**: D) `int arr[5.5];`  

11. How are array elements accessed?  
    - A) By index using square brackets  
    - B) Using a pointer reference  
    - C) Both A and B  
    - D) None of the above  
    **Answer**: C) Both A and B  

12. Which of the following statements is true about array size?  
    - A) Must always be specified during declaration  
    - B) Cannot be determined at runtime  
    - C) Can be dynamically allocated  
    - D) None of the above  
    **Answer**: C) Can be dynamically allocated  

13. What happens if an array is initialized with fewer elements than its size?  
    - A) Compile-time error  
    - B) Remaining elements are initialized to zero  
    - C) Undefined behavior  
    - D) Remaining elements are initialized to garbage values  
    **Answer**: B) Remaining elements are initialized to zero  

14. Which function calculates the total size of an array in bytes?  
    - A) `sizeof()`  
    - B) `strlen()`  
    - C) `size()`  
    - D) `length()`  
    **Answer**: A) `sizeof()`  

15. What does the following code output?  
    ```cpp
    int arr[3] = {1, 2, 3};
    cout << arr[1];
    ```  
    - A) 1  
    - B) 2  
    - C) 3  
    - D) Compile-time error  
    **Answer**: B) 2  

16. Which of the following is the correct syntax for a 2D array declaration?  
    - A) `int arr[][];`  
    - B) `int arr[2][3];`  
    - C) `int [2][3] arr;`  
    - D) `int arr(2, 3);`  
    **Answer**: B) `int arr[2][3];`  

17. What is the primary advantage of using symbolic constants for array size?  
    - A) Reduces memory usage  
    - B) Enhances readability and maintainability  
    - C) Prevents runtime errors  
    - D) Enables dynamic resizing  
    **Answer**: B) Enhances readability and maintainability  

18. Which of the following is NOT true about arrays in C++?  
    - A) Elements can be accessed randomly using an index  
    - B) Arrays have a fixed size  
    - C) Arrays can store values of different types  
    - D) Arrays can be multidimensional  
    **Answer**: C) Arrays can store values of different types  

19. What does the `for` loop below do for an array `arr` of size 5?  
    ```cpp
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    ```  
    - A) Outputs all elements in reverse order  
    - B) Outputs all elements in order  
    - C) Outputs only the first and last elements  
    - D) Outputs the last element only  
    **Answer**: B) Outputs all elements in order  

20. What is the size of the array `char str[10];` in bytes?  
    - A) 10 bytes  
    - B) 20 bytes  
    - C) 1 byte  
    - D) Compiler dependent  
    **Answer**: A) 10 bytes  

21. How can an array be passed to a function?  
    - A) By value  
    - B) By reference  
    - C) As a pointer  
    - D) Both B and C  
    **Answer**: D) Both B and C  

22. Which of the following code snippets is invalid?  
    - A) `int arr[] = {1, 2, 3};`  
    - B) `int arr[5] = {1, 2};`  
    - C) `int arr[5] = {};`  
    - D) `int arr[5] = {1, 2, 3, 4, 5, 6};`  
    **Answer**: D) `int arr[5] = {1, 2, 3, 4, 5, 6};`  

23. What will the following code print?  
    ```cpp
    int arr[3] = {1, 2, 3};
    cout << arr[3];
    ```  
    - A) 0  
    - B) 3  
    - C) Undefined behavior  
    - D) Compile-time error  
    **Answer**: C) Undefined behavior  

24. Which of the following correctly represents a dynamic array in C++?  
    - A) `int arr[5];`  
    - B) `int* arr = new int[5];`  
    - C) `int arr[] = {1, 2, 3};`  
    - D) `int arr[5] = {};`  
    **Answer**: B) `int* arr = new int[5];`  

25. Can arrays in C++ be resized after declaration?  
    - A) Yes  
    - B) No  
    - C) Only in certain cases  
    - D) None of the above  
    **Answer**: B) No  

26. How do you release memory allocated to a dynamic array?  
    - A) `free(arr);`  
    - B) `delete arr;`  
    - C) `delete[] arr;`  
    - D) `release(arr);`  
    **Answer**: C) `delete[] arr;`  

27. What does `arr[0]` represent for

 an array `arr`?  
    - A) Address of the first element  
    - B) Value of the first element  
    - C) Both A and B  
    - D) None of the above  
    **Answer**: B) Value of the first element  

28. What is the time complexity of accessing an element in an array?  
    - A) O(n)  
    - B) O(1)  
    - C) O(log n)  
    - D) O(n^2)  
    **Answer**: B) O(1)  

29. Which loop structure is commonly used for traversing an array?  
    - A) `while` loop  
    - B) `do-while` loop  
    - C) `for` loop  
    - D) Any of the above  
    **Answer**: D) Any of the above  

30. What will happen if you don’t delete a dynamically allocated array?  
    - A) Compile-time error  
    - B) Runtime error  
    - C) Memory leak  
    - D) Undefined behavior  
    **Answer**: C) Memory leak  

---

Here are **30 Multiple Choice Questions (MCQ) from the topic of Strings** based on the provided slides:

---

### **Lecture 6: Strings – 30 MCQs**

1. What is a string in C++?  
   - A) A collection of integers  
   - B) A null-terminated array of characters  
   - C) A single character  
   - D) A memory pointer  
   **Answer**: B) A null-terminated array of characters  

2. Which character marks the end of a string in C++?  
   - A) '\n'  
   - B) '\0'  
   - C) ' '  
   - D) EOF  
   **Answer**: B) '\0'  

3. Which of the following is the correct way to initialize a string?  
   - A) `char str[5] = "Hello";`  
   - B) `char str[] = "Hello";`  
   - C) `char str[6] = {'H', 'e', 'l', 'l', 'o'};`  
   - D) All of the above  
   **Answer**: B) `char str[] = "Hello";`  

4. What will happen if a string is missing the null character?  
   - A) Compile-time error  
   - B) Runtime error  
   - C) Undefined behavior  
   - D) The string works as expected  
   **Answer**: C) Undefined behavior  

5. How does the `strlen()` function operate?  
   - A) Returns the size of memory occupied by the string  
   - B) Returns the number of characters in the string excluding '\0'  
   - C) Returns the length of the array  
   - D) Returns the ASCII sum of characters  
   **Answer**: B) Returns the number of characters in the string excluding '\0'  

6. What does `strcmp()` return when two strings are equal?  
   - A) 0  
   - B) Greater than 0  
   - C) Less than 0  
   - D) Undefined  
   **Answer**: A) 0  

7. Which function appends one string to another?  
   - A) `strcpy()`  
   - B) `strcat()`  
   - C) `strlen()`  
   - D) `strcmp()`  
   **Answer**: B) `strcat()`  

8. What is the output of the following code?  
   ```cpp
   char str1[] = "Hi";
   char str2[] = "There";
   strcat(str1, str2);
   cout << str1;
   ```  
   - A) HiThere  
   - B) There  
   - C) Hi  
   - D) Compilation error  
   **Answer**: A) HiThere  

9. Which header file is required to use string-handling functions?  
   - A) `<iostream>`  
   - B) `<string.h>`  
   - C) `<stdlib.h>`  
   - D) `<string>`  
   **Answer**: B) `<string.h>`  

10. What does the `strncpy()` function do?  
    - A) Appends one string to another  
    - B) Copies a specified number of characters from one string to another  
    - C) Compares two strings  
    - D) Returns the length of a string  
    **Answer**: B) Copies a specified number of characters from one string to another  

11. What happens if you try to copy a longer string to a smaller string buffer using `strcpy()`?  
    - A) Truncates the string  
    - B) Throws an exception  
    - C) Causes a buffer overflow  
    - D) Does nothing  
    **Answer**: C) Causes a buffer overflow  

12. Which function checks if a character exists in a string?  
    - A) `strlen()`  
    - B) `strchr()`  
    - C) `strrchr()`  
    - D) `strcmp()`  
    **Answer**: B) `strchr()`  

13. What is the output of `strlen("Hello\0World")`?  
    - A) 10  
    - B) 11  
    - C) 5  
    - D) Undefined  
    **Answer**: C) 5  

14. What is the difference between `char` and `string` in C++?  
    - A) `char` is a basic type, and `string` is a class  
    - B) `char` stores multiple characters, and `string` stores one character  
    - C) `char` is null-terminated, while `string` is not  
    - D) Both are the same  
    **Answer**: A) `char` is a basic type, and `string` is a class  

15. Which of the following is NOT a valid escape character?  
    - A) `\n`  
    - B) `\t`  
    - C) `\a`  
    - D) `\p`  
    **Answer**: D) `\p`  

16. What does `strstr()` do?  
    - A) Compares two strings  
    - B) Finds the last occurrence of a string within another string  
    - C) Finds the first occurrence of a string within another string  
    - D) Returns the length of a string  
    **Answer**: C) Finds the first occurrence of a string within another string  

17. Which escape character is used for a newline?  
    - A) `\b`  
    - B) `\n`  
    - C) `\r`  
    - D) `\\`  
    **Answer**: B) `\n`  

18. How do you declare a constant string?  
    - A) `const char* str = "Hello";`  
    - B) `char str[] = "Hello";`  
    - C) `string str = "Hello";`  
    - D) None of the above  
    **Answer**: A) `const char* str = "Hello";`  

19. Which of the following correctly concatenates two strings?  
    - A) `str1 + str2;`  
    - B) `strcat(str1, str2);`  
    - C) `str1.append(str2);`  
    - D) Both B and C  
    **Answer**: D) Both B and C  

20. What is a null string?  
    - A) A string containing only whitespace  
    - B) A string with no characters other than the null character  
    - C) A string that is not initialized  
    - D) A string with length -1  
    **Answer**: B) A string with no characters other than the null character  

21. What is the default size of a string in memory?  
    - A) Depends on the compiler  
    - B) Fixed at 256 bytes  
    - C) Equal to its content plus one for '\0'  
    - D) Equal to its content without '\0'  
    **Answer**: C) Equal to its content plus one for '\0'  

22. How can you find the length of a string manually?  
    - A) Count characters until '\0' is reached  
    - B) Use `strlen()`  
    - C) Both A and B  
    - D) None of the above  
    **Answer**: C) Both A and B  

23. Which of the following functions does NOT modify the original string?  
    - A) `strcmp()`  
    - B) `strcat()`  
    - C) `strncpy()`  
    - D) `strcpy()`  
    **Answer**: A) `strcmp()`  

24. What is the ASCII value of '\0'?  
    - A) 1  
    - B) 0  
    - C) 255  
    - D) Undefined  
    **Answer**: B) 0  

25. Which of these functions can find the last occurrence of a character in a string?  
    - A) `strrchr()`  
    - B) `strchr()`  
    - C) `strstr()`  
    - D) `strlen()`  
    **Answer**: A) `strrchr()`  

26. What is the output of the code below?  
    ```cpp
    cout << strlen("");  
    ```  
    - A) 1  
    - B) 0  
    - C) -1  
    - D) Undefined  
    **Answer**: B) 0  

27. Which escape sequence is used for a tab?  
    - A) `\n`  
    - B) `\t`  
    - C) `\b`  
    - D) `\\`  
    **Answer**: B) `\t`  

28. How does `strncpy()` handle strings longer than the specified length?  
    - A) Truncates them  
    - B) Causes a buffer overflow  
    - C) Pads with null characters  
    - D) Copies only the specified number of characters  
    **Answer**: D) Copies only the specified number of characters  

29. What happens when `strcmp()` compares two strings of different lengths?  
    - A) Returns the difference in their lengths  
    - B) Returns the difference in ASCII values of the first mismatched characters  
    - C) Returns a random value  
    - D) Causes a runtime error  
    **Answer**: B)

 Returns the difference in ASCII values of the first mismatched characters  

30. Which of the following functions is used to copy one string into another?  
    - A) `strcpy()`  
    - B) `strcat()`  
    - C) `strlen()`  
    - D) `strcmp()`  
    **Answer**: A) `strcpy()`  


##Operators, Conditional Statements, Loops, Break and Continue Keywords, Data Types, Variables and Data Size

Here are 30 multiple-choice questions based on the topics you mentioned, suitable for beginner students:

### Operators
1. **Which of the following is a relational operator in C?**
   - a) `+`
   - b) `>`
   - c) `&&`
   - d) `=`
   - **Answer**: b) `>`

2. **Which of the following is an arithmetic operator?**
   - a) `<=`
   - b) `==`
   - c) `*`
   - d) `&&`
   - **Answer**: c) `*`

3. **What will be the output of the following expression: `5 + 3 * 2`?**
   - a) `16`
   - b) `11`
   - c) `13`
   - d) `10`
   - **Answer**: b) `11`

4. **Which operator is used to compare two values for equality?**
   - a) `=`
   - b) `!=`
   - c) `==`
   - d) `>`
   - **Answer**: c) `==`

5. **What will the result be for the expression `10 > 5 && 3 < 8`?**
   - a) `false`
   - b) `true`
   - c) `0`
   - d) `1`
   - **Answer**: b) `true`

6. **Which of the following is a logical operator?**
   - a) `+`
   - b) `==`
   - c) `&&`
   - d) `-`
   - **Answer**: c) `&&`

7. **Which operator is used to perform modulo operation?**
   - a) `*`
   - b) `/`
   - c) `%`
   - d) `+`
   - **Answer**: c) `%`

8. **What will be the result of the expression `8 != 7`?**
   - a) `true`
   - b) `false`
   - c) `1`
   - d) `0`
   - **Answer**: a) `true`

9. **Which operator has higher precedence in C?**
   - a) `+`
   - b) `-`
   - c) `*`
   - d) `=`
   - **Answer**: c) `*`

10. **Which of the following operators is used for assignment?**
    - a) `==`
    - b) `!=`
    - c) `=`
    - d) `>`
    - **Answer**: c) `=`

### Conditional Statements
11. **Which of the following is the correct syntax for an `if` statement in C?**
    - a) `if (condition)`
    - b) `if condition{}`
    - c) `if (condition) {}`
    - d) `if{}`
    - **Answer**: c) `if (condition) {}`

12. **What is the output of the following code?**
    ```c
    int x = 5;
    if (x > 3)
        printf("Greater");
    else
        printf("Smaller");
    ```
    - a) `Greater`
    - b) `Smaller`
    - c) `Error`
    - d) Nothing
    - **Answer**: a) `Greater`

13. **Which statement is true about the `switch` statement?**
    - a) It can only compare numbers
    - b) It can have multiple `else` branches
    - c) It requires an expression that evaluates to a constant value
    - d) It can only be used with `if`
    - **Answer**: c) It requires an expression that evaluates to a constant value

14. **What will be the output of the following code?**
    ```c
    int x = 2;
    switch(x) {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        default: printf("Other");
    }
    ```
    - a) `One`
    - b) `Two`
    - c) `Other`
    - d) Nothing
    - **Answer**: b) `Two`

15. **Which of the following is a correct `else if` statement?**
    - a) `if (x > 10) else if (y == 5)`
    - b) `if (x > 10) else (y == 5)`
    - c) `if (x > 10) else if (y == 5)`
    - d) `if (x > 10) else if y == 5`
    - **Answer**: c) `if (x > 10) else if (y == 5)`

16. **What is the role of the `default` keyword in a `switch` statement?**
    - a) To handle any case
    - b) To specify a default value
    - c) To declare a variable
    - d) To compare values
    - **Answer**: a) To handle any case

17. **Which of the following will cause the `switch` statement to break immediately?**
    - a) `continue`
    - b) `return`
    - c) `break`
    - d) `exit()`
    - **Answer**: c) `break`

18. **What will the following code output?**
    ```c
    int x = 10;
    if (x == 10)
        printf("True");
    else
        printf("False");
    ```
    - a) `True`
    - b) `False`
    - c) Nothing
    - d) Error
    - **Answer**: a) `True`

19. **Which of the following is the correct syntax for an `if-else` statement?**
    - a) `if (x > 10) else { }`
    - b) `if (x > 10) { } else`
    - c) `if x > 10 else`
    - d) `if (x > 10) { } else { }`
    - **Answer**: d) `if (x > 10) { } else { }`

### Loops, Break, and Continue
20. **What will the following code print?**
    ```c
    for (int i = 0; i < 3; i++) {
        if (i == 2) break;
        printf("%d ", i);
    }
    ```
    - a) `0 1`
    - b) `1 2`
    - c) `0 1 2`
    - d) `Error`
    - **Answer**: a) `0 1`

21. **Which loop executes at least once, even if the condition is false?**
    - a) `for`
    - b) `while`
    - c) `do-while`
    - d) `if`
    - **Answer**: c) `do-while`

22. **What is the result of using the `continue` keyword in a loop?**
    - a) It skips the remaining part of the current iteration and goes to the next iteration
    - b) It terminates the loop
    - c) It breaks the loop
    - d) It restarts the loop
    - **Answer**: a) It skips the remaining part of the current iteration and goes to the next iteration

23. **Which of the following is the correct syntax for a `while` loop?**
    - a) `while (condition) {}`
    - b) `while { condition }`
    - c) `while: condition; {}`
    - d) `while: condition;`
    - **Answer**: a) `while (condition) {}`

24. **What will the following code output?**
    ```c
    int i = 0;
    while (i < 3) {
        if (i == 1) continue;
        printf("%d ", i);
        i++;
    }
    ```
    - a) `0 1 2`
    - b) `0 2`
    - c) `1 2`
    - d) `Error`
    - **Answer**: b) `0 2`

25. **Which keyword can be used to terminate a loop prematurely?**
    - a) `continue`
    - b) `return`
    - c) `exit`
    - d) `break`
    - **Answer**: d) `break`

### Data Types and Size
26. **How many bytes are used by an `int` variable in most systems?**
    - a) 2 bytes
    - b) 4 bytes
    - c) 8 bytes
    - d) 1 byte
    - **Answer**: b) 4 bytes

27. **Which of the following is the correct size for a `char` type?**
    - a) 1 byte
    - b) 2 bytes
    - c) 4 bytes
    - d) 8 bytes
    - **Answer**: a) 1 byte

28. **What is the size of a `double` type in C?**
    - a) 2 bytes
    - b) 4 bytes
    - c) 8 bytes
    - d) 16 bytes
    - **Answer**: c) 8 bytes



29. **Which of the following is used to store a floating-point number?**
    - a) `int`
    - b) `char`
    - c) `float`
    - d) `long`
    - **Answer**: c) `float`

30. **What is the size of the `long` data type on most 64-bit systems?**
    - a) 4 bytes
    - b) 8 bytes
    - c) 2 bytes
    - d) 16 bytes
    - **Answer**: b) 8 bytes



