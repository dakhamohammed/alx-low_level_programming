#include <stdio.h>

/**
 * before_main - function execute before main function get executed.
 *
 * Return: void, no return.
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

