#include "Array.h"

void merge(Array& a1, const Array &a2)
{
    const unsigned totalLen = a1.length() + a2.length();

    unsigned pos_a1 = a1.length();
    unsigned pos_a2 = a2.length();
    for(int i = totalLen; i > 0; i--)
    {
        if(pos_a1 == 0)
        {
            a1.set(i, a2.val(pos_a2));
            pos_a2--;
            continue;
        }

        if(pos_a2 == 0)
        {
            a1.set(i, a1.val(pos_a1));
            pos_a1--;
            continue;
        }

        if(a1.val(pos_a1) > a2.val(pos_a2))
        {
            a1.set(i, a1.val(pos_a1));
            pos_a1--;
            continue;
        }

        a1.set(i, a2.val(pos_a2));
        pos_a2--;
    }
}

