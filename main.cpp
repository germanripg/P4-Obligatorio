#include "ListaString.h"
#include "Termino.h"
#include "Archivo.h"

#include <Stdio.h>


int main()
{

/*
///Pruebas para insertar ordenado
    ListaEnteros Le;
    CrearLista(Le);
    int i =0, e;
    while(i < 3)
    {
        scanf("%d",&e);
        InsOrdenado(Le,e);
        i++;
    }
    MostrarListaEnteros(Le);
    */

/*
///Pruebas Strinf alfanumerico
    String s;
    strcrear(s);
    printf("\nIngrese String: ");
    scan(s);
    printf("\nString cargado: ");
    print(s);

    if(esAlfanumerico(s))
        printf("\n El String es alfanumerico");
    else
        printf("\n El String NOOOO es alfanumerico");
*/

/*
///Pruebas dar extencion
    String s,extencion;
    strcrear(s);
    strcrear(extencion);
    printf("\nIngrese String: ");
    scan(s);
    printf("\nString cargado: ");
    print(s);
    retornaExtension(s,extencion);
    printf("\nExtencion: ");
    print(extencion);
*/

///Pruebas controlar que tenga solo un punto
    String s;
    strcrear(s);
    printf("\nIngrese String: ");
    scan(s);
    printf("\nString cargado: ");
    print(s);

    printf("\nEl String tiene %d puntos",cntPuntos(s));







    ///MODULO TERMINO:
    //Termino t1,t2,t3;

    //CrearTermino(t1,1,3);
    //CrearTermino(t2,2,2);

    /*
    printf("\n Termino1: ");
    MostrarTermino(t1);
    printf("\ncoef: %ld",DarCoefTermino(t1));
    printf("\ngrado: %d",DarGradoTermino(t1));
    */

    /*
    printf("\n Termino2: ");
    MostrarTermino(t2);
    printf("\ncoef: %ld",DarCoefTermino(t2));
    printf("\ngrado: %d",DarGradoTermino(t2));
    */

    //String nomArch;

    ///Bajar Termino 1
    //Crear Archivo
    //printf("\nNombre Archivo: ");
    //strcrear(nomArch);
    //fflush(stdin);
    //scan(nomArch);
    //FILE * f = fopen("termino2.txt","wb");

    ///Bajar Termino
    //BajarTermino(t1,f);
    //fclose(f);

    //BajarTermino(t2,f);

    ///Levantar termino
    /*
    f = fopen("termino2.txt","rb");
    printf("\n Levantar Termino: ");
    LevantarTermino(t3,f);
    MostrarTermino(t3);
    fclose(f);
    */

    ///MODULO ARCHIVO:
    /*if(ExisteArchivo("termino.txt"))
        printf("| Existe");
    else
        printf("| No Existe");

    if(ArchivoEsVacio("termino.txt"))
        printf("| Es vacio");
    else
        printf("| No es vacio");

    if(EnteroPertenecArchivo("termino.txt",1))
        printf("| Pertenece");
    else
        printf("| No Pertenece");
    */



}

