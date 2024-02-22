#include<stdio.h>
  
int main()  
{  
    int a, b,item;  
    char repeat;  
  
     do{
	 
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");  
    printf("Enter your choice"); 
    scanf("%d", &item);  
  
  
   printf("Enter 1st  number");//FOR PRINT USER NUM
   scanf("%d", &a);  
   printf("Enter 2nd  number"); //FOR PRINT USER NUM   
   scanf("%d", &b);  
  
  
    switch(item)  //for difrant difrant case
    {  
        case 1: printf("%d + %d = %d\n", a, b, (a+b));  
                break;  
  
        case 2: printf("%d - %d = %d\n", a, b, (a-b));  
                break;  
  
        case 3: printf("%d x %d = %d\n", a, b, (a*b));  
                break;  
  
        case 4: if( b != 0)  
                   printf("%d / %d = %d\n", a, b, (a/b));  
                else  
                    printf("Number can't be divided by 0\n");  
                break;  
  
        default: printf("You entered wrong choice\n");  
                 break;  
    }  
     printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');//for second choice

    return 0;
}
    
    
  
  


