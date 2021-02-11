[Home of Lab Report](../lab.html)

# Program Ex 01: Program to find factorial of a number



##  Discussion
Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer 
and denoted by that integer and an exclamation point. 
Thus, factorial seven is written 7!, meaning 1 × 2 × 3 × 4 × 5 × 6 × 7. Factorial zero is defined as equal to 1.

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
int main()
{    int i,num,fact=1;
    printf("Hunarpreet Singh 2030106\n\n");
    printf("To find the factorial of a number\n\n");
    
    printf("Enter the number:-");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
        
    }
    printf("Factorial of above number is %d\n\n",fact);
    return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-10
[100%]: build ok!

```

# input.dat

```

12

```

---


## Execution
```
xmake run

Hunarpreet Singh 2030106

To find the factorial of a number

Enter the number:-Factorial of above number is 479001600


```

### Known Bugs and/or Errors:

Factorail of big numbers cannot be calculated.
As every datatype has a limit upto which it can store values.
When the number if digits exceed that datatype capacity then we get a wrong value.
### Lessons Learned:

1. Learnt to calculate a factorial of a given number in a C programme.
