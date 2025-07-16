#include<stdio.h>
#include<conio.h>

int main() 

{

    int arr[5];

    int i, j, temp;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) 
    
    {

        printf("Element %d: ", i + 1);

        scanf("%d", &arr[i]);

    }

    for(i = 0; i < 4; i++) 
    
    {

        for(j = 0; j < 4 - i; j++) 
        
        {

            if(arr[j] > arr[j + 1]) 
            
            {

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }

    printf("\nSorted array in ascending order:\n");

    for(i = 0; i < 5; i++) 
    
    {

        printf("%d ", arr[i]);

    }

    printf("\n");

    return 0;
}
