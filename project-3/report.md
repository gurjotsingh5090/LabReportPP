[Home of Lab Report](../lab.html)

# Program Ex 01: Program to use different data Data Types(Integer,Float,Char)

## Discussion

Each variable in C has an associated data type. Each data type requires different amounts of memory and has some specific operations which can be performed over it. 
Following are the examples of some very common data types used in C:

char:     The most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.
int:      As the name suggests, an int variable is used to store an integer.
float:    It is used to store decimal numbers with single precision.
double:   It is used to store decimal numbers (numbers with floating point value) with double precision. 
Different data types also have different ranges upto which they can store numbers. 
These ranges may vary from compiler to compiler.


## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

#include<stdio.h>
int main(void){
int a = 10,b = 20,c = 30;
float A = 1.14,B = 2.0001,C = 33.14;
char var1='X',var2='Y',var3='Z';
printf("\nHunarpreet Singh\nME-A1 2030106\n\n");
printf("Examples of Integers:-%d,%d,%d\n\n",a,b,c);
printf("Examples of floats:-%f,%f,%f\n\n",A,B,C);
printf("Examples of Characters:-%c,%c,%c\n\n",var1,var2,var3);
return 0;}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-3
[100%]: build ok!

```

## Execution
```
xmake run


Hunarpreet Singh
ME-A1 2030106

Examples of Integers:-10,20,30

Examples of floats:-1.140000,2.000100,33.139999

Examples of Characters:-X,Y,Z


```

### Known Bugs and/or Errors:

All the datatypes have the limit of numbers ,which they can store.
Using %f for float will contain six places after decimal.

### Lessons Learned:

1. Learnt  about the various data types available in c. 
2. Learnt to use different data types available in c.

