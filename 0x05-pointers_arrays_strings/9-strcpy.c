#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy thie string to.
 * @src: the source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, ichar *src)
{
int index = 0;

while (src[index])
{
dest[index] = src[index];
index++;
}

return (dest);
}
