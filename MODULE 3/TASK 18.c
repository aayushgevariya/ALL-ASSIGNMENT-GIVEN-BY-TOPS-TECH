#include<stdio.h>
#include<conio.h>
int main() 

{

    int num1, num2, sum;

    int *ptr1, *ptr2;

    printf("Enter first number: ");

    scanf("%d", &num1);

    printf("Enter second number: ");

    scanf("%d", &num2);

    ptr1 = &num1;

    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("Ans = %d + %d = %d \n", *ptr1, *ptr2, sum);

    return 0;
}
