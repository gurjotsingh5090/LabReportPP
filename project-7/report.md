[Home of Lab Report](../lab.html)

# Program Ex 01:Program to print multiplication table of any table using for loop

## Discussion
In programming, a loop is used to repeat a block of code until the specified condition is met.

C programming has three types of loops:

1)for loop
2)while loop
3)do...while loop

The syntax of the for loop is:

for (initiation;condition;incrementation)
{
    // statements inside the body of loop
}

The inition step is executed first, and only once.
This step allows you to declare and initialize any loop control variables.
You are not required to put a statement here, as long as a semicolon appears.
Next, the condition is evaluated. If it is true, the body of the loop is executed. 
If it is false, the body of the loop does not execute and the flow of control jumps to the next statement just after the 'for' loop.
After the body of the 'for' loop executes, the flow of control jumps back up to the increment statement. 
This statement allows you to update any loop control variables. This statement can be left blank, 
as long as a semicolon appears after the condition.

The condition is now evaluated again. 
If it is true, the loop executes and the process repeats itself (body of loop, then increment step, and then again condition). 
After the condition becomes false, the 'for' loop terminates.

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
int t;
printf("Enter the number of which you want to print table:-");
scanf("%d",&t);
for (int i=1;i<=10;i++)
{printf("%d * %d = %d\n",t,i,t*i);}
return 0;
}


```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-7
[100%]: build ok!

```

## Execution
```
xmake run

Hunarpreet Singh
ME-A1 2030106

Enter the number of which you want to print table:-22045 * 1 = 22045
22045 * 2 = 44090
22045 * 3 = 66135
22045 * 4 = 88180
22045 * 5 = 110225
22045 * 6 = 132270
22045 * 7 = 154315
22045 * 8 = 176360
22045 * 9 = 198405
22045 * 10 = 220450

```

### Known Bugs and/or Errors:

No known bugs or errors.

### Lessons Learned:

1. Learnt what is for loop.
2. Learnt how to use for loop in  a C program.
