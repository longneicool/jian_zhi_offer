#include "test3.h"
bool IncreArray::isExist(unsigned val)
{
    return check() && 
        isExistInSonArray(1, 1, val);
}

bool IncreArray::isExistInSonArray(unsigned startRows, unsigned startColumns, unsigned val)
{
   if(startRows > _rows || startColumns > _columns) 
       return false;


}


bool isExist(unsigned **array, unsigned rows, unsigned columns, unsigned val)
{
    if(!check(array, rows, columns))
        return false;

    unsigned rightTopCorner = array[0][columns-1];

    if(rightTopCorner == val)
        return true;

    if(rightTopCorner > val && columns == 1)
        return false;
    if(rightTopCorner < val && rows == 1)
        return false;

    if(rightTopCorner > val )
        return isExist(&&array[1][columns-1], rows-1, 1, val);

    return isExist(array, rows, columns-1, val);
} 

