#include <stdio.h>
int main()
{
for (int i = 48; i < 64; i++)
{
if (i <= 57) 
{
putchar(i);
}
else 
{
putchar(i + 39);
}
}
putchar(10);
return (0);
}
