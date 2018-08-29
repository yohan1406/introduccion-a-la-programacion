#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float ft, in, yd, cm, m;
    printf("Ingrese su valor de ft:\n");
    scanf ("%f", &ft);
    
    in=ft*12;
    yd=ft/3;
    cm=(12*ft)*2.54;
    m=cm/100;
    
    printf("El resultado en pulgadas es:%f\n", in);
    printf("El resultado en yardas es:%f\n", yd);
    printf("El resultado en centimetro es:%f\n", cm);
    printf("El resultado en metros:%f\n", m);
  
  system("PAUSE");	
  return 0;
}
