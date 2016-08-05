#define NULL  0

bool check(unsigned **array, unsigned rows, unsigned columns)
{
    if(array == NULL)
        return false;

    if(rows == 0 || columns == 0)
        return false;

    return true;
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

