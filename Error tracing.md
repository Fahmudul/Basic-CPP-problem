Here are **30 error tracing questions**, categorized into **strings**, **loops**, **arrays**, **datatypes**, and **syntax errors**. Each code snippet contains an error for students to identify.

---

### **1-10: Strings**
1. **Code**:  
   ```cpp
   char str[5] = "Hello";  // String size exceeds array bounds
   ```  
   **Error**: Buffer overflow; the string `"Hello"` requires 6 characters, including `'\0'`.  

2. **Code**:  
   ```cpp
   char str[] = {'H', 'e', 'l', 'l', 'o'};
   cout << strlen(str);  // Missing null terminator
   ```  
   **Error**: Undefined behavior due to missing `'\0'`.  

3. **Code**:  
   ```cpp
   char str[5];
   strcpy(str, "World!");  // Copy exceeds destination size
   ```  
   **Error**: Buffer overflow.  

4. **Code**:  
   ```cpp
   char str[] = "Hi";
   strcat(str, " There");  // `str` has insufficient memory for concatenation
   ```  
   **Error**: Buffer overflow during concatenation.  

5. **Code**:  
   ```cpp
   char str[3] = "OK";
   cout << str[3];  // Access out-of-bounds index
   ```  
   **Error**: Undefined behavior.  

6. **Code**:  
   ```cpp
   cout << strlen(123);  // Passing incorrect data type
   ```  
   **Error**: `strlen()` expects a `char*` or `const char*`, not an integer.  

7. **Code**:  
   ```cpp
   char* str;
   strcpy(str, "Test");  // Using uninitialized pointer
   ```  
   **Error**: Undefined behavior due to uninitialized pointer.  

8. **Code**:  
   ```cpp
   char str1[] = "a";
   char str2[] = "A";
   if (str1 == str2) cout << "Equal";  // Comparing strings using `==`
   ```  
   **Error**: Strings cannot be compared using `==`; use `strcmp()`.  

9. **Code**:  
   ```cpp
   char* str = "Immutable";
   str[0] = 'X';  // Modifying a string literal
   ```  
   **Error**: Attempt to modify immutable memory.  

10. **Code**:  
    ```cpp
    char str[] = "Escape\g";  // Invalid escape character
    ```  
    **Error**: Invalid escape sequence `\g`.

---

### **11-20: Loops**
11. **Code**:  
    ```cpp
    for (int i = 0; i < 5; i--)
        cout << i;  // Infinite loop due to incorrect decrement
    ```  
    **Error**: Infinite loop.  

12. **Code**:  
    ```cpp
    for (int i = 0; i <= 5; i++);
        cout << i;  // Semicolon after loop condition
    ```  
    **Error**: Empty loop body due to the semicolon.  

13. **Code**:  
    ```cpp
    int i = 0;
    while (i < 10);
        cout << i;  // Semicolon after `while`
    ```  
    **Error**: Infinite loop due to semicolon.  

14. **Code**:  
    ```cpp
    int i = 0;
    for (i = 0; i < 5; i++);
        cout << i;  // Mismatched indentation misleads logic
    ```  
    **Error**: `cout` executes outside the loop.  

15. **Code**:  
    ```cpp
    for (int i = 0; i < 5; i++) {
        cout << i;
    }
    cout << i;  // `i` is not in scope
    ```  
    **Error**: `i` is declared inside the loop and is out of scope.  

16. **Code**:  
    ```cpp
    for (int i = 1; i <= 10; i++) {
        if (i % 2 = 0) cout << i;  // Assignment instead of comparison
    }
    ```  
    **Error**: Use `==` for comparison, not `=`.  

17. **Code**:  
    ```cpp
    while (i < 5) cout << i;  // Missing initialization of `i`
    ```  
    **Error**: Variable `i` is used uninitialized.  

18. **Code**:  
    ```cpp
    do {
        cout << i;
    } while (i < 5);  // `i` is not declared
    ```  
    **Error**: Variable `i` is undeclared.  

19. **Code**:  
    ```cpp
    for (int i = 0; i < 5) cout << i++;  // Missing semicolon in the loop condition
    ```  
    **Error**: Syntax error in the `for` condition.  

20. **Code**:  
    ```cpp
    for (int i = 0; i < 10; i++) {
        int sum += i;  // `sum` is not initialized
    }
    ```  
    **Error**: `sum` is used without initialization.  

---

### **21-30: Arrays, Datatypes, and Syntax Errors**
21. **Code**:  
    ```cpp
    int arr[5];
    arr[5] = 10;  // Access out-of-bounds index
    ```  
    **Error**: Undefined behavior due to index out of bounds.  

22. **Code**:  
    ```cpp
    int arr[] = {1, 2, 3};
    cout << arr[3];  // Index out of range
    ```  
    **Error**: Undefined behavior.  

23. **Code**:  
    ```cpp
    float arr[3] = {1.1, 2.2, 3.3};
    cout << arr[3];  // Access out of bounds
    ```  
    **Error**: Undefined behavior.  

24. **Code**:  
    ```cpp
    int arr[3];
    arr = {1, 2, 3};  // Invalid array assignment
    ```  
    **Error**: Arrays cannot be assigned after initialization.  

25. **Code**:  
    ```cpp
    int arr[5] = {1, 2};
    cout << arr[6];  // Out of range
    ```  
    **Error**: Undefined behavior.  

26. **Code**:  
    ```cpp
    int x = "5";  // Assigning string to an integer
    ```  
    **Error**: Type mismatch; cannot assign `char*` to `int`.  

27. **Code**:  
    ```cpp
    char ch = 256;  // Exceeding `char` range
    ```  
    **Error**: Overflow for `char` type.  

28. **Code**:  
    ```cpp
    int x = 5.5;  // Assigning float to an integer
    ```  
    **Error**: Implicit type conversion; loss of precision.  

29. **Code**:  
    ```cpp
    double x = "3.14";  // Assigning string to a double
    ```  
    **Error**: Type mismatch.  

30. **Code**:  
    ```cpp
    int a;
    cout << a;  // Using uninitialized variable
    ```  
    **Error**: Undefined behavior due to the use of an uninitialized variable.  

---

