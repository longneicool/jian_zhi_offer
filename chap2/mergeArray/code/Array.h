#pragma once
#include <iostream>

struct Array
{
    Array(int* ptr, unsigned len)
        : _ptr(ptr), _len(len)
    {
    }

    int val(unsigned pos) const
    {
        return *(_ptr + pos - 1);
    }

    void set(unsigned pos, int val)
    {
        *(_ptr + pos - 1) = val;
    }

    unsigned length() const
    {
        return _len;
    }

    void print() const
    {
        std::cout << "length: " << _len << std::endl;
        for(unsigned i = 1; i <= _len; i++)
        {
            std::cout<< val(i) << " ";
        }
        std::cout << std::endl;
    }

private:
    int *_ptr;
    const unsigned _len;
};

bool operator==(const Array& lhs, const Array& rhs);

