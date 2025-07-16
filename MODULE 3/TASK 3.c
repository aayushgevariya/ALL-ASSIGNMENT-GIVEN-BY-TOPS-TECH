#include<stdio.h>
#include<conio.h>

int main() 

{
    
    int marks[5];
    
    int i, total = 0;
    
    float percentage;

    printf("Enter marks for 5 subjects:\n");
    
    for (i = 0; i < 5; i++) 
    
    {
      
        printf("Subject %d: ", i + 1);
      
        scanf("%d", &marks[i]);
      
        total += marks[i];
  
    }

    percentage = (float)total / 5;

    printf("\nTotal Marks = %d\n", total);
  
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage > 75) 
    
    {
  
        printf("Result: Distinction\n");
  
    } 
    
    else if (percentage > 60 && percentage <= 75) 
    
    {
  
        printf("Result: A GREAD \n");
  
    } 
    
    else if (percentage > 50 && percentage <= 60) 
    
    {
  
        printf("Result: B GREAD \n");
  
    } 
    
    else if (percentage > 35 && percentage <= 50) 
    
    {
  
        printf("Result: Pass \n");
 
    } 
    
    else 
    
    {
  
        printf("Result: Fail\n");
    }

    return 0;
}
