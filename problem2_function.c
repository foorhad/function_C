//no argument passed but returns a value.

#include<stdio.h>
int primeNumberCheck(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    return n;
}
int main()
{
    int n,i,flag=0;
    n =primeNumberCheck();

    if (n==1 || n==0)
    {
      flag=1;
    }
    

    for (i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("Prime number.");
    }
    else{
         printf("Not Prime number.");
    }

    return 0;
}