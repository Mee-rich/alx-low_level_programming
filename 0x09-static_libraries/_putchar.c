#include <unistd.h>
/**
* _putchar - A function that print content a single character to the scree
*
* Return: return a result of the function
*
* @character:a char variable that serves as a parameter to the function
*/
int _putchar(char character)
{


return (write(1, &character, 1));
}
