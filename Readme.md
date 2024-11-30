### Multiple-Choice Questions on Strings

1. What is the output of the following code?  
   ```cpp
   char str[] = "Hello";
   cout << str[0] << str[4];
   ```
   - A) `Ho`  
   - B) `H`  
   - C) `Hello`  
   - D) Compilation error  

2. Which of the following correctly initializes a string in C++?  
   - A) `char str[] = {'H', 'e', 'l', 'l', 'o'};`  
   - B) `string str = "Hello";`  
   - C) `char str[] = "Hello";`  
   - D) All of the above  

3. What is the size of the string `char str[] = "Programming";` including the null character?  
   - A) 10  
   - B) 11  
   - C) 12  
   - D) Undefined  

4. What will be the output of this code?  
   ```cpp
   string str = "World";
   cout << str.size();
   ```
   - A) 4  
   - B) 5  
   - C) 6  
   - D) Undefined  

5. How does a C-style string (`char array`) differ from a C++ `string`?  
   - A) C-style strings require a null character for termination, while C++ strings do not.  
   - B) C++ strings cannot handle spaces, but C-style strings can.  
   - C) C-style strings are immutable, while C++ strings are mutable.  
   - D) They are the same in terms of functionality.  

6. What will be the output of the following code?  
   ```cpp
   char str[] = "Learn";
   cout << str[3];
   ```  
   - A) `L`  
   - B) `a`  
   - C) `r`  
   - D) `n`  

7. Which of the following statements is **true**?  
   - A) `string s = "Text";` automatically includes a null character at the end.  
   - B) `char s[] = "Text";` does not require a null character.  
   - C) `string s[] = {"T", "e", "x", "t"};` creates a single string.  
   - D) `string` is not supported in C++.  

8. What does the following code output?  
   ```cpp
   string str1 = "Hello";
   string str2 = "World";
   cout << str1 + " " + str2;
   ```  
   - A) `HelloWorld`  
   - B) `Hello World`  
   - C) Compilation error  
   - D) Undefined behavior  

9. Which function is used to find the length of a string in C++?  
   - A) `strlen()`  
   - B) `length()`  
   - C) `size()`  
   - D) Both B and C  

10. What is the output of the following code?  
    ```cpp
    string str = "Coder";
    cout << str.substr(1, 3);
    ```  
    - A) `ode`  
    - B) `ode `  
    - C) `Code`  
    - D) `oder`  

11. Which is a valid way to append two strings in C++?  
    - A) `str1 + str2`  
    - B) `str1.append(str2)`  
    - C) `str1 += str2`  
    - D) All of the above  

12. What will be the output of this code?  
    ```cpp
    string str = "Hello";
    str[0] = 'J';
    cout << str;
    ```  
    - A) `Jello`  
    - B) `Hello`  
    - C) Compilation error  
    - D) Undefined behavior  

13. How do you declare an empty string in C++?  
    - A) `string s;`  
    - B) `char s[] = "";`  
    - C) `string s = "";`  
    - D) All of the above  

14. What will happen if you try to access `str[6]` in this code?  
    ```cpp
    string str = "Code";
    cout << str[6];
    ```  
    - A) Prints garbage value  
    - B) Compilation error  
    - C) Program crashes  
    - D) `\0`  

15. Which of the following correctly initializes a character array as a string?  
    - A) `char arr[4] = "abc";`  
    - B) `char arr[] = "abc";`  
    - C) `char arr[5] = {'a', 'b', 'c', '\0'};`  
    - D) All of the above  



