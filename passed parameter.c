#include<stdio.h>
void calculateSquare(int number){
    int square = number * number;
    printf("square of %d is %d",number,square);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    calculateSquare(num);
    
    return 0;
}