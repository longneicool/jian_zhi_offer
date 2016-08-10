
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
        if(pos > _len)
            return;

        *(_ptr + pos - 1) = val;
    }

private:
    int *_ptr;
    const unsigned _len;
};

void merge(Array& a1, const Array &a2)
{
    const unsigned totalLen = a1.len + a2.len;

    unsigned pos_a1 = a1.len - 1;
    unsigned pos_a2 = a2.len - 1;
    for(int i = totalLen - 1; i >= 0; i--)
    {
        if(a1.val(pos_a1) > a1.val(pos_a2))
        {
            *(a1.ptr + i) = a1.val(pos_a1);
            pos_a1--;
            continue;
        }
        *(a1.ptr + i) = a2.val(pos_a2);
        pos_a2--;
    }
}

