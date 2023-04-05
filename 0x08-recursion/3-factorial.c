/**
 * factorial - returns the factorial of a given number.
 * @n: the number to compute the factorial of.
 *
 * Return: the factorial of n.
 *         If n is less than 0, return -1 to indicate an error.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
