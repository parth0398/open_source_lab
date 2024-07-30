ID and Password Protected Calculator

Overview
This C program demonstrates a basic authentication system combined with a simple calculator. Upon providing a correct ID and password, users are granted access to a calculator that supports addition, subtraction, multiplication, and division operations.

Features
ID and Password Authentication: Users must enter a predefined ID and password to access the calculator.
Basic Calculator Operations: Supports addition, subtraction, multiplication, and division.
Error Handling: Handles division by zero and invalid menu choices.

Requirements
C Compiler (e.g., GCC)
Basic knowledge of C programming

Usage
Compile the Program

Use a C compiler to compile the source code. For example, with GCC, you can compile it using:

sh
Copy code
gcc -o calculator calculator.c
This will generate an executable named calculator.

Run the Program

Execute the compiled program:

sh
Copy code
./calculator
Enter Credentials

When prompted, enter the following credentials:

ID: user123
Password: pass123
If the credentials are correct, you will be granted access to the calculator.

Use the Calculator

Follow the menu options to perform arithmetic operations:

1: Addition
2: Subtraction
3: Multiplication
4: Division
5: Exit
Enter the numbers for the selected operation, and the result will be displayed. You can continue using the calculator until you choose to exit.

Code Description
calculator Function: Provides a menu-driven calculator with options for basic arithmetic operations.
main Function: Handles user authentication and calls the calculator function if credentials are correct.
Example
Here is an example of how the program runs:

markdown
Copy code
Enter ID: user123
Enter Password: pass123
Login successful!

Basic Calculator Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice (1-5): 1
Enter first number: 10
Enter second number: 5
Result: 15.00

Basic Calculator Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice (1-5): 5
Exiting calculator.
Important Notes
The ID and password are hardcoded in the program. For security purposes, consider implementing more secure authentication methods for real-world applications.
This program is intended for educational purposes to illustrate basic authentication and calculator functionalities in C.
License
This project is licensed under the MIT License. See the LICENSE file for more details.

