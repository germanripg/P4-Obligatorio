#include "Boolean.h"


void cargarBool(boolean &b)
{
    int x;
    printf("Ingrese 0-FALSE, 1-TRUE");
    scanf("%d",&x);

    if(x == 1)
        b = TRUE;
    else
        b = FALSE;

}

void mostrarBool(boolean b)
{
    if(b == FALSE)
    {
        printf("FALSE");
    }
    else
    {
        printf("TRUE");
    }
}

