[Home of Lab Report](../lab.html)

# Program Ex 01: Program to use If-Else Statements

##  Discussion 

The syntax of an if...else statement in C programming language is −

if(codition) {
   /* statement(s) will execute if the condition  is true */
} else {
   /* statement(s) will execute if the condition  is false */
}
If the conditin is  true, then the if block will be executed, otherwise, the else block will be executed.


## Source file/s

```
src/.
├── main.c
└── main.c.save

0 directories, 2 files
```

---


# src/main.c

```

#include <stdio.h>
int main(){
printf("\nHunarpreet Singh\nME-A1 2030106\n\n");
int a=6,b=6;
printf("Value of a is %d\n",a);
printf("Value of b is %d\n",b);
if(a>=b)
{printf("a is either greater or equal to b\n\n");}
else
{printf("b is either greater or equal to a\n\n");}
printf("End of If-Else.\n\n");
return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-5
[100%]: build ok!

```

## Execution
```
xmake run


Hunarpreet Singh
ME-A1 2030106

Value of a is 6
Value of b is 6
a is either greater or equal to b

End of If-Else.


```

### Known Bugs and/or Errors:

No known bugs or errors.

### Lessons Learned:
1. Learnt what is if-else statement.
2. Learnt how to use If -Else statement in a C program.
