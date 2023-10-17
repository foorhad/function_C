#include<stdio.h>
int mulNumbers(int num1, int num2); //function_Prototype_declare

int main()
{
    int result = mulNumbers(12,3);
    printf("Multiplicaion of two value: %d \n", result);

  return 0;
}
int mulNumbers(int num1, int num2){
    int Multiplication = num1 * num2;
    return Multiplication;
}
