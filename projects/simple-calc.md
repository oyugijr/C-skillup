# Simple Calculator in C

## 📌 Project Overview

This project is a **command-line calculator** built in C. It takes two numbers from the user and performs all the basic arithmetic operations in one step. The program displays results for each operation and continues running based on the user’s choice.

It is designed to demonstrate fundamental C programming concepts like variables, operators, conditionals, loops, and input validation.

---

## ✨ Features

* ➕ Add two numbers
* ➖ Subtract two numbers
* ✖️ Multiply two numbers
* ➗ Divide two numbers (with division by zero validation)
* 🔁 Keep running until the user exits manually

---

## 🖥️ Example Run

```
Enter first number: 12
Enter second number: 4

Addition: 12.00 + 4.00 = 16.00
Subtraction: 12.00 - 4.00 = 8.00
Multiplication: 12.00 * 4.00 = 48.00
Division: 12.00 / 4.00 = 3.00

Do you want to perform another calculation? (1 for Yes / 0 for No): 1

Enter first number: 10
Enter second number: 0

Addition: 10.00 + 0.00 = 10.00
Subtraction: 10.00 - 0.00 = 10.00
Multiplication: 10.00 * 0.00 = 0.00
Division: Error! Cannot divide by 0.

Do you want to perform another calculation? (1 for Yes / 0 for No): 0
Exiting calculator.
```

---

## 📚 Project Requirements

Before working on this project, make sure you are familiar with:

* ✅ Variable declaration and operators in C
* ✅ Basic input/output using `printf()` and `scanf()`
* ✅ Decision making (`if-else`, `switch`)
* ✅ Loops (`while`, `for`)

You will also need:

* A **C compiler** (e.g., GCC)
* A **text editor or IDE** (e.g., VS Code, Code::Blocks, or Dev-C++)

---

## ⚙️ Implementation Details

1. Start by initializing the necessary variables.
2. Use an infinite loop (`while (1)`) to keep the program running until the user decides to exit.
3. Inside the loop:

   * Take two numbers as input.
   * Perform addition, subtraction, multiplication, and division.
   * Handle division by zero with proper error messages.
4. Ask the user whether they want to continue.
5. Exit the program gracefully if the user chooses to stop.

---

## 🚀 How to Run

1. Save the program in a file, e.g., `calculator.c`.
2. Compile the program using:

   ```bash
   gcc calculator.c -o calculator
   ```
3. Run the program:

   ```bash
   ./calculator
   ```

---

## 📝 Note

Try solving and implementing this project yourself before checking the solution. This is a great way to strengthen your fundamentals in **C programming**.
