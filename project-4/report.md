[Home of Lab Report](../lab.html)

# Program Ex 01: Program to do Logical and Relational Operators

## Discussion

There are 3 logical operators in C language.
 They are  (1) logical AND (&&)
           (2) logical OR (||)
           (3) logical NOT (!)
                               
Example:-
1)  && (logical AND)
    (x>5)&&(y<5)
    It returns true when both conditions are true
2)  || (logical OR)
    (x>=10)||(y>=10)
    It returns true when at-least one of the condition is true
3)  ! (logical NOT)
    !((x>5)&&(y<5))
    It reverses the state of the operand “((x>5) && (y<5))”
    If “((x>5) && (y<5))” is true, logical NOT operator makes it false


The following table shows all the relational operators supported by C language.
 Assume variable A holds 10 and variable B holds 20 then −

Operator	                              Description	                                                                                     Example
==	Checks if the values of two operands are equal or not.  If yes, then the condition becomes true.                                        (A == B) is not true.
!=	Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.	                (A != B) is true.
>	Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.                (A > B) is not true.
<	Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.	                (A < B) is true.
>=	Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.	(A >= B) is not true.
<=	Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.	(A <= B) is true.


## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```


#include <stdio.h>
int main(){
printf("\nHunarpreet Singh\nME-A1 2030106\n\n");
int a=10,b=10,c=20;
printf("a=%d,b=%d,c=%d\n\n",a,b,c);
printf("|| means OR\n&& means AND\n!means NOT\n");
printf("Use of Logical And Relational Operators:-\n");
printf("a==b || a<b is %d\n",a==b || a<b);
printf("a==b && a<b is %d\n",a==b && a<b);
printf("a==b || !(a<b) is %d\n",a==b || !(a<b));
printf("a==b && !(a>c) is %d\n",a==b && !(a>c));
printf("a==b || !(a>c) is %d\n",a==b && !(a>c));
return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-4
[100%]: build ok!

```

## Execution
```
xmake run


Hunarpreet Singh
ME-A1 2030106

a=10,b=10,c=20

|| means OR
&& means AND
!means NOT
Use of Logical And Relational Operators:-
a==b || a<b is 1
a==b && a<b is 0
a==b || !(a<b) is 1
a==b && !(a>c) is 1
a==b || !(a>c) is 1

```

### Known Bugs and/or Errors:

No known bugs or errors.

### Lessons Learned:

1. Learnt about what are logical operators.
2. Learnt about what are relational opertors.
3. Learnt about how to use logical and relational operators in a c program. 
