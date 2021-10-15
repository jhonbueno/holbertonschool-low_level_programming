/**
 * _strcmp - print string
 * @s1: char
 * @s2: char
 *
 *
 * Return: int
 */

int *_strcmp(char *s1, char *s2)
{
	int i, j, k, l, r;

        i = 0;
        j = 0;
        k = 0;
        l = 0;
	r = 0;

        while(s1[i] != '\0')
		i++;
        while(s2[j] != '\0')
		j++;
        if (i >= j)
		k = i;
	else
		k = j;

        for (l = 0; l < k; l++)
        {
		if (s1[l] != s2[l])
		{
			r = s1[l] - s2[l];
			return (r);
		}
        }
	r = s1[l] - s2[l];
	return (r);
}
