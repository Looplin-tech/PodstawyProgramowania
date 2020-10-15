#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c;
  scanf("%f %f %f",&a ,&b,&c);
  float delta = b*b-4*a*c;


    if(delta < 0)
    {
        printf("Brak rozwiazan");
    }
    else if(delta = 0)
    {
        float wynik = -b/2*a;
        printf("%f", wynik);
    }
    else
    {
        float wynik1 = (-b-sqrt(delta))/2*a;
        float wynik2 = (-b+sqrt(delta))/2*a;
        printf("%f %f", wynik1, wynik2);
    }


  return 0;
}
