#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float F,C,c,f,ff,cc,Letra;
  printf("Introduzca temperatura en grados:");
  scanf("%f", &cc);
  c=1; 
  f=0;
  F = cc*1.80+32;
  C=(cc-32)/1.80;
    Letra=(cc<0)?C:0;
  printf("Grados C equivalentes %4.2f F\n",F, Letra);
 Letra=(cc<1)?F:0;
  printf("Grados F equivalentes a %4.2f C\n",C);
 
  system("PAUSE");	
  return 0;
}
