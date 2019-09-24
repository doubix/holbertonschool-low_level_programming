#include <stdio.h>
/**
 * main - entry point
 * multiples sum
 * Return: Always 0 (Success)
 */
int main(void)
{
long int u0 = 1, u1 = 2, ux;
int ip = 0;
for (ip = 1; ip <= 50; ip++)
{
if (ip != 50)
{
printf("%ld, ", u0 + u1);
}
else
{
printf("%ld", u0 + u1);
}

u1 = u0 + u1;
u0 = u1 - u0;

}
printf("\n");
return (0);
}
