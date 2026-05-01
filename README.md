_Este proyecto ha sido creado como parte del currículo de 42 por scamlett._

## Descripción

ft_printf es una reimplementación simplificada de la función `printf` de C. El objetivo principal es aprender el manejo de argumentos variables y el formateo de salida. El proyecto soporta los formatos básicos, como caracteres, cadenas, enteros con signo y sin signo, hexadecimal y punteros.

## Instrucciones

- Compilación:

```sh
make
```

- Limpieza:

```sh
make fclean
```

- Pruebas:

1) Crea un archivo `main.c` con este contenido:

```c
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello %s %d %x\n", "world", 42, 255);
	printf("Hello %s %d %x\n", "world", 42, 255);
	ft_printf("Hello %c %i %X %%\n", 'n', 21, 255);
	printf("Hello %c %i %X %%\n", 'n', 21, 255);
	ft_printf("Hello %s\n", NULL);
	printf("Hello %s\n", NULL);
	return (0);
}
```

2) Compila y ejecuta el test:

```sh
cc *.c -o test && ./test
```

## Recursos

- Documentacion de `printf` (man pages): `man 3 printf`
- Documentacion de `stdarg.h` (argumentos variables): `man 3 stdarg`
- The C Programming Language (Kernighan & Ritchie).
- Funciones variádicas: https://en.cppreference.com/w/c/variadic

Uso de IA:
- Se ha utilizado IA para formatear el README y asegurar que las
	secciones cumplan los requisitos del enunciado. No se ha usado IA para
	escribir o modificar el codigo fuente.

## Algoritmo

La implementacion se basa en un recorrido lineal de la cadena de formato `fmt`. Se
procesa caracter a caracter y, cuando aparece un `%`, se interpreta el
especificador siguiente y se delega la impresion a una funcion especializada.
Este enfoque es rápido y sencillo.

Para convertir numeros a texto se usa un algoritmo de division sucesiva
en base 10 o base 16. El numero se descompone en digitos mediante modulo y
division, y despues se imprime en el orden correcto mediante recursión.

Este algoritmo es adecuado porque es simple, fiable y cumple los requisitos de la evaluacion, evita estructuras complejas y mantiene el control total de la salida.

## Estructuras de datos

- Cadenas C (`char *`) para el formato y para buffers temporales.
- Un buffer local de tamano fijo para conversion hexadecimal.
- `va_list` de `stdarg.h` para gestionar argumentos variables.

