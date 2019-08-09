/**
  *set_bit - Sets the value of a bit to 1 at a given index
  *@n: Number
  *@index: Index
  *Return: 1 or 0 if error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
