/* Test1 为该类型添加赋值构造函数 */
#include "CMyString.h"

CMyString::CMyString(char* pData)
{
    if(pData == NULL)
    {
        m_pData = new char[1];
        *m_pData = '\0';

        return;
    }

    m_pData = new char[strlen(pData) + 1];
    strcpy(m_pData, pData);
}

CMyString::CMyString(const CMyString& str)
{
    m_pData = new char[str.length() + 1];
    
    strcpy(m_pData, str.c_str());
}

CMyString::~CMyString()
{
    if(m_pData != NULL)
        delete m_pData;
}

CMyString& CMyString::operator=(const CMyString& rhs)
{
    if(this == &rhs)
        return *this;

    delete [] m_pData;
    m_pData = new char[rhs.length() + 1];
    strcpy(m_pData, rhs.c_str());

    return *this;
}

unsigned int CMyString::length() const
{
    return strlen(m_pData);
}

char* CMyString::c_str() const
{
    return m_pData;
}

