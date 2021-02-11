#include <stdio.h>
int main(){
printf("\nHunarpreet Singh\nME-A1 2030106\n\n");
int budget;
printf("Guide to buy a perfect phone according to your budget\n");
printf("Enter your budget in rupees:");
scanf("%d",&budget);
if (5000<=budget && budget<10000)
{printf("You can buy Samsung Galaxy J6\n\n");}
else if (10000<=budget && budget<=15000)
{printf("You  can buy Redmi 9 Prime\n\n");}
else if (15000<budget && budget<=20000)
{printf("You can buy Samsung Galaxy F41\n\n");}
else if (budget>20000 && budget<=25000)
{printf("You can buy Samsung Galaxy A51\n\n");}
else
{printf("You are  rich enough,so you can buy a iphone\n\n");}
return 0;

}
