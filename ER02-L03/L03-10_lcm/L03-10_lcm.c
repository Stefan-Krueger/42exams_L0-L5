unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;
	if (a == 0 || b == 0)
		return (0);
	i = (a > b) ? a : b;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
			break;
		i++;
	}
	return (i);
}
