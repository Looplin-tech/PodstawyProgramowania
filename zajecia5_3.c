#include <stdio.h>

void nazwa(int a)
{
    a*=a;
    printf("%d\n", a);

}

int main()
{
    int a = 5;
    nazwa(a);
    printf("%d\n", a);
}
