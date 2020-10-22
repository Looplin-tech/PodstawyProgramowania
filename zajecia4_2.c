#include <stdio.h>


int main()
{
    char znak;
    scanf("%c",&znak);

    char* tab[25] = {"Ala", "Barbara", "Cecylia", "Dominik", "Ela", "Figa", "Grzegorz", "Hania", "Iga","Joanna","Klaudia","Lucyna"};

    if(znak > 'Z') znak-='a'-'A';

    printf("%s", tab[znak-'A']);

    return 0;
}
