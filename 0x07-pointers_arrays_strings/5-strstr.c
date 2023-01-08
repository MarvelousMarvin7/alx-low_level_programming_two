#include "main.h"

/**
 * _strstr -  locates the first occurrence in a string
 * @haystack: pointer of characters
 * @needle: characters to match
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
        int i, w;

        for (i = 0; haystack[i] != '\0'; i++)
        {
                for (w = 0; needle[w] != '\0'; w++)
                {
                        if (haystack[i] == needle[w])
                        {
                                break;
                        }
                }
                if (needle[w] == 0)
		{
			break;
		}
        }
	return (needle + i);
        return (0);
}
