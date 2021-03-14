#include "holberton.h"

/**
 * _printf - wooooww
 * @format: the string to print
 * Return: number of printed characters
 */


/*gallego agrego el prototipo es similar al ejericio 0 del F man jeje*/

int _printf(const char *format, ...)
{

    /*inicializo las variables*/

	int (*ap);
	int n;
	int a;
	va_list l;
    int (va_list);

/*inicializo la funcion con va_start citando las variables*/
	va_start(l, format);
    /*como dice el ejercicio comparo si el espacio de memoria donde apunta el puntero es NULL*/
	if (format == NULL)
	{
        /*si es asi que me retorne -1 para saltear el null*/
		return (-1);
	}
    /*recorro ele spacio de memoria y verifico que la array format en el
     valor de la variable n no sea donde estael nulo si es 0 osea el indice de la array 
     y si no esat apuntando al nullo  que recorra */
	for (n = 0; format[n] != '\0'; n++)
	{
        /*luego compare si en wl lugar n de la array esta el caracter %*/
		if (format[n] == '%')
		{
            /*y asu vez mientras ese espacio de n al lado esta ' ' o la '\t'
             que siga recorriendo*/
			while (format[n + 1] == ' ' || format[n + 1] == '\t')
			{
				n++;
			}
            /*y bueno si ahi justo esta el caracter nullo que retorne  */
			if (format[n + 1] == '\0')
			{
				return(-1);
			}
		 
				if(ap != '\0')
				{
					a += ap(l);
					n++;
				}
				else
				{
					_putchar('%');
					a += 1;
				}
			}
		}
		else
		{
			_putchar(format[n]);
			a++;
		}
	}
	va_end(l);
	return (a);
}