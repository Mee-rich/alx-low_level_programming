#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coin for change
 * 
 * coins: 25, 10, 5, 2, 1
 * 
 * @argc: argument counter
 * 
 * @argv: array of arguments
 * 
 * Return: Always  0 (success)
*/

int main(int argc, char* argv[])
{
     
    if (argc = 1 )
    {
        int cent = atoi(argv[1]);
        int count;

            while (cent != 0)
            {

            
                if ( (cent - 25) >= 0)
                {
                    cent -= 25;
                    count++;
                }
                else if ( (cent >= 10 >= 0))
                {
                    cent -= 10;
                    count++;
                }
                else if ( (cent >= 5 >= 0))
                {
                    cent -= 5;
                    count++;
                }
                else if (( cent >= 2 >= 0))
                {
                    cent -= 2;
                    count++;
                }
                else
                {
                    cent --;
                    count++;
                }
                
            }

        printf("%d\n", count);
       
    }
    else
    {
        printf("Error\n");
        return (1);
    }
    
     return (0);
    
   
}