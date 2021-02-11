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


