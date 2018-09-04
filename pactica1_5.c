#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float grados, test, temperatura;
     char c,f,unidad;
  printf("El programa transformara la temperatura de grados celcius a farenheit:");
  printf("\nEscriba la temperatura:");
  scanf("%f",&temperatura);
  scanf("%c",&unidad);
grados= (unidad)=='f'?((temperatura-32)*5/9):(grados=(unidad)=='c'?((9*temperatura/5)+32):0);
test=(grados) !=0? (printf("\nGrados: %.2f\n",grados)):(printf("\nError, intente de nuevo\n"));
system("pause");
    return 0;
}
  
