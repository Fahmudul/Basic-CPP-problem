### Multiple-Choice Questions on Strings (Based on the Lesson Code)

1. What is the output of the following code?  
   ```cpp
   char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
   cout << str;
   ```
   - A) `H`  
   - B) `Hello`  
   - C) `Hell`  
   - D) Undefined behavior  

2. Which of the following correctly initializes a character array with an implicit null character?  
   - A) `char str[] = "Learn";`  
   - B) `char str[5] = {'L', 'e', 'a', 'r', 'n'};`  
   - C) `char str[] = {'L', 'e', 'a', 'r', 'n'};`  
   - D) None of the above  

3. What will be the size of the array `char str[] = "Code";`?  
   - A) 4  
   - B) 5  
   - C) 6  
   - D) Undefined  

4. What happens when the following code is executed?  
   ```cpp
   char str[4] = "Test";
   cout << str;
   ```  
   - A) It prints `Test`.  
   - B) It throws a compilation error.  
   - C) It results in undefined behavior.  
   - D) It prints `Tes`.  

5. How is the string `"abcd"` represented in the following declaration?  
   ```cpp
   char str[5] = "abcd";
   ```  
   - A) As `{'a', 'b', 'c', 'd', '\0'}`  
   - B) As `{'a', 'b', 'c', 'd'}`  
   - C) As `{'a', 'b', 'c', 'd', 'e'}`  
   - D) Compilation error  

6. Which of the following will result in a valid C-style string?  
   - A) `char str[] = {'T', 'e', 'x', 't'};`  
   - B) `char str[] = "Text";`  
   - C) `char str[4] = "Text";`  
   - D) `char str[3] = {'T', 'e', '\0'};`  

7. What does the null character (`\0`) do in a character array?  
   - A) Ends the string in a character array.  
   - B) Indicates a new line.  
   - C) Starts the string in a character array.  
   - D) Indicates a special ASCII value.  

8. Which of the following correctly prints the character `a` from the array?  
   ```cpp
   char str[] = "Data";
   ```
   - A) `cout << str[0];`  
   - B) `cout << str[1];`  
   - C) `cout << str[3];`  
   - D) `cout << str[4];`  

9. If `char str[] = {'H', 'i', '\0', 'T'};`, what will `cout << str;` print?  
   - A) `HiT`  
   - B) `Hi`  
   - C) Undefined behavior  
   - D) `H`  

10. How is `char str[6] = "Hello";` different from `char str[] = "Hello";`?  
    - A) The former explicitly specifies the size of the array.  
    - B) The latter includes an extra null character.  
    - C) Both are exactly the same.  
    - D) The latter does not include a null character.  

11. What happens if `char str[3] = "Hey";` is declared?  
    - A) It throws a compilation error.  
    - B) It results in undefined behavior.  
    - C) It stores only `He`.  
    - D) It stores `Hey` and truncates the null character.  

12. Which of the following is a valid way to create a character array?  
    - A) `char arr[5] = "abc";`  
    - B) `char arr[] = {'a', 'b', 'c', '\0'};`  
    - C) `char arr[] = "abc";`  
    - D) All of the above  

13. If `char str[] = {'a', 'b', 'c', 'd', '\0'};`, what is the value of `str[4]`?  
    - A) `a`  
    - B) `d`  
    - C) `\0`  
    - D) Undefined  

14. What will happen if you print `char str[5] = {'a', 'b', 'c', 'd'};` using `cout`?  
    - A) It prints `abcd`.  
    - B) It throws a compilation error.  
    - C) It results in undefined behavior.  
    - D) It prints ASCII values of characters.  

15. Which of the following correctly declares an array of strings?  
    - A) `string arr[] = {"One", "Two", "Three"};`  
    - B) `char arr[][5] = {"One", "Two", "Three"};`  
    - C) `char arr[] = {'O', 'n', 'e'};`  
    - D) Both A and B  


