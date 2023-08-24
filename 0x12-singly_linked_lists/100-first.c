#include "lists.h"

void __attribute__((constructor)) primary(void);

/**
 * primary - printing before the main function
 * Return: void
 */

void primary(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon ");
	printf("my back!\n");
}
