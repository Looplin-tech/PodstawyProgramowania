#include <stdio.h>

int main()
{
    int a;
    int wynik = scanf("%d",&a);
    if(wynik==1)
    {
        printf("Poprawnie wczytano liczbe");
    }
    else
    {
        printf("Blad!");
    }

    return 0;
}
