#include "Array.h"

bool operator==(const Array& lhs, const Array& rhs)
{
    if(lhs.length() != rhs.length())
        return false;

    for(unsigned pos = 0; pos < lhs.length(); pos++)
    {
        if(lhs.val(pos) != rhs.val(pos))
            return false;
    }
    
    return true;
}
