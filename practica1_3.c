#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  
    const float pi=3.1416;
    float R,H,AREA,V,A,B,G,Z;
    printf("Introduzca el valor del radio:\n");
    scanf("%f", &R);
    printf("Introduzca el valor del altura:\n");
    scanf("%f", &H);
    
   
    A=R*R;
    B=H*H;
    Z=A+B;
    G=sqrt(Z);
    AREA=(pi*R*G)+(pi*A);
    V=((pi)*(A)*(H))/3;
    
    
    printf("El resultado del calculo del volumen es:%f\n", V);
    
    printf("El resultado del area es:%f\n", AREA);
    
   
  system("PAUSE");	
  return 0;
}
