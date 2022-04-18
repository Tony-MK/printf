#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, _len;

	_printf("Lets try to printf a simple sentence.\n");
	printf("Lets try to printf a simple sentence.\n");
    
    	_printf("Character:[%c]\n", 'H');
    	printf("Character:[%c]\n", 'H');

        _printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	
	_len = _printf("Percent:[%%]\n");
	len = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", _len);	
	printf("Len:[%d]\n",len);
    	return (0);
}
