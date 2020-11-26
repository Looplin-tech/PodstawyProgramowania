#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    FILE *fp;
    char linia[100];

    if((fp = fopen("tekst.txt","r+"))==NULL)
    {
        perror("blad");
        return 1;
    }



    fclose(fp);

    return 0;

}
