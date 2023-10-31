int dmax(int a[])
{
	int i; int max = a[0];
	for (i = 1; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}