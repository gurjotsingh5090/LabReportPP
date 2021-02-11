[Home of Lab Report](../lab.html)

# Program Ex 01: Program to find Fibonacci Series

##Discussion
The Fibonacci Sequence is the series of numbers:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

The next number is found by adding up the two numbers before it:

the 2 is found by adding the two numbers before it (1+1),
the 3 is found by adding the two numbers before it (1+2),
the 5 is (2+3),
and so on!

Algorithm of this program is very easy −

START
   Step 1 → Take integer variable A, B, C
   Step 2 → Set A = 0, B = 0
   Step 3 → DISPLAY A, B
   Step 4 → C = A + B
   Step 5 → DISPLAY C
   Step 6 → Set A = B, B = C
   Step 7 → REPEAT from 4 - 6, for n times
STOP
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
{    int i,lt,nxt,t1=0,t2=1;
    printf("Hunarpreet Singh 2030106\n\n");
    printf("To make a fibonacci series\n\n");
    
    printf("Enter the number of terms:-",lt);
    scanf("%d",&lt);
    printf("Fibonacci series is\n");
    for(i=1;i<=lt;i++)
    {
        printf("%d\n",t1);
     nxt=t1+t2 ;
     t1=t2;
     t2=nxt;
        
    }
    
    return 0;
}






```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-12
[100%]: build ok!

```

# input.dat

```

5


```

---


## Execution
```
xmake run

Hunarpreet Singh 2030106

To make a fibonacci series

Enter the number of terms:-Fibonacci series is
0
1
1
2
3

```

### Known Bugs and/or Errors:

No known bugs or errors.

### Lessons Learned:

1. Learnt what is Fibonacci Series.
2. Learnt how to use Fibonacci Sreies in a C program.
