#include <stdio.h>
#include <stdlib.h>

int** tablica2d(int i , int j)
{
     int **tablica = malloc(i*sizeof(*tablica));

    for(int k = 0;k<i;++k)
    {
        tablica[k] = malloc(j * sizeof(**tablica));
    }
    return tablica;
}

void zwolnienie(int** tablica,int j)
{
     for (int k = 0; k<j; ++k)
    {
        free(tablica[k]);
    }
    free(tablica);

}

int main()
{
    int i = 3, j = 3;
    int** tablica = tablica2d(i,j);

    for(int k = 0;k<i;++k)
    {
        for(int l=0;l<j;++l)
        {
        tablica[k][l]= l+k;
        }
    }
    zwolnienie(tablica,j);


    return 0;
}
