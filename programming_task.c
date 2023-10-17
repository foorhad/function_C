/*Can you create a function that

takes two numbers
performs the multiplication of two numbers
returns the result*/

#include<stdio.h>
int calculateMul(int n1, int n2){
    int result = n1 * n2;
    return result;
}
int main()
{
    int num1, num2, multipy;
    printf("Enter the num1, num2: ");
    scanf("%d %d",&num1, &num2);

    multipy=calculateMul(num1,num2);
    printf("Multiplication of %d and %d is %d",num1,num2,multipy);
    

    
    
    return 0;
}    
