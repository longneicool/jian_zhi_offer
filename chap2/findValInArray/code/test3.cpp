#include "test3.h"
#define NULL 0

bool find(int *array, int columns, int rows, int findVal)
{
    if(array == NULL
            ||columns == 0
            ||rows == 0)
        return false;

    int row = 0;
    int column = columns -1;
    while(row < rows && column >= 0)
    {
        int rightTopVal = array[row*columns + column];

        if(rightTopVal  == findVal)
            return true;
        else if(rightTopVal > findVal)
            --column;
        else
            ++row; 
    }

    return false;
}

