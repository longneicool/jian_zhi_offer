#include "SortAlg.h"
#include <iostream>

namespace
{
	void swap(int &lhs, int &rhs)
	{
		int tmp = lhs;
		lhs = rhs;
		rhs = tmp;
	}

	void sort3(int &start, int &middle, int &end)
	{
		if(start > end)
			swap(start, end);

		if(middle > end)
		{
			swap(middle, end);
			return;
		}

		if(middle < start)
		{
			swap(middle, start);
		}
	}
}
int g_count = 0;

void insertSort(int *array, int size, int step)
{
	for(int i = 0; i < step; i++)
	{
		for(int j = i + step; j < size; j += step)
		{
			int tmp = array[j];
			int k;
			for(k = j; k - step >= 0 && array[k - step] > tmp; k -= step)
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

void quickSort(int *array, int size)
{
	if(size < 4)
	{
		insertSort(array, size);
		return;
	}

	sort3(array[0], array[size/2], array[size - 1]);
	int priot = array[size/2];
	swap(array[size/2], array[size - 2]);

	for(int i = 0; i< size; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;

	int i = 0;
	int j = size - 3;
	while(1)
	{
		while(array[i] < priot) i++;
		while(array[j] > priot) j--;
		if(i >= j)
			break;
		swap(array[i], array[j]);
	}

	swap(array[i], priot);
	quickSort(array, i);
	quickSort(array + i + 1, size - i - 1);
}
