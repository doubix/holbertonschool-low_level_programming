#include <stdio.h>
/**
 * main - print fibonacci
 * fibonacci seq
 * Return: always 0
 */
int main(void)
{
unsigned long int u0 = 1, u1 = 2, u01, u02, u11, u12, r;
int ip = 0;

printf("%lu, ", u0);
printf("%lu, ", u1);
for (ip = 2; ip < 89; ip++)
{
    
        printf("%lu, ", u0 + u1);
        u1 = u0 + u1;
        u0 = u1 - u0;
}
    u01 = u0 / 1000000000;
    u02 = u0 % 1000000000;
    u11 = u1 / 1000000000;
    u12 = u1 % 1000000000;
    for (ip = 89; ip < 98; ip++)
    {
        printf("%lu%lu ,", u11, u12);
        u0 = u01;
        u1 = u02;
        u01 = u11;
        u02 = u12;
        u11 = u0 + u01 + ((u1 + u02) / 1000000000);
        u12 = (u1 + u02) % 1000000000;
    }
 printf("%lu%lu\n", u11, u12);
return (0);
}
