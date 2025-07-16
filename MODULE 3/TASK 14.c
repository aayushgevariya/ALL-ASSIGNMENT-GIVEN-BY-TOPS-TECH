#include<stdio.h>
#include<conio.h>
int factorial(int n) 

{
    
    int fact = 1;
   
    for (int i = 1; i <= n; i++) 
    
    {
   
        fact *= i;
  
    }
   
    return fact;

}

int main() 

{
    
    int number;

    printf("Enter a number to find factorial: ");
   
    scanf("%d", &number);

    if (number < 0) 
    
    {
       
        printf("Factorial of negative numbers is not defined.\n");
  
    } 
    
    else 
  
    {
  
        printf("Factorial of %d is %d\n", number, factorial(number));
  
    }

    return 0;
}
