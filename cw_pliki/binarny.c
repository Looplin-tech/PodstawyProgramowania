#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(void)
{
    size_t fread ( void *p, size_t s, size_t n, FILE *stream ) ;
    size_t fwrite ( const void *p , size_t s , size_t n , FILE *stream ) ;

    FILE *fp;
    float  e = 2.734568;
    float cpe;

    if((fp = fopen("binarny.bin", "rb"))==NULL)
    {
        perror("blad");
    }

    //fwrite(&e,sizeof(float),1,fp);
    fread(&cpe,sizeof(float),1,fp);
    printf("%f",cpe);
    printf("\n%d",feof(fp));

    fclose(fp);
    printf("\n%d",feof(fp));
    printf("\n%d",feof(fp));


    return 0;
}
