#include <stdio.h>

void swap(int *wsk1 , int *wsk2)
{
    int tmp = *wsk1;
    *wsk1 = *wsk2;
    *wsk2 = tmp;
}

void rotate(int *wsk1 , int *wsk2, int *wsk3)
{
    int tmp1 = *wsk1;
    *wsk1 = *wsk2;
    *wsk2 = *wsk3;
    *wsk3 = tmp1;
}

int distance(int *wsk1 , int *wsk2)
{
    return wsk1 - wsk2;
}

int main()
{
    int a=1,b=2,c=3;
    int *wska = &a;
    int *wskb = &b;
    int *wskc = &c;
    double *tab;
    int size = 10;
    tab = malloc(size * sizeof(*tab));
    wska = &tab;
    wskb = &tab[10];
    printf("%d",distance(wska , wskb));
    swap(wska,wskb);
    rotate(wska,wskb,wskc);

    free(tab);

    return 0;
}
