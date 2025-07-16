#include<stdio.h>
#include<math.h>

int main() 

{
   
    int choice;
    
    float area, base, height, length, breadth, radius;

    while (1) 
    
    {

        printf("\n Area Calculator Menu \n");
       
        printf("1. Area of Triangle\n");
       
        printf("2. Area of Rectangle\n");
       
        printf("3. Area of Circle\n");
       
        printf("Enter your choice (1-3): ");
       
        scanf("%d", &choice);

        switch (choice) 
        
        {
        
            case 1:

                printf("Enter base of the triangle: ");
             
                scanf("%f", &base);
             
                printf("Enter height of the triangle: ");
             
                scanf("%f", &height);
             
                area = 0.5 * base * height;
             
                printf("Area of Triangle = %.2f\n", area);
             
                break;

            case 2:
            
                printf("Enter length of the rectangle: ");
              
                scanf("%f", &length);
              
                printf("Enter breadth of the rectangle: ");
              
                scanf("%f", &breadth);
              
                area = length * breadth;
              
                printf("Area of Rectangle = %.2f\n", area);
              
                break;

            case 3:
             
                printf("Enter radius of the circle: ");
               
                scanf("%f", &radius);
               
                area = M_PI * radius * radius;
               
                printf("Area of Circle = %.2f\n", area);
               
                break;

        }
   
    }

    return 0;
}
