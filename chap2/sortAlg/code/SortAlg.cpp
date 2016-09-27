#include "SortAlg.h"
#include <iostream>

int g_count = 0;

void insertSort(int *array, int size, int step)
{
	for(int i = 0; i < step; i++)
	{
		for(int j = i + step; j < size; j += step)
		{
			int tmp = array[j];
			int k;
			for(k = j; k > 0 && array[k - step] > tmp; k -= step)
				array[k] = array[k - step];
			array[k] = tmp;
		}
	}
}

void shellSort(int *array, int size)
{
	g_count = 0;

	for(int step = size/2; step > 0; step = step /2)
	{
		insertSort(array, size, step);
	}
}
