#include <stdio.h>
int main()
{
for (int i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
