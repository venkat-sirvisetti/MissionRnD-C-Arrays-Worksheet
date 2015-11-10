/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	int i,count=0,j=0;
	if (Arr == NULL || len < 0)
		return NULL;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (*(Arr + i) == *(Arr + j))
			{
				count++;
				Arr++;
				continue;
			}
			*(Arr + j - count) = *(Arr + j);
			
		}
		len = len - count;
		count = 0;
	}
	return NULL;
}