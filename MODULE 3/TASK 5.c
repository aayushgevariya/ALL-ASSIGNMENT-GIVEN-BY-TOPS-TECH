#include<stdio.h>
#include<conio.h>

int main() 

{
   
    int limit, a = 0, b = 1, next;

    printf("Enter Fibonacci numbers: ");
  
    scanf("%d", &limit);

    printf("Fibonacci Series up to %d:\n", limit);

    while (a <= limit) 
    
    {
       
        printf("%d ", a);
      
        next = a + b;
     
        a = b;
     
        b = next;
 
    }

    printf("\n");
  
    return 0;
}
