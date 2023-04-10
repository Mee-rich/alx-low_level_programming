#include <stdio.h>
#include <stdlib.h>

/**
 * main - number of coins
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

        for(int i = 0; i < 5 ; i++){

            if (cent != 0)
	{
		switch(int i)
		{
			case (0):
				if (cent >= 25){
				cent -= 25;
				counter++;
				continue;
				}

			case (1):
				if (cent >= 10){
				cent -= 10;
				counter++;
				continue;
				}

			case (3):
				if (cent >=5){
				 cent -=5;
				 counter ++;
				 continue;
				}

			case (4):
				if (cent >= 2){
				 cent -= 2;
				 counter++;
				 continue;
				}

			default:
				 cent--;
				 counter++;
				 break;

		}
        }
        printf("%d\n", counter);
	return 0;
	
    else
    {
        printf("Error\n");
        return 1;
    }
    
   
}
