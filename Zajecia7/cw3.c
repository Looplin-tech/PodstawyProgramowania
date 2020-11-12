#include <stdio.h>
#include <string.h>

int main()
{
        const char *wyrazy[] = {"Ala","ma","kota","i","psa"};

        const int size = sizeof(wyrazy)/sizeof(wyrazy[0]);
        char zdanie[18];
        for(int i = 0; i < size;++i)
        {
            strcat(zdanie,wyrazy[i]);
            strcat(zdanie," ");
        }
        printf("%s",zdanie);

        return 0;
}
