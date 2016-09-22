#include  <cstring>

void replace(char *space)
{
    *space = '%';
    *(space + 1) = '2';
    *(space + 2) = '0';
}
char*  move(char *curPos, unsigned moveLen)
{
    *(curPos + moveLen) = *curPos;

    return curPos + moveLen;
}
void replaceSpace(char* str)
{
    if(NULL == str)
        return;

    unsigned strLen = strlen(str) + 1;
    unsigned spaceNum = 0;
    for(unsigned i = 0; i < strLen; i++)
    {
        if(*(str + i) == ' ')
            spaceNum ++;
    }

    for(int pos = strLen - 1; pos >= 0; pos--)
    {
        if(*(str + pos) != ' ')
        {
           move((str + pos), spaceNum*2); 
           continue;
        }

        replace(move(str + pos, --spaceNum*2));
    }
}

