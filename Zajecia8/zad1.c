#include <stdio.h>

void swap(int *wsk1 , int *wsk2)
{
    int tmp = *wsk1;
    *wsk1 = *wsk2;
    *wsk2 = tmp;
}

int main()
{
    int a=1,b=2;
    int *wska = &a;
    int *wskb = &b;
    swap(wska,wskb);

    return 0;
}
