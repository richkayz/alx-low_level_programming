#include<stdio.h>
/**
 * print 1-100 - Print 1-100
 * @n: number of times the printed
 * Description: Can use all functions
 */
 int main(void) {
    int n = 1;
 
   //n is less than or equal to 100
   while( n  <= 100) 
   {
   
            if (n % 3 == 0)
                    printf("Fizz");
                
                else if(n % 5 == 0)
                    printf("Buzz");
                
                else if(n % 3 == 0 && n % 5 == 0);
                    printf("FizzBuzz");
            
            else
                    //print the value of n
                printf("%d", n);

                if (n != 100)
                    printf(" ");
            
                //Increment the value of n
                i++;
                    
            }
    //print new line on comletion of loop
    _putchar("\n");
    
   return 0;
}
