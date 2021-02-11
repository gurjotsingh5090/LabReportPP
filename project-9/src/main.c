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
