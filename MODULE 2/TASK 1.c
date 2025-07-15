#include<stdio.h>
#include<conio.h>

int main() 

{

    int number;

    int square;

    int cube;


    printf("Enter an number: ");
    
    scanf("%d", &number);

    square = number * number;

    cube = number * number * number;

    printf("The square of %d is: %d \n", number, square);

    printf("The cube of %d is: %d \n", number, cube);

    return 0;
}    