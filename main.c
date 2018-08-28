#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
  const float in=2.54, yd=3, m=100, cm=m/100;
 
  printf ("ingresa el numero de pies para realizar las conversiones");
  scanf ("%f", &ft);
 
  ft=12*in;
  in=2.54*cm;
  m=100*cm;
  cm=m/100;
  printf ("el valor de %f ft es %f in\n",ft,in);
  printf ("el valor de yd es %f\n",yd);
  printf ("el valor de in es %f\n",in);
  printf ("el valor de m es %f\n",m);
  printf ("el valor de cm es %f\n",cm);
  system("PAUSE");	
  return 0;
}
