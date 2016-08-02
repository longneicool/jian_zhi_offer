#pragma once

#include <cstring>

class CMyString
{
    public:
        CMyString(char* pData = NULL);
        CMyString(const CMyString& str);
        ~CMyString(void);
        CMyString& operator=(const CMyString& rhs);

        unsigned int length() const;
        char* c_str() const;
    private:
        char* m_pData;
};

