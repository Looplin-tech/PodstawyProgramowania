#include <stdio.h>

int main()
{
    int tab[5] = {1 ,2 ,3 ,4 ,5};
    int len = sizeof(tab)/sizeof(int);
    for(int i=0;i<len;++i)
    {
      tab[i] = 0;
    }
    for(int i=0;i<len;++i)
    {
      printf("%d ",tab[i]);
    }
}
