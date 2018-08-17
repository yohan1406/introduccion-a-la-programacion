#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
const float g=9.81;
float H= 12;
int variable;
void funcion(){
static int cuenta=0; //static cuenta como asociar grupo como en este caso junta cuenta como global
cuenta=cuenta+1;
variable=11;
printf("variable=%d\n",variable);
printf("funcion():%f\ncuenta=|%-5d|\n",H,cuenta);     
}
int main(int argc, char *argv[])
{
  float area;
  float radio;
  funcion();
  dummy();
  printf("H=%f\nIngrese el valor del radio de una\
 circunferencia:"),H;
  H=12.1;
  printf("H=|%-10.6f|\n",H);
  funcion();
  variable=11;
  printf("variable=%d\n",variable);
  //scanf("%f",&radio);
  
  //printf("El \'area de la circunferencia es: %f\n\n",
    //      PI*radio*radio);
  
  system("PAUSE");	
  return 0;
}
