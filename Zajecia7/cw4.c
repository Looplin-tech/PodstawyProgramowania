#include <stdio.h>

struct Struktura_ulamek
    {
        int liczebnik;
        int mianownik;
    };

struct Struktura_ulamek add(struct Struktura_ulamek ul1 ,struct Struktura_ulamek ul2)
{
    struct Struktura_ulamek ul3;
    if(ul1.mianownik == ul2.mianownik)
    {
        ul3.liczebnik = ul1.liczebnik + ul2.liczebnik;
        ul3.mianownik = ul1.mianownik;
    }
    else
    {
        ul1.liczebnik*=ul2.mianownik;
        ul2.liczebnik*=ul1.mianownik;
        ul3.liczebnik = ul1.liczebnik + ul2.liczebnik;
        ul3.mianownik = (ul1.mianownik)*(ul2.mianownik);
    }
    return ul3;
}

struct Struktura_ulamek multiply(struct Struktura_ulamek ul1 ,struct Struktura_ulamek ul2)
{
    struct Struktura_ulamek ul3;
    ul3.liczebnik = ul1.liczebnik*ul2.liczebnik;
    ul3.mianownik = ul1.mianownik*ul2.mianownik;

    return ul3;
}

int main()
{
    struct Struktura_ulamek ulamek1;
    struct Struktura_ulamek ulamek2;

    ulamek1.liczebnik = 1;
    ulamek1.mianownik = 3;
    ulamek2.liczebnik = 1;
    ulamek2.mianownik = 2;

    struct Struktura_ulamek ulamek3 = add(ulamek1,ulamek2);
    struct Struktura_ulamek ulamek4 = multiply(ulamek1,ulamek2);

    printf("%d/%d",ulamek3.liczebnik,ulamek3.mianownik);
    printf("\n%d/%d",ulamek4.liczebnik,ulamek4.mianownik);

    return 0;
}
