#pragma once
#include <iostream>

struct Array
{
    Array(int* ptr, unsigned actuallen, unsigned maxLen)
        : _ptr(ptr), _actuallen(actuallen), _maxLen(maxLen)
    {
    }

    Array(int* ptr, unsigned actuallen)
            : _ptr(ptr), _actuallen(actuallen), _maxLen(actuallen)
    {
    }

    int val(unsigned pos) const
    {
    	if(pos > _maxLen)
    		return 0xFFFF;

        return *(_ptr + pos - 1);
    }

    void set(unsigned pos, int val)
    {
    	if(pos > _maxLen)
    		return;

    	if(pos > _actuallen)
    		_actuallen = pos;

        *(_ptr + pos - 1) = val;
    }

    unsigned length() const
    {
        return _actuallen;
    }

    void print() const
    {
        std::cout << "length: " << _actuallen << std::endl;
        for(unsigned i = 1; i <= _actuallen; i++)
        {
            std::cout<< val(i) << " ";
        }
        std::cout << std::endl;
    }

private:
    int *_ptr;
    unsigned _actuallen;
    const unsigned _maxLen;
};

bool operator==(const Array& lhs, const Array& rhs);

