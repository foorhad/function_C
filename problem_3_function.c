//Argument passed but not returns value..
#include<stdio.h>
void primeNumberCheck(int n1){
    int i,flag=0;
    if (n1==0 || n1==1)
    {
        flag=1;
    }
    for ( i = 2; i <= n1/2; i++){
        if (n1 % i == 0){
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is a Prime number",n1);
    }
    else{
        printf("%d isn't a Prime number",n1);
    } 
}
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    primeNumberCheck(number); 
    return 0;
}