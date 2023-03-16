#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers.
*
* @min: lowest number.
* @max: Highest number.
*
* Return:
*   - the pointer to the newly created array
*   - NULL: if min > max, or malloc fails.
*/

int *array_range(int min, int max)
{
int *ar, i, diff;

if (min > max)
	return (NULL);
diff = max - min + 1;
ar = malloc(sizeof(int) * diff);
if (ar == NULL)
	return (ar);
for (i = 0; i < diff; i++)
{
ar[i] = min;
min++;
}
return (ar);
}
