[Home of Lab Report](../lab.html)

# Program Ex 01: Application of If-Else Statements in Daily Life Problems

## Discussion

 
 In our daily life if-else statements are used in a number of situations.
For example: Sometimes our parents give us condition if you score good you will get a new phone, 
else you have to use your old phone.
Other Example could be If i clear jee i will get nit,
else i have to join a private college.

 
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
float height,weight;
printf("Enter your Weight in Kg:-");
scanf("%f",&weight);
printf("Enter your Height in meters:-");
scanf("%f",&height);
float BMI=weight/(height*height);
printf("Your BMI is %f.\n",BMI);
if (BMI>30)
{printf("You are obese!\n\n");}
else if (BMI>=25)
{printf("You  are overweight!\n\n");}
else if (BMI>=18.5)
{printf("You are normal\n\n");}
else
{printf("You are underweight\n\n");}
return 0;

}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-6
[100%]: build ok!

```

## Execution
```
xmake run


Hunarpreet Singh
ME-A1 2030106

Enter your Weight in Kg:-Enter your Height in meters:-Your BMI is 0.124498.
You are underweight


```

### Known Bugs and/or Errors:

No known bugs or errors.

### Lessons Learned:

1. Learnt to compare if else statement with our daily life problems.
