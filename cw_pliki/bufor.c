#include <stdio.h>


int main()
{
int n;

do{
    printf("Podaj ile liczb: ");
    scanf("%d", &n);
}
while(getchar() != '\n');

return 0;
}
