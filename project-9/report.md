[Home of Lab Report](../lab.html)

# Program Ex 01:Program to display Content of a Structure


## Discussion 
Arrays allow to define type of variables that can hold several data items of the same kind. 
Similarly structure is another user defined data type available in C that allows to combine data items of different kinds.

Structures are used to represent a record. Suppose you want to keep track of your books in a library. 
To define a structure, you must use the struct statement. The struct statement defines a new data type, with more than one member. 


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
int main(void)
{
struct Student
{
char Name[40];
long long int Roll_number;
char Class[10];
char Address[50];
};
struct Student Student_1 = {
"Hunarpreet Singh",
2030106,
"ME A1",
"Himachal Pradesh"
};
printf("Name:-%s\n",Student_1.Name);
printf("Roll_number:-%lld\n",Student_1.Roll_number);
printf("Class:-%s\n",Student_1.Class);
printf("Address:-%s\n",Student_1.Address);

struct Student Student_2 = {
"Abhilash Jamwal",
2030102,
"ME A1",
"Jammu and Kashmir"
};
printf("Name:-%s\n",Student_2.Name);
printf("Roll_number:-%lld\n",Student_2.Roll_number);
printf("Class:-%s\n",Student_2.Class);
printf("Address:-%s\n",Student_2.Address);
return 0;
}

```

---

## Compilation

```
xmake

[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release project-9
[100%]: build ok!

```

## Execution
```
xmake run

Name:-Hunarpreet Singh
Roll_number:-2030106
Class:-ME A1
Address:-Himachal Pradesh
Name:-Abhilash Jamwal
Roll_number:-2030102
Class:-ME A1
Address:-Jammu and Kashmir

```

### Known Bugs and/or Errors:

No known bugs or errors.

### Lessons Learned:

1.  Learnt what is sructure.
2.  Learnt how to use structure in a C program.
