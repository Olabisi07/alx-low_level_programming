int main(void)
{
	int i, sum;

	sum = 0;
	i = 3;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}

	putchar((sum / 1000) + '0');
	putchar((sum / 100 % 10) + '0');
	putchar((sum / 10 % 10) + '0');
	putchar((sum % 10) + '0');
	putchar('\n');

	return (0);
}

