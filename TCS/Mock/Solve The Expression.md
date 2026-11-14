### Problem Description

Neena, a third-year engineering student, is enthusiastic about the competitive programming and often participates in the intercollegiate technical fests to test her problem-solving skills. On one occasion, she is presented with a complex problem that necessitates the evaluation of a mathematical expression incorporating bitwise operations and brackets, with the understanding that brackets take precedence in the order of operations.

In this task, numerals (0-9), bitwise operators, and brackets are represented as 7-segment display patterns. The entire expression is presented in this format. The objective is to convert the 7-segment representations into binary strings, evaluate the resulting expression, and return the final numerical result.

**Note:** The standard configuration for a 7-segment display within a 3x3 matrix, where all LEDs are illuminated, is shown below. Please refer to the following representation:

![com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@4a1e3ac1:image1.png](https://codevita.tcsapps.com/assets_public/img/SolveTheExpressionimage1.png)Figure 1: All LEDs illuminated, depicted 3x3 structure

The question requires that the following steps be taken to arrive at a solution:

1. Convert the 7-segment representation into binary strings:
    - Each number or operator is represented in a 3x3 seven-segment format.
    - Read the pattern from left-to-right and top-to-bottom, assigning:
        - 1 for a segment that is ON.
        - 0 for a segment that is OFF.
    - This forms the binary representation of the given symbol.
    - Let us see another digit represented in LED as well as its corresponding binary format

![com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@4a1e3ac1:image2.png](https://codevita.tcsapps.com/assets_public/img/SolveTheExpressionimage2.png)Figure 2: LED denoting the digit 2

- For multi-digit numbers, concatenate the binary representations of each digit from left to right.

1. Evaluate the expression:

- Apply the bitwise operations according to the following precedence order (highest to lowest) -
    - Brackets - ( )
    - Logical NOT
    - Logical OR
    - Logical AND

Ascertain the outcome: Upon completing the evaluation, provide the numerical value by aligning the resulting string with the initial numerical format.

**Note:**

The 7-segment patterns corresponding to digits, operators, and brackets are not standardised and Will differ from testcase to testcase.

### Constraints

1 <= N <= 32 (where, N denotes total of operands, operators, and brackets in the expression)

The expression is always valid and will have a valid answer.

### Input

First three line contains 7-segment representation of numbers from 0-9.

Next three lines contains 7-segment representation of operators and brackets in the order - Logical OR, Logical AND, Logical NOT, Opening bracket, Closing bracket.

Last three lines contains the 7-segment representation of the expression.

### Output

Numeric value which denotes the result of the expression

### Time Limit (secs)

1

### Examples

Example 1

Input

 _     _  _     _  _  _  _  _ 

| |  | _| _||_||_ |_   ||_||_|

|_|  ||_  _|  | _||_|  ||_| _|

 _        _  _ 

| || ||_||    |

| ||_|| ||_  _|

 _        _    

|_ |_|| ||_|  |

|_|  ||_| _|  |

Output

51

Explanation

The input is as follows:

![com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@4a1e3ac1:image3.png](https://codevita.tcsapps.com/assets_public/img/SolveTheExpressionimage3.png)

The required expression to be solve is: 64 && 91

where '&&'is Logical AND

The binary representation of 64 will be: 010110111000111001

The binary representation of 91 will be: 010111011000001001

When we perform Logical AND with both binary strings, we will get binary string as: 010110011000001001, which gives numeric value as 51

Hence the answer, 51.

Example 2

Input

 _           _     _  _  _  _ 

| |  || ||_|| || |  |  | _||_|

|_|  || || || ||_| _|  |  |  |

 _        _  _ 

|_||_ |_ |_  _|

|_|  ||_||_  _|

 _     _     _  _  _       

|_   ||_|| ||_|  | _||_ | |

|_   ||_|| ||_|  | _|  || |

Output

2

Explanation

The input is as follows:

![com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@4a1e3ac1:image4.png](https://codevita.tcsapps.com/assets_public/img/SolveTheExpressionimage4.png)

The required expression to solve is: (1 || 2 || 7) && 2

where '||' is Logical OR and '&&' is Logical AND

The binary representation for 1 will be: 000001001

The binary representation for 2 will be: 000101101

The binary representation for 7 will be: 010001001

Upon solving the expression according to the precedence, we get answer 2.