int _atoi(char *str_to)
{
	int sign_count = 1;
	unsigned int result = 0;
	int work = 0;

	for (; *str_to != '\0'; str_to++)
	{
		if (*str_to == '-')
		{
			sign_count *= -1;
		}
		if (*str_to >= '0' && *str_to <= '9')
		{
			work = 1;
			result = ((result * 10) + (*str_to - '0'));
		}
		if (*str_to < '0' || *str_to > '9')
		{
			if (work)
				break;
		}
	}
	if (result == 0)
		result = 0;

	return (result * sign_count);
}
