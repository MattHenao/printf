# _Printf
   Function that prints text and data type specifiers
### Funtions
    * func_c.c 
	- is the function print character if especifier is c
    * func_s.c
	- Is the function print text if especifier is s
## Use
    * You enter a text that will be printed by screen, to this text you can add specifiers 
    * to enter new data, data that can be stored with previousd or new
    * To add the new items that will be printed you have to write a specifier that is called by typing the character %
### Examples
    $ _printf ("text %specifier");
    $ _printf ("hello worl%c", 'd');
## Options
    * % start a format specification
    * % start a format specification
    * c Character When used with functions, specifies a single-byte character; when used with functions, specifies a wide character.printfwprintf
    * C Character When used with functions, specifies a wide character; when used with functions, specifies a single-byte character.printfwprintf
    * d Signed Decimal Integer Integer.
    * i Signed decimal integer integer.
    * or Unsigned Octal Integer Integer.
    * or Unsigned Decimal Integer Integer.
    * x Unsigned hexadecimal integer integer; uses ".abcdef
    * X Unsigned hexadecimal integer integer; uses "." Abcdef
## REQUIREMENTS 
    *  Authorized functions and macros
	* write (man 2 write)
	* malloc (man 3 malloc)
	* free (man 3 free)
	* va_start (man 3 va_start)
	* va_end (man 3 va_end)
	* va_copy (man 3 va_copy)
	* va_arg (man 3 va_arg)
## Compilation
    * All your files will be compiled on Ubuntu 14.04 LTS
    * Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic