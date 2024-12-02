**30 output tracing questions**, a mix of **strings**, **arrays**, and **basic loops** (including simple pattern problems):

---

### **Output Tracing Questions**

#### **1-10: Strings**
1. **Code**:  
   ```cpp
   char str[] = "Hello";
   cout << str[1];
   ```  
   **Output**: `e`  

2. **Code**:  
   ```cpp
   char str1[] = "Hi";
   char str2[] = "There";
   strcat(str1, str2);
   cout << str1;
   ```  
   **Output**: `HiThere`  

3. **Code**:  
   ```cpp
   char str[] = "World";
   cout << strlen(str);
   ```  
   **Output**: `5`  

4. **Code**:  
   ```cpp
   char str1[] = "abc";
   char str2[] = "xyz";
   cout << strcmp(str1, str2);
   ```  
   **Output**: `-1`  

5. **Code**:  
   ```cpp
   char str[] = "Hello\0World";
   cout << strlen(str);
   ```  
   **Output**: `5`  

6. **Code**:  
   ```cpp
   char str[10];
   strcpy(str, "Good");
   cout << str;
   ```  
   **Output**: `Good`  

7. **Code**:  
   ```cpp
   char str[] = "C++";
   cout << strchr(str, '+');
   ```  
   **Output**: `+` (prints the part of the string starting from the first `+`)  

8. **Code**:  
   ```cpp
   char str1[] = "Data";
   char str2[] = "Science";
   strncpy(str1, str2, 4);
   cout << str1;
   ```  
   **Output**: `Scie`  

9. **Code**:  
   ```cpp
   char str1[] = "aBc";
   char str2[] = "abc";
   cout << strcmp(str1, str2);
   ```  
   **Output**: `-1`  

10. **Code**:  
    ```cpp
    char str[] = "Pattern";
    cout << str[7];
    ```  
    **Output**: Undefined behavior (out-of-bounds access)  

---

#### **11-20: Arrays**
11. **Code**:  
    ```cpp
    int arr[] = {1, 2, 3};
    cout << arr[1];
    ```  
    **Output**: `2`  

12. **Code**:  
    ```cpp
    int arr[5] = {0};
    cout << arr[3];
    ```  
    **Output**: `0`  

13. **Code**:  
    ```cpp
    int arr[5] = {1, 2, 3};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    ```  
    **Output**: `1 2 3 0 0`  

14. **Code**:  
    ```cpp
    int arr[3] = {10, 20, 30};
    cout << arr[0] + arr[2];
    ```  
    **Output**: `40`  

15. **Code**:  
    ```cpp
    int arr[] = {1, 2, 3, 4};
    for (int i = 3; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    ```  
    **Output**: `4 3 2 1`  

16. **Code**:  
    ```cpp
    int arr[] = {5, 10, 15};
    arr[1] = arr[2];
    cout << arr[1];
    ```  
    **Output**: `15`  

17. **Code**:  
    ```cpp
    int arr[] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) / sizeof(arr[0]);
    ```  
    **Output**: `5`  

18. **Code**:  
    ```cpp
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    cout << arr[4];
    ```  
    **Output**: `5`  

19. **Code**:  
    ```cpp
    int arr[] = {10, 20, 30};
    cout << arr[3];
    ```  
    **Output**: Undefined behavior (out-of-bounds access)  

20. **Code**:  
    ```cpp
    int arr[] = {1, 2, 3};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i];
    }
    cout << sum;
    ```  
    **Output**: `6`  

---

#### **21-30: Loops (Including Pattern Problems)**
21. **Code**:  
    ```cpp
    for (int i = 1; i <= 3; i++) {
        cout << i << " ";
    }
    ```  
    **Output**: `1 2 3`  

22. **Code**:  
    ```cpp
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    ```  
    **Output**:  
    ```
    *
    **
    ***
    ****
    *****
    ```  

23. **Code**:  
    ```cpp
    for (int i = 3; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    ```  
    **Output**:  
    ```
    1 2 3
    1 2
    1
    ```  

24. **Code**:  
    ```cpp
    for (int i = 1; i <= 3; i++) {
        cout << i * i << " ";
    }
    ```  
    **Output**: `1 4 9`  

25. **Code**:  
    ```cpp
    for (int i = 1; i <= 4; i++) {
        for (int j = i; j <= 4; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    ```  
    **Output**:  
    ```
    1 2 3 4
    2 3 4
    3 4
    4
    ```  

26. **Code**:  
    ```cpp
    for (int i = 1; i <= 3; i++) {
        cout << "* ";
    }
    ```  
    **Output**: `* * * `  

27. **Code**:  
    ```cpp
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    ```  
    **Output**:  
    ```
    1
    2 4
    3 6 9
    ```  

28. **Code**:  
    ```cpp
    for (int i = 1; i <= 3; i++) {
        for (int j = 3; j >= i; j--) {
            cout << "#";
        }
        cout << endl;
    }
    ```  
    **Output**:  
    ```
    ###
    ##
    #
    ```  

29. **Code**:  
    ```cpp
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    cout << sum;
    ```  
    **Output**: `15`  

30. **Code**:  
    ```cpp
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    ```  
    **Output**:  
    ```
    1
    2 2
    3 3 3
    4 4 4 4
    ```  

---

