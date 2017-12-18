#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverseStr(char*);

int main()
{
    char *str1 = "This a boy a good abc!";

    char * secStr = reverseStr(str1);

    printf("\nat the main=%s\n",secStr);
    return 0;
}

char* reverseStr(char *strData)
{
    int strLenNo = strlen(strData);

    int c;
    int sigleStrLen = 0;

    char *tmp1 = (char *)malloc(strLenNo * sizeof (char));

    tmp1 += strLenNo;
    *tmp1 = '\0';

    while(strLenNo-- >= 0)
    {
        c = *strData++;
        sigleStrLen++;
        if(c == ' ' || strLenNo < 0)
        {
            --sigleStrLen;
            int tmpCount = 2;
            while(sigleStrLen != 0)
            {                
                *(--tmp1) = *(strData-tmpCount);
                ++tmpCount;
                --sigleStrLen;
            }
            if(c == ' ') *(--tmp1) = ' ';
        }
    }
    printf("\nafter convert=%s\n",tmp1);
    printf("\n");
    return tmp1;
}
