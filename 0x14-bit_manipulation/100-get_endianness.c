#include "main.h"

/**
 * gets_endianness - checks if a machines is littles or big endians
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
