/**
*swap_int - swapping of variable using pointer
*@a: stored the address of the first pointer variable
*@b: stored the address of the second pointer variable
*/
void swap_int(int *a, int *b)
{

int temp;

temp = *a;

*a = *b;
*b = temp;

}
