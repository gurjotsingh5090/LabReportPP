#include<stdio.h>
int main()
{    int i,num,fact=1;
    printf("Hunarpreet Singh 2030106\n\n");
    printf("To find the factorial of a number\n\n");
    
    printf("Enter the number:-");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
        
    }
    printf("Factorial of above number is %d\n\n",fact);
    return 0;
}

