#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char linia[100];

    if((fp = fopen("tekst.txt","w"))==NULL)
    {
        perror("blad");
        return 1;
    }

    fprintf(fp,"%s","do lwa kur.. do lwa");

    fclose(fp);

    return 0;

}
