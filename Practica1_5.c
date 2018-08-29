#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float C, F, grados;
  printf("Introduzca su temperatura:\n");
  scanf("%f", &grados);
  F=(1.80*grados)+32;
  
  printf("El resultado de en grados Farengei es%f:\n", F);
  system("PAUSE");	
  return 0;
}
