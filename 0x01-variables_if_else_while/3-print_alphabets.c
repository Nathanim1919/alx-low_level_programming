#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	char b;

	for(a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar("\n");

	for(b = 'A'; b <= 'Z'; b++)
		putchar(b);
	return (0);
