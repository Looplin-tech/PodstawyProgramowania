#include <stdio.h>

int main()
{
    char wyrazy[4][20] = {"Covid", "Korona", "Wirus", "Sars"};
    int wybor;
    scanf("%d", &wybor);
    if(-1 < wybor < 4)
    {
        printf("%s",wyrazy[wybor]);
    }

    return 0;
}
