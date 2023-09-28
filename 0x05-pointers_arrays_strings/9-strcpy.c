#include "main.h"
/**
 * *_sttcpy - copies the string pointed to by src
 * dest: chat type string
 * src: chat type string
 * Description: copy the string pointed to by pointer `src` to
 * the batter pointed to by dest
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char  *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
