#include "lists.h"

/**
* before_main: function prints a text before main function is executed
* Return: Void
*/
void before_main(void) __attribute__ ((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
