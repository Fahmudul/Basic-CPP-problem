
---

### Scenario
You are tasked with creating a banking system for a small local bank. The system should allow customers to manage their accounts, perform basic operations, and eventually send and receive money. 

---

### **Level 1: Basic Account Management**
Create a basic class to manage individual bank accounts.  

**Requirements:**
1. Create a class `BankAccount`.
2. Attributes:
   - `accountNumber` (integer): Unique identifier for each account.
   - `accountHolderName` (string): Name of the account holder.
   - `balance` (double): The balance in the account.
3. Methods:
   - Constructor to initialize `accountNumber`, `accountHolderName`, and `balance`.
   - `deposit(double amount)`: Adds the amount to the balance.
   - `withdraw(double amount)`: Deducts the amount from the balance if sufficient funds are available; otherwise, print an error message.
   - `displayDetails()`: Displays the account details.

**Example Task:**
Write a program to create a `BankAccount` object, deposit money, withdraw money, and display the account details.

---

### **Level 2: Managing Multiple Accounts**
Extend the system to manage multiple bank accounts.  

**Requirements:**
1. Use an array of `BankAccount` objects to store up to 10 accounts (for simplicity, limit to 10 accounts).
2. Add the following methods:
   - `addAccount(int accountNumber, string accountHolderName, double balance)`: Adds a new account to the array.
   - `findAccount(int accountNumber)`: Searches for an account by `accountNumber` and returns its index or `-1` if not found.
   - `transferMoney(int fromAccount, int toAccount, double amount)`: Transfers money from one account to another, ensuring sufficient balance in the sender's account.
3. Enhance the `BankAccount` class:
   - Add an `isActive` (boolean) attribute to indicate whether an account is active or not.

**Example Task:**
Write a program to add multiple accounts, transfer money between two accounts, and display their details.

---

### **Level 3: Sending and Receiving Money**
Enhance the system with methods for sending and receiving money between accounts.  

**Requirements:**
1. Update the `BankAccount` class:
   - Add methods:
     - `sendMoney(BankAccount &receiver, double amount)`: Deducts money from the sender's account and adds it to the receiver's account.
     - `receiveMoney(double amount)`: Adds money to the receiver's account.
2. Update the `transferMoney` method in the main program:
   - Use `sendMoney` and `receiveMoney` methods to perform the transfer.
3. Add a method to display all active accounts and their balances.

**Example Task:**
Write a program to simulate sending and receiving money between accounts and verify the balances of both accounts after the transaction.

---

### **Level 4: Advanced Features**
Add more functionality to enhance the realism and usability of the banking system.  

**Requirements:**
1. Add `accountType` to `BankAccount` (e.g., "Savings" or "Current").
2. Implement methods for managing inactive accounts:
   - `deactivateAccount(int accountNumber)`: Marks an account as inactive.
   - `reactivateAccount(int accountNumber)`: Marks an account as active again.
3. Introduce overdraft protection for "Current" accounts:
   - Allow withdrawals that result in a negative balance up to a limit of -$500.
   - Ensure "Savings" accounts cannot have a negative balance.
4. Enhance error handling:
   - Prevent sending/receiving money if an account is inactive.
   - Print an error message for invalid transactions.

**Example Task:**
Write a program that:
1. Creates accounts of different types.
2. Allows transfers and withdrawals with overdraft protection.
3. Deactivates an account and attempts a transaction with it.

---

