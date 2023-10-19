#include <stdio.h>
#include "lists.h"

/**
 * tortoise_message - Constructor function to print a message.
 */
void tortoise_message(void) __attribute__((constructor));

void tortoise_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
