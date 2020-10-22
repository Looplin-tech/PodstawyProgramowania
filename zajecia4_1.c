#include <stdio.h>

int main()
{
    char s1[] = "wlaz kotek na plotek";
    char s2[] = "wlaz kotek na plote";
    int  len1 = sizeof(s1)/sizeof(char);
    int len2 = sizeof(s2)/sizeof(char);

    if(len1==len2)
    {
        for(int i = 0; i<len1; ++i)
        {
            if(s1[i]!=s2[i])
            {
                printf("inne");

            }
            if(i == len1-1)
            {
            printf("takie same");
            break;
            }
            else continue;
        }
    }
    else printf("inne");

    return 0;
}
