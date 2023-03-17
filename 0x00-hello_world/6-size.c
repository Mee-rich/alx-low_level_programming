#include <stdio.h>
/**
 *
 *main-Entry point
 *
 * Return: Always return 0 (success
 *
*/
	

	 int main (void)
		{
			char acharacter;
			int ainteger;
			long along;
			long long alonglong;
			float afloat;

	printf("size of char:%lu byte(s)\n", sizeof(acharacter));

	printf ("size of integer:%lu byte(s)\n", sizeof (ainteger))

  	printf("Size of a long int: %lu byte(s)\n", sizeof(along));

	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));

	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));


	return (0);
		
		}
