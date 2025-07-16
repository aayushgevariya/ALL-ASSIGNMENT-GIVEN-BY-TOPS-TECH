#include<stdio.h>
#include<conio.h>

void printFibonacci(int n) 

{

    int a = 0, b = 1, next;

    printf("Fibonacci Series: ");
    
    for(int i = 1; i <= n; i++) 
    
    {
    
        printf("%d ", a);
    
        next = a + b;
    
        a = b;
    
        b = next;

    }

}

int main() 

{

    int n;

    printf("Enter the number : ");

    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
