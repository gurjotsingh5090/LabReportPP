[Home of Lab Report](../lab.html)

# Program Ex 01: Program to do Arithmetic Calculation

## Discussion

Arithmetic is the branch of mathematics that deals with the study of numbers 
using various operations on them. 
Basic operations of math are addition, subtraction, multiplication and division.

In order to perform arithmetic calculations in c language we should what are arithmetic operators.
An operator is a symbol that operates on a value or a variable. For example: + is an operator to perform addition.
or
An operator is a symbol that tells the compiler to perform specific mathematical or logical functions. 
C language is rich in built-in operators and provides the following types of operators −

Arithmetic Operators
Relational Operators
Logical Operators
Assignment Operators

Following are the arithmetic operators supported by the C language.
Assume variable A holds 10 and variable B holds 20 then −
+	Adds two operands.	                                                        A + B = 30
−	Subtracts second operand from the first.	                                A − B = -10
*	Multiplies both operands.	                                                A * B = 200
/	Divides numerator by de-numerator.	                                        B / A = 2
%	Modulus Operator and giver  remainder of  an integer after  division.           B% A = 0
++	Increment operator increases the integer value by one.                          A++ = 11
--	Decrement operator decreases the integer value by one.                          A-- =9


## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-2
[100%]: build ok!

```

## Execution
```
xmake run


Hunarpreet Singh
ME A1 2030106

Value of a is 15
Value of b is 20
The result for a+b=c and value of c is 35

```

### Known Bugs and/or Error
1. Thera  is a limit up to which int can store values.

### Lessons Learned:
1. Learnt about the arithmetic operators avilable in c.
2. Learnt how to use(+) operator to add two numbers.
3. Learnt to use int to store integer type values.
