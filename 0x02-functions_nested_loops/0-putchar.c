/*
 * file: 0-putchar.c
 * Name: stephen okpala
 *
 */

#include "main.h"

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0.
 */
int main(void)

{
	char w = "_putchar";

	while (w)
	{
		_putchar(w);
		w++;
	}

	return (0);	

}
