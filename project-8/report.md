[Home of Lab Report](../lab.html)

# Program Ex 01:Program to print a right-angled triangle pattern using nested for loop


##  Discussion

Nested loop means a loop statement inside another loop statement. 
That is why nested loops are also called as “loop inside loop“.

Syntax for Nested For loop:

for ( initialization; condition; increment ) {

   for ( initialization; condition; increment ) {
      
      // statement of inside loop
   }

   // statement of outer loop
} 
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
printf("Hunarpreet Singh\nME-A1 2030106\n\n");
for (int a=1;a<=10;a++)
{for(int b=1;b<=a;b++)
{printf("*");}
printf("\n");}
return 0;}



```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-8
[100%]: build ok!

```

## Execution
```
xmake run

Hunarpreet Singh
ME-A1 2030106

*
**
***
****
*****
******
*******
********
*********
**********

```

### Known Bugs and/or Errors:

No known bugs or errors.

### Lessons Learned:

1.  Learnt what is nested for loop.
2.  Learnt how to use nested for loop in a c progrm.
