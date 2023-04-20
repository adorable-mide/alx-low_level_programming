/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 * square root
 */
int _sqrt_helper(int n, int start, int end);

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0, n));
}

int _sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;

if (start > end)
return (-1);
if (mid * mid == n)
return (mid);
else if (mid * mid > n)
return (_sqrt_helper(n, start, mid - 1));
else
return (_sqrt_helper(n, mid + 1, end));
}
