lude "holberton.h"



/**
 *
 *  * reset_to_98 - main function.
 *
 *   * @n: Pointer with the address value.
 *
 *    *
 *
 *     * Description: This function takes a pointer to an int as parameter
 *
 *      * and updates the value it points to to 98.
 *
 *       *
 *
 *        * Return: none.
 *
 *         */

int main(void)

{

    int n;

    n = 402;

    printf("n=%d\n", n);
    
    reset_to_98(n);
	   
	 printf("n=%d\n", n);

			        return (0);

}

void reset_to_98(int *p)

{

		*p = 98;

}
