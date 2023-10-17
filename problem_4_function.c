// Argument passed and returns a value
#include<stdio.h>
int primeNumberChecks(int n1){
    if (n1==1 || n1==0)
    {
        return 1;
    }
    
    for (int i = 2; i <= n1/2; i++)
    {
        if (n1 % i ==0)
        {
            return 1;
        }
    }
    return 0;    
}
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int flag= primeNumberChecks(number);

    if (flag==0)
       printf("Prime Number.");
    
    else
        printf("Not Prime Number.");        
    return 0;
}