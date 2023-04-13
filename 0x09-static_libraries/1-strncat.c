#include "main.h"
/**strncat - cancatenates two strings
 * @dest : holds the 1st string
 * @src : holds the 2nd value
 * @n : holds the 3rd value
 * Return dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int i, k;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        k = 0;
        while (k < n && src[k] != '\0')
        {
                dest[i] = src[k];
                i++;
                k++;
        }
        dest[i] = '\0';
        return (dest);
}
