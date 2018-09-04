#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y,a,b,res;
    
    /*
    x= 3;
    y= 2;
    a= 7;
    b= 4; */
    
    printf("introduzca el valor de x=");
    scanf("%d",&x);
    printf("introduzca el valor de y=");
    scanf("%d",&y);
    printf("introduzca el valor de a=");
    scanf("%d",&a);
    printf("introduzca el valor de b=");
    scanf("%d",&b);
    
    res=(x+y)*(x+y)*(a-b);
    
    printf ("El resultado de tu operacion es :%d \n",res);
    system("PAUSE");
    return EXIT_SUCCESS;
}
