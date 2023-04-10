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
	int counter;
        int cent = atoi(argv[1]);
        int coins [] = {25, 10, 5, 2, 1};

        for(i = 0; i < coins ; i++){

            while (cent != 0)
            {
                cent = cent % coins[i];
            }
          
        }
        printf("%d\n", i);
        return 0;
    }
    else
    {
        printf("Error\n");
        return (1);
    }
    
     return (0);
    
   
}
