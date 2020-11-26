#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    FILE *fp , *cp;
    const char str[22];

    if((fp = fopen("wizytówka.txt","r"))==NULL)
    {
        perror("blad");
        return 1;
    }
     if((cp = fopen("cp.txt","w"))==NULL)
    {
        perror("blad");
        return 1;
    }

        fgets(str,22,fp);
        fprintf(cp,"%s",str);

        fclose(fp);
        fclose(cp);
    return 0;
}
