#include "SortAlg.h"

void insertSort(int *array, int size)
{
	for(int i = 1; i < size; i++)
	{
		int tmp = array[i];
		int j;
		for(j = i; j > 0 && array[j - 1] > tmp; j--)
			array[j] = array[j - 1];
		array[j] = tmp;
	}
}
