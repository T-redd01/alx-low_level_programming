/**
 * reverse_array - reverse arr of nums
 * @a: address of arr
 * @n: num of elements
 */
void reverse_array(int *a, int n)
{
	int tmp[n];
	int i, j;

	for (i = 0; i < n; i++)
	{
		tmp[i] = a[i];
	}
	j = n - 1;

	for (i = 0; i < n; i++)
	{
		a[i] = tmp[j];
		j--;
	}
}

