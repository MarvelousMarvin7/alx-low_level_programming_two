#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
 *
 * Return: NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, j, k;

	if (name == NULL || owner == NULL)
		return (NULL);
	/*create space for size of ndog pointer*/
	ndog = malloc(sizeof(ndog));
	if (ndog == NULL)
	{
		return (NULL);
		free(ndog);
	}
	/*assign j and k as name and owner*/
	for (j = 0; name[j]; j++)
		;
	for (k = 0; owner[k]; k++)
		;
	/*create space for the input of name and owner*/
	ndog->name = malloc(j + 1);
	ndog->owner = malloc(k + 1);

	if (ndog->name == 0 || ndog->owner == 0)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < j; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';

	ndog->age = age;

	for (i = 0; i < k; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';

	return (ndog);
}
