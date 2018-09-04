#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     float V,R,I,v;
    
    printf("Introduzca el valor de volts\n");
    scanf("%f",&V);
    
    printf("Introduzca el valor de ampers\n");
    scanf("%f",&I);
    
    R=V/I;
    printf("El resultado de la operacion es:%fohms\n", R);
  
  system("PAUSE");	
  return 0;
}
