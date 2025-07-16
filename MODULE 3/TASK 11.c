#include<stdio.h>
#include<conio.h>

int main() 

{

    int arr[10], i, position;

    printf("Enter 10 elements in the array:\n");

    for(i = 0; i < 10; i++) 
    
    {

        printf("Element %d: ", i + 1);

        scanf("%d", &arr[i]);

    }

    printf("\nEnter the position (1 to 10) to find the element: ");

    scanf("%d", &position);

    if(position >= 1 && position <= 10) 
    
    {

        printf("Element at position %d is: %d\n", position, arr[position - 1]);

    } 
    
    else 
    
    {

        printf("Invalid position! Please enter a number between 1 and 10.\n");

    }

    return 0;
}
