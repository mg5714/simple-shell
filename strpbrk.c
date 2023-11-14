#include "shell.h"

/**
 * _strpbrk - locates the first occurrence in the string str of any of the bytes in the string accept.
 * @str: string
 * @accept: string
 * Return: pointer to the first occurence
 */
char *_strpbrk(const char* str, const char* accept)
{
    const char* s;
    const char* a;

    for (s = str; *s != '\0'; s++) {
        for (a = accept; *a != '\0'; a++) {
            if (*s == *a) {
                return (char*)s;
            }
        }
    }

    return NULL;
}


