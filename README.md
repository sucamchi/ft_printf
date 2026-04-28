_Este proyecto ha sido creado como parte del currículo de 42 por scamlett._

## Descripción

ft_printf es una reimplementación simplificada de la función `printf` de la
biblioteca estándar de C. El objetivo principal es aprender el manejo de argumentos
variables y el formateo de salida. El proyecto soporta los formatos básicos, como caracteres, cadenas, enteros con signo y sin signo, hexadecimal y punteros.

## Instrucciones

- Compilación:

```sh
make
```

- Limpieza:

```sh
make fclean
```

- Ejemplo:

```c
#include "ft_printf.h"

int main(void)
{
		ft_printf("Numero: %d, Hex: %x\n", 42, 42);
		return (0);
}
```

## Recursos

- Documentacion de `printf` (man pages): `man 3 printf`
- Documentacion de `stdarg.h` (argumentos variables): `man 3 stdarg`
- The C Programming Language (Kernighan & Ritchie), capitulo de funciones
- cppreference: https://en.cppreference.com/w/c/variadic

Uso de IA:
- Se ha utilizado IA para revisar explicaciones del README y asegurar que las
	secciones cumplan los requisitos del enunciado. No se ha usado IA para
	escribir o modificar el codigo fuente.

## Algoritmo

La implementacion se basa en un recorrido lineal de la cadena de formato `fmt`. Se
procesa caracter a caracter y, cuando aparece un `%`, se interpreta el
especificador siguiente y se delega la impresion a una funcion especializada.
Este enfoque es rápido y sencillo.

Para convertir numeros a texto se usa un algoritmo clasico de division recursiva
en base 10 o base 16. El numero se descompone en digitos mediante modulo y
division, y despues se imprime en el orden correcto mediante recursión.

## Estructuras de datos

- Cadenas C (`char *`) para el formato y para buffers temporales.
- Un buffer local de tamano fijo para conversion hexadecimal.
- `va_list` de `stdarg.h` para gestionar argumentos variables.

La eleccion de este algoritmo es adecuada porque es simple, fiable y cumple los
requisitos de la evaluacion. Evita estructuras complejas y mantiene el control
total de la salida.