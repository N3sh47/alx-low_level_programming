#include "main.h"
#include <stdio.h>

/**
 * check code
 * always return 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
