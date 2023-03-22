#include "main.h"
#include <unistd.h>
/**
 * _putchar : writes the caracter c to stdout
 *
 * Return :On success 1.
 * error returns -1
 */
int _putchar(char c){
	return(write(1, &c, 1));
}
