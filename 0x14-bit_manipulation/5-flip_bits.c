/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/** Declaring variable **/
int counter;
int count_f;
unsigned long int bit;
unsigned long int xor;
/** initialising variables **/
count_f = 0;
counter = 63;
xor = n ^ m;

while (counter >= 0)
{

bit = xor >> counter;
if (bit & 1)
{
count_f++;
}
counter--;
}

return (count_f);


}
