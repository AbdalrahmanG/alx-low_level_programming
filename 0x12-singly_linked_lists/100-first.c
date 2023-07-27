#include <stdio.h>
#include"list.h"

/**
 * before_main - for printing statement in fxn
 */

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
