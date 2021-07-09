#include <stdio.h>

int main()
{
    int number_1 ;
    printf("Please enter the range : \n");
    scanf("%d", &number_1);
    for( int num = 1; num <= number_1 ; num++)
    {
        
        if (num%3 == 0 && num%5 == 0)
        {
            printf("FizzBuzz \n");
            
        }
        
        else if (num%3 == 0)
        {
            printf("Fizz \n");
            
        }
        else if (num%5 == 0)
        {
            printf("Buzz \n");
            
        }
        else
        {
            printf("%d \n", num);
            
        }
        
    }

    return 0;
    
}
