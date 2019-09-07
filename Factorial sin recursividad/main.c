#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor,i,res=1;

    printf("Ingrese nro: ");
    scanf("%d" ,&valor);

    i=valor;

    /*for (i=valor;i>0;i--)
    {
        res=res*i;
    }*/

    /*while(i>0)
    {
        res=res*i;

        i--;
    }
    */

    for(i=1;i<=valor;i++)
    {
        res=res*i;
    }


    printf("\nEl factorial de %d  es :%d" ,valor,res);

    return 0;
}
