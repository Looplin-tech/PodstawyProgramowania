#include <stdio.h>

int silnia (unsigned int liczba)
{

    if (liczba==1 || liczba ==0) return 1;
    return liczba*silnia(liczba-1);

}

int main()
{

    printf("%d", silnia(13));
}
