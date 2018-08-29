#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int prueba, seg_tot, hr, min, seg;
  printf("Ingrese la cantidad de segundos:\n");
  scanf("%d", &seg_tot);
  min=(seg_tot/60)%60;
  prueba=(seg_tot/60)<60?1:0;
  hr=prueba?0:(seg_tot/60)/60;
  seg=seg_tot%60;
  
  printf("El resultado en horas es:%d\n", hr);
  printf("El resultado en minutos es:%d\n", min); 
  printf("El resultado en segundos es:%d\n", seg);
  system("PAUSE");	
  return 0;
}
