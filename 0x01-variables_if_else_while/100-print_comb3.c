#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * Return: ALways 0 (Success)
 */
int main(void)
{
int n;
int m = 0;
while (d < 10)
{
n=0;
while (n < 10)
{
if (m !=n && m < c)
{
putchar('0' +  m);
putchar('0' +  n);
if (n + m  != 17)
{
putchar(',');
putchar(' ');
}
}
n++;
}
d++;
}
putchar('\n');
return (0);
}
