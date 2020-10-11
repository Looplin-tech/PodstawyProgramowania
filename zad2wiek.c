#include <stdio.h>
#include <stdlib.h>

int main()
{
   char imie[10];
   int d,m ,r,dm,dr ,p;
   scanf("%s",imie);
   scanf("%d""%d""%d",&d, &m ,&r);
   scanf("%d %d",&dm,&dr);
   scanf("%d",&p);
   int wiek = 12*(dr-r);
   int mies = 0;
   int dwiek =0;

   if(dm>=m)
   {
   wiek+=(dm-m);
   }
   else
   {
   wiek-=(m-dm);
   }

   if(wiek%12==0)
   {
   dwiek=wiek/12;
   mies=0;
   }
   else
   {
   mies = (wiek%12);
   dwiek=wiek/12;
   }

   int pwiek = wiek+p;
   int pmies = 0;

   if(pwiek%12==0)
   {
   pwiek=pwiek/12;
   }
   else
   {
   pmies = (pwiek%12);
   pwiek=pwiek/12;
   }


   printf("%s ma %d lat i %d miesiecy\nza %d miesiecy %s bedzie mial %d lat i %d miesiecy",
   imie,dwiek , mies, p,imie,pwiek,pmies);
    return 0;
}
