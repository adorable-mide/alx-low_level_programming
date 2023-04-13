/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area to be filled
 * @b: the byte value to be copied to the memory area
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;
while (a < n)
	{
	s[a] = b;
	a++;
	}
return (s);
}
