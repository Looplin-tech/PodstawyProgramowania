#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;

    if((fp = open("binarny.bin","wb")==NULL)
    {
        perror(errno);
    }

    return 0;
}
