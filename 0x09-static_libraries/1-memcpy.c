/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;
for (num = 0; num < n; num++)
{
dest[num] = src[num];
}
return (dest);
}
