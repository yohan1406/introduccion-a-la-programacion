#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>=b)? a:b
int absoluto(int x){
  return (x>0)? x:-x;
  
}

int main(int argc, char *argv[])
{
int A,B,R; A=-10; B=725; 
A=absoluto(A); 
B=absoluto(B);
  printf("%d\t%d\n",A,B);
  R= A;
  A=max(A,B); B= (A-R!=0)?R:B;
  printf("%d\t%d\n",A,B);
inicio:
   //system("pause");
   R=A%B; 
   A=B; printf("R=%d\tB=%d\n",R,B);
   B=(R==0)?B:R;
//aveces se ouede incluir codigo de esamblador in line __asm("mov $0x0,%eax");
   
  // goto inicio; 
     R=A%B; 
   A=B; printf("R=%d\tB=%d\n",R,B);
   B=(R==0)?B:R;  
   
salida:
       //R=A and_eq B;
       A=-1;int i;
       for(i=31;i>=1;i--){
       B=A>>i; 
       printf("%d",B&1);
       }
  system("PAUSE");	
  return 0;
}
