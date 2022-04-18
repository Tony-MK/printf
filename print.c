#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	register int n_bytes = 0;
	register char *str;
	register char *ch = malloc(1);
	va_list args;
	
	va_start(args, format);
print:
	switch (*format)
	{
	case '\0':
		va_end(args);
		return (n_bytes);
	case '%':
		switch (*++format)
		{
		case '%':
			n_bytes += write(1, format, 1);
			break;

		case 'c':
			*ch = va_arg(args, int);
			n_bytes += write(1, ch, 1);
			break;

		case 's':
			str = va_arg(args, char *);
			while (*str)
				n_bytes += write(1, str++, 1);
			break;

		default:
			break;
		}
		break;
	
	default:
		write(1, format, 1);
		break;
	}

	format++;
	goto print;
}

