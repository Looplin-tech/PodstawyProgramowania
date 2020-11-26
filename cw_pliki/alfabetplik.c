#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    if((fp = fopen("Alfabet.txt","w+"))==NULL)
    {
        perror("Blad");
    }

    for(int i = 'a';i<='z';++i)
    {
        fputc(i,fp);
    }
    fputc('\n',fp);
    for(int i = 'A';i<='Z';++i)
    {
        fputc(i,fp);
    }
    fclose(fp);

    return 0;
}
