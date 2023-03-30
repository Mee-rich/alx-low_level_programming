/**
*reverse_array - Reserve an array
*@a: stored a pointer variable for the array
*@n:stored the length of array
*/
void reverse_array(int *a, int n)
{
int counter;

int temp;

for (counter = 0; counter < n--; counter++)
{
temp = a[counter];
a[counter] = a[n];
a[n] = temp;
}

}
