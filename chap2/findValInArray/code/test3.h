#pragma once

#define NULL 0

struct Array
{
    Array(unsigned *data, unsigned rows, unsigned columns)
        : _data(data), _rows(rows), _columns(columns)
    {
    }

    bool check()
    {
        return _data != NULL &&
            (_rows > 0 && _columns > 0);
    }
protected:
    unsigned *_data;
    unsigned _rows;
    unsigned _columns;
};

struct IncreArray : public Array
{
    IncreArray(unsigned *data, unsigned rows, unsigned columns)
        : Array(data, rows, columns)
    {
    }
    
    bool isExist(unsigned val);
private:
    bool isExistInSonArray(unsigned startRows, unsigned startColumns, unsigned val);
};

