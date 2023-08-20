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
	int digit1 = sum / 1000;
	int digit2 = (sum / 100) % 10;
	int digit3 = (sum / 10) % 10;
	int digit4 = sum % 10;

	putchar((sum / 1000) + '0');
	putchar((sum / 100 % 10) + '0');
	putchar((sum / 10 % 10) + '0');
	putchar((sum % 10) + '0');
	putchar('\n');

	return (0);
}

