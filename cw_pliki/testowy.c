#include <stdio.h>

int main()
{
    FILE *fp;
    fp = open("dane_osobowe","w");
    remove("dane_osobowe.txt");

    return 0;
}
