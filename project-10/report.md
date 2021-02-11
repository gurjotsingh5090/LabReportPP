[Home of Lab Report](../lab.html)

# Program Ex 01: Program to display Content of a Structure Book

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
struct Book
{
char Title [100];
char Author[100];
float Price;
char Subject[100];
};
struct Book Book1 = {
"Manufacturing_Practice",
"Swarn_Singh",
95.50,
"Manufacturing Practices"
};
printf("Book Number:-1\n");
printf("Title:-%s\n",Book1.Title);
printf("Author:-%s\n",Book1.Author);
printf("Price:-%0.2f\n",Book1.Price);
printf("Subject:-%s\n\n\n",Book1.Subject);

struct Book Book2 = {
"Engineering Chemistry",
"Dr.Amanpreet Kaur Sodhi",
240,
"Chemistry"
};
printf("Book Number:-2\n");
printf("Title:-%s\n",Book2.Title);
printf("Author:-%s\n",Book2.Author);
printf("Price:-%0.2f\n",Book2.Price);
printf("Subject:-%s\n\n\n",Book2.Subject);

struct Book Book3 = {
"Effective Technical Communication",
"Mashrif Rizvi",
300,
"English"
};
printf("Book Number:-3\n");
printf("Title:-%s\n",Book3.Title);
printf("Author:-%s\n",Book3.Author);
printf("Price:-%0.2f\n",Book3.Price);
printf("Subject:-%s\n\n\n",Book3.Subject);
struct Book Book4 = {
"Engineering Maths",
"Prithviraj Chauhan",
350,
"mathematics",
};
printf("Book Number:-4\n");
printf("Title:-%s\n",Book4.Title);
printf("Author:-%s\n",Book4.Author);
printf("Price:-%0.2f\n",Book4.Price);
printf("Subject:-%s\n\n\n",Book4.Subject);

struct Book Book5 = {
"C Notes For Professionals",
"hsrai",
225.75,
"Programming For Problem Solving",
};
printf("Book Number:-5\n");
printf("Title:-%s\n",Book5.Title);
printf("Author:-%s\n",Book5.Author);
printf("Price:-%0.2f\n",Book5.Price);
printf("Subject:-%s\n\n\n",Book5.Subject);
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

Book Number:-1
Title:-Manufacturing_Practice
Author:-Swarn_Singh
Price:-95.50
Subject:-Manufacturing Practices


Book Number:-2
Title:-Engineering Chemistry
Author:-Dr.Amanpreet Kaur Sodhi
Price:-240.00
Subject:-Chemistry


Book Number:-3
Title:-Effective Technical Communication
Author:-Mashrif Rizvi
Price:-300.00
Subject:-English


Book Number:-4
Title:-Engineering Maths
Author:-Prithviraj Chauhan
Price:-350.00
Subject:-mathematics


Book Number:-5
Title:-C Notes For Professionals
Author:-hsrai
Price:-225.75
Subject:-Programming For Problem Solving



```

### Known Bugs and/or Errors:

No known bugs or errors.

### Lessons Learned:

1.  Learnt to use structure in our daily life.
