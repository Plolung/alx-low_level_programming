#include <stdio.h>

/**
 * main - entry point
<<<<<<< HEAD
 * Return:0 (success)
 */
=======
 * Return:0 (successful)
*/
>>>>>>> 4a7e4370adb326149f25ad114d412b481b4a27a8

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
<<<<<<< HEAD
printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("size of long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
=======

printf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
>>>>>>> 4a7e4370adb326149f25ad114d412b481b4a27a8
return (0);
}
