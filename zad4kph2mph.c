#include <stdio.h>
#include <math.h>

const double i = 0.6214;

double kph2mph(int v_km)
{
double v_m = v_km*i;
return v_m;
}

int main()
{
  char dane1[13] , dane2[13];
  int v_km;

  printf("Prosze wpisac typ drogi (MAX dwa slowa):\n");

  scanf("%s\n %s",dane1 , dane2);
  scanf("%d", &v_km);

  printf("---------------\n|%s|\n|%s|\n--------------",dane1,dane2);


  return 0;
}
