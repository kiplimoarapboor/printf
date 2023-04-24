/**
 * _strcmp- compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: (-15) (0) (15) if s1 is, respectively
 * less than, equal to, or more than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff;

	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s1[i] != '\0'))
		i++;

	diff = s1[i] - s2[i];

	return (diff);
}
