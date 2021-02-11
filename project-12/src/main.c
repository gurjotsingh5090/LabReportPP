#include<stdio.h>
int main()
{    int i,lt,nxt,t1=0,t2=1;
    printf("Hunarpreet Singh 2030106\n\n");
    printf("To make a fibonacci series\n\n");
    
    printf("Enter the number of terms:-",lt);
    scanf("%d",&lt);
    printf("Fibonacci series is\n");
    for(i=1;i<=lt;i++)
    {
        printf("%d\n",t1);
     nxt=t1+t2 ;
     t1=t2;
     t2=nxt;
        
    }
    
    return 0;
}





