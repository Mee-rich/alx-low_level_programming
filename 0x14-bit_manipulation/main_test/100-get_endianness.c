/**
* get_endianness - checks if a machine is little or big endian
* Return: 0 for big endian or 1 for little endian
*Endianness refers to the way in which a computer
* system stores the bytes of a multi-byte value in memory
*/

int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;

if (*c)
{
return (1);
}
else
{
return (0);
}
}
