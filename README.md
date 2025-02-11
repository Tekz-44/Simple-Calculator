# Simple-Calculator
Simple Calculator in C
Overview
This is a simple command-line calculator program written in C. It allows the user to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. Although the code includes cases for modulo (%) and exponentiation (^), the current user prompt supports only the following operators: +, -, *, and /.

The calculator continuously asks the user for an operator and two numbers, computes the result, and displays it. The program will exit when the user inputs 'q' as the operator.

Features
Addition (+): Adds two numbers.
Subtraction (-): Subtracts the second number from the first.
Multiplication (*): Multiplies two numbers.
Division (/): Divides the first number by the second (with a check to prevent division by zero).
Modulo (%): Computes the remainder of the division between two numbers (casts input to integers).
(This operator is implemented but not available via the current prompt.)
Exponentiation (^): Raises the first number to the power of the second using the pow() function from <math.h>.
(This operator is implemented but not available via the current prompt.)
Prerequisites
A C compiler (e.g., GCC).
Standard C libraries: <stdio.h> and <math.h>.
Compilation
To compile the program, use a command like the following:

gcc calculator.c -o calculator -lm
Note: The -lm flag is required to link the math library for functions like pow().

Usage
After compiling, run the executable:


./calculator
Follow the on-screen prompts:

Operator Input:
Enter an operator (+, -, *, or /). To exit the program, type q.


Number Input:
Enter the first and second numbers as prompted.
Result:
The result is calculated and displayed with three decimal places.
Example Session
sql
Copy
Edit
Calculator

Enter an operator(+, -, *, /) or 'q' to quit: +
Enter first number: 5
Enter second number: 3
Result: 8.000
Known Issues
Division Operation Bug:
In the division (/) case, the code does not actually compute the division before printing the result. To fix this, add the statement:


result = num1 / num2;
before printing the result in the / case.

Operator Prompt Mismatch:
While the code includes cases for % and ^, these operators are not mentioned in the prompt and will not be reached because of the current input validation that only allows +, -, *, and /.

Future Improvements
Fix the Division Operation:
Correct the division case to compute and display the proper result.

Extend Operator Support:
Update the user prompt and input validation to support the modulo (%) and exponentiation (^) operations.

Enhance Input Validation:
Improve error handling for non-numeric inputs and provide more detailed feedback to the user.

License
This project is open source. Feel free to use, modify, and distribute the code as needed.

