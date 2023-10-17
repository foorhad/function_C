#include<stdio.h>
void checkPrimeNumbers();

int main()
{
    checkPrimeNumbers();
    return 0;
}
void checkPrimeNumbers()
{
    int n,i, flag=0;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    if (n==0 || n==1)
    {
        flag=1;
    }
    for ( i = 2; i <= n/2; i++)
    {
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is Prime number",n);
    }
    else{
        printf("%d is not prime number",n);
    }
}    
  