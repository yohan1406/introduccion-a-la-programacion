#include <stdio.h>
#include <stdlib.h>
#define g 9.81
#define pi 3.1416
int main(int argc, char *argv[])
{    
     int d, dens, ph, p_hidrostatica, radio, test;
    float v, h;
    char fluid;
    
printf ("\nCalcula el volumen del liquido\
dependiendo si es agua o disel\n");
printf ("\nIndique el tipo de fluido del que se trata: \n\na) Agua\nb) Disel\n");
scanf("\n%c", &fluid);
printf ("\nIntroduzca el diametro del recipiente:");
scanf("\n%d", &d);
printf ("\nIntroduzca la presion hidrostatica medida:");
scanf("\n%d", &ph);

dens= (fluid=='a') ? 1000:(dens= (fluid=='b') ? 820: (test=0));

p_hidrostatica= ph*10;
h=p_hidrostatica/(dens*g);
radio= d/2;
v= pi*radio*radio*h;
(test!=0) ? (printf("\nDensidad: %d kg/m^3\n\naltura: %f m\n\nVolumen: %f m^3\n\n",dens,v,h)):(printf("\nError la letra ingresada no es correcta, debes ingresar 'a' o 'b'\n"));
  
  system("PAUSE");	
  return 0;
}
