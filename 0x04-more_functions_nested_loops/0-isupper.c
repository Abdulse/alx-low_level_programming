#include "holberton.h"
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

/**
 * _isupper - check if character is upper case
 * @c : integer value
 * Return: 1 if c is upper case 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
