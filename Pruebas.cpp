#include "Pruebas.h"

void pruebaStringAlfanumerico()
{/*
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
        printf("\n El String NOOOO es alfanumerico");*/
}

void pruebaDarExtencion()
{/*
     ///Pruebas dar extencion
    String s,extencion,nombre;
    strcrear(s);
    strcrear(extencion);
    strcrear(nombre);
    printf("\nIngrese String: ");
    scan(s);
    printf("\nString cargado: ");
    print(s);
    retornaExtensionNombre(s,nombre,extencion);
    printf("\nNombre: ");
    print(nombre);
    printf("\nExtencion: ");
    print(extencion);*/
}

void pruebaControlPunto()
{/*
     ///Pruebas controlar que tenga solo un punto
    String s;
    strcrear(s);
    printf("\nIngrese String: ");
    scan(s);
    printf("\nString cargado: ");
    print(s);

    printf("\nEl String tiene %d puntos",cntPuntos(s));*/
}

void pruebaListaStrings()
{/*
    ListaString Ls;
    CrearListaString(Ls);
    String s;
    strcrear(s);
    int pos;
    long int intString;

    printf("\nIngrese String: ");
    scan(s);
    printf("\nString cargado: ");
    print(s);

    intString = convertirStringAEntero(s);

    printf("\nString convertido es....: %li",intString);

    partirString(s,Ls);
    printf("\nLargo de lista es: %d ", LargoListaString(Ls));
    printf("\n");
   /// MostrarListaString(Ls);

    if(CoeficientesEnteros(Ls))
        printf("\nTodos numericos");
    else
        printf("\nNO son Todos numericos");


    printf("\nPosicion:");
    scanf("%d",&pos);
    obtenerString(Ls,pos,s);
    printf("\nEl String el la posicion: %d es: ",pos);
    print(s);

    destruirListaString(Ls);*/
}

void pruebasSumarPolinomios()
{/*
    ListaTerminos LtA,LtB,ListaResultado;
    listaTerminosCrear(LtA);
    listaTerminosCrear(LtB);
    listaTerminosCrear(ListaResultado);

    Termino tA1,tA2,tA3,tB1,tB2,tB3;
    tA1.coef  = 3;
    tA1.grado = 6;
    listaTerminosInsertarOrdenado(LtA,tA1);

    tA2.coef  = 2;
    tA2.grado = 2;
    listaTerminosInsertarOrdenado(LtA,tA2);

    tA2.coef  = -4;
    tA2.grado = 1;
    listaTerminosInsertarOrdenado(LtA,tA2);

    tA3.coef  = 3;
    tA3.grado = 0;
    listaTerminosInsertarOrdenado(LtA,tA3);

    tB1.coef  = 3;
    tB1.grado = 2;
    listaTerminosInsertarOrdenado(LtB,tB1);

    tB2.coef  = 1;
    tB2.grado = 1;
    listaTerminosInsertarOrdenado(LtB,tB2);

    tB3.coef  = 1;
    tB3.grado = 0;
    listaTerminosInsertarOrdenado(LtB,tB3);


    sumarPolinomios(LtA,LtB,ListaResultado);
    listaTerminosMostrar(ListaResultado);*/
}

void pruebasEvaluarPolinomio()
{/*
    ListaTerminos lista;
    listaTerminosCrear(lista);
    int valor;

    Termino tA1,tA2,tA3,tB1,tB2,tB3;

    tA1.coef  = 3;
    tA1.grado = 6;
    listaTerminosInsertarOrdenado(lista,tA1);

    tA2.coef  = 2;
    tA2.grado = 2;
    listaTerminosInsertarOrdenado(lista,tA2);

    tA2.coef  = -4;
    tA2.grado = 1;
    listaTerminosInsertarOrdenado(lista,tA2);

    tA3.coef  = 3;
    tA3.grado = 0;
    listaTerminosInsertarOrdenado(lista,tA3);

    printf("Valor a evaluar: ");
    scanf("%d",&valor);
    printf("\nResultado de la evaluacion:  %li",evaluarPolinomio(lista,valor));*/

}

void pruebasEsRaiz()
{/*
    ListaTerminos lista;
    listaTerminosCrear(lista);
    int valor;

    Termino tA1,tA2,tA3,tB1,tB2,tB3;

    tA1.coef  = 1;
    tA1.grado = 2;
    listaTerminosInsertarOrdenado(lista,tA1);

    tA2.coef  = -1;
    tA2.grado = 0;
    listaTerminosInsertarOrdenado(lista,tA2);

    printf("Valor a evaluar: ");
    scanf("%d",&valor);

    if(esRaiz(lista,valor))
        printf("\nEs Raiz");
    else
        printf("\nNOO Es Raiz");
*/
}

void pruebasMultiplicarPolinomio()
{/*
    ListaTerminos LtA,LtB,ListaResultado;
    listaTerminosCrear(LtA);
    listaTerminosCrear(LtB);
    listaTerminosCrear(ListaResultado);

    Termino tA1,tA2,tA3,tB1,tB2,tB3;
    tA1.coef  = 1;
    tA1.grado = 2;
    listaTerminosInsertarOrdenado(LtA,tA1);

    tA2.coef  = 1;
    tA2.grado = 0;
    listaTerminosInsertarOrdenado(LtA,tA2);

    tA3.coef  = 16;
    tA3.grado = 0;
    listaTerminosInsertarOrdenado(LtA,tA3);


    tB1.coef  = 1;
    tB1.grado = 2;
    listaTerminosInsertarOrdenado(LtB,tB1);

    tB2.coef  = 1;
    tB2.grado = 0;
    listaTerminosInsertarOrdenado(LtB,tB2);

    tB3.coef  = 2;
    tB3.grado = 0;
    listaTerminosInsertarOrdenado(LtB,tB3);


    multiplicarPolinomios(LtA,LtB,ListaResultado);
    listaTerminosMostrar(ListaResultado);
    */
}

void pruebasReducirPolinomio()
{/*
    ListaTerminos LtA,ListaResultado;
    listaTerminosCrear(LtA);
    listaTerminosCrear(ListaResultado);

    Termino tA1,tA2,tA3,tA4,tA5,tA6;
    tA1.coef  = 32;
    tA1.grado = 4;
    listaTerminosInsertarOrdenado(LtA,tA1);

    tA2.coef  = 11;
    tA2.grado = 1;
    listaTerminosInsertarOrdenado(LtA,tA2);

    tA3.coef  = 8;
    tA3.grado = 0;
    listaTerminosInsertarOrdenado(LtA,tA3);

    tA4.coef  = -12;
    tA4.grado = 4;
    listaTerminosInsertarOrdenado(LtA,tA4);

    tA5.coef  = 1;
    tA5.grado = 1;
    listaTerminosInsertarOrdenado(LtA,tA5);

    tA6.coef  = 8;
    tA6.grado = 0;
    listaTerminosInsertarOrdenado(LtA,tA6);

    reduceListaTerminos(LtA,ListaResultado);
    listaTerminosMostrar(ListaResultado);*/
}

void pruebasControlTerminoIndependienteNoNulo()
{/*
    ListaTerminos LtA;
    listaTerminosCrear(LtA);

    Termino tA1,tA2,tA3,tA4,tA5,tA6;
    tA1.coef  = 32;
    tA1.grado = 4;
    listaTerminosInsertarOrdenado(LtA,tA1);

    tA2.coef  = 11;
    tA2.grado = 1;
    listaTerminosInsertarOrdenado(LtA,tA2);

    tA3.coef  = 0;
    tA3.grado = 0;
    listaTerminosInsertarOrdenado(LtA,tA3);

    controlTerminoIndependienteNoNulo(LtA);
    listaTerminosMostrar(LtA);*/
}

void pruebasModuloTermino()
{/*
    ///MODULO TERMINO:
    //Termino t1,t2,t3;

    //CrearTermino(t1,1,3);
    //CrearTermino(t2,2,2);


    printf("\n Termino1: ");
    MostrarTermino(t1);
    printf("\ncoef: %ld",DarCoefTermino(t1));
    printf("\ngrado: %d",DarGradoTermino(t1));



    printf("\n Termino2: ");
    MostrarTermino(t2);
    printf("\ncoef: %ld",DarCoefTermino(t2));
    printf("\ngrado: %d",DarGradoTermino(t2));


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

    f = fopen("termino2.txt","rb");
    printf("\n Levantar Termino: ");
    LevantarTermino(t3,f);
    MostrarTermino(t3);
    fclose(f);
    */
}

void pruebasModuloArchivo()
{
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

void pruebasModuloPolinomio()
{/*
    Polinomio p;
    String lineaComando;
    ListaString listaS;
    ListaTerminos lt;

    strcrear(lineaComando);

    strcrear(lineaComando);
    printf("\ningrese toda la linea del comando con sus parametros: ");
    scan(lineaComando);


    CrearListaString(listaS);

    ///Partir el String en una lista de strings
    partirString(lineaComando,listaS);
    listaTerminosCrear(p.listaTerminos);

    ///SI el 1� String es �crear�
    if(streq(listaS->info,"crear"))
    {
        ///SI luego del 1� String No hay Por lo menos 2 strings m�s(3)(osea si hay 2 o menos)
        if(LargoListaString(listaS) <= 2)
        {
            printf("\nError: cantidad de par�metros incorrecta, debe indicar nombre de Polinomio y Por lo menos un coeficiente");
        }
        ///SINO
        else
        {
            ///avanzar en listaS a 2do string
            listaS = listaS->Sig;

            ///SI el 2� String no representa s�lo caracteres alfanum�ricos
            if(!esAlfanumerico(listaS->info))
            {
                printf("\nError: el nombre de Polinomio debe ser alfanum�rico");
            }
            else///SINO
            {
                ///ya que nombre es alfanumerico, copio nombre de polinomio en variable aux para tenerlo por separado
                strcrear(p.nombre);
                strcop(p.nombre,listaS->info);


                //if(ABBPolinomioExiste(a,listaS))
                //{
                //    printf("Error: Ya existe un polinomio con el nombre ingresado");
                //}
                //else
                //{
                    ///avanzar en listaS a 3er string
                    listaS = listaS->Sig;

                    ///SI a partir del 3� String no son todos num�ricos (*1C*)
                    int largo = LargoListaString(listaS) + 2;///mas 2 de los dos que me movi

                    ///TODO: revisar aca xq esta funcion empieza en 2 y yo ya estoy parado en 2, entonces aca empezaria en 4 ??
                    if(!CoeficientesEnteros(listaS))
                    {
                        printf("\nError: los coeficientes deben ser num�ricos.");
                    }
                    else
                    {
                        //printf("\nSon coef numericos");
               ///         crearPolinomio(p,listaS);
                    }
                //}
            }
        }
    }

    printf("\n Polinomio: ");


    if(p.listaTerminos == NULL)
    {
        p.listaTerminos->info.coef = 0;
        p.listaTerminos->info.grado = 0;
        printf("Polinomio es nulo");
    }

    mostrarPolinomio(p);

    printf("\nPruebaDarLista");
    darListaTerminosPolinomio(p,lt);
    listaTerminosMostrar(lt);*/

}

void PruebasABBPolinomio()
{/*
    ABBPolinomio a;
    ABBPolinomioCrear(a);

    Polinomio p;

    String lineaComando;
    ListaString listaS;

    CrearListaString(listaS);

    strcrear(lineaComando);

    strcrear(lineaComando);
    printf("\ningrese toda la linea del comando con sus parametros: ");
    scan(lineaComando);


    ///Partir el String en una lista de strings
    partirString(lineaComando,listaS);
    listaTerminosCrear(p.listaTerminos);


    ///crearPolinomio(p,listaS);

    ABBPolinomioInsertar(a,p);

    if(ABBPolinomioExiste(a,"pepe"))
        printf("existe");
    else
        printf("no existe");



    if(ABBPolinomioEsVacio(a))
        printf("es vacio");
    else
        printf("No es vacio");

    printf("\nMostrar Polinomio");
    mostrarPolinomio(darPolinomio(a,"pepe"));

    ABBPolinomioEliminar(a);

    if(ABBPolinomioExiste(a,"pepe"))
        printf("existe");
    else
        printf("no existe");

*/

}

void pruebasListaTermino()
{/*
    Termino t1,t2,t3;

    CrearTermino(t1,3,2);
    CrearTermino(t2,2,1);
    CrearTermino(t3,1,0);

    ListaTerminos listaT;
    listaTerminosCrear(listaT);


    InsBackListaTermino(listaT,t1);
    InsBackListaTermino(listaT,t2);
    InsBackListaTermino(listaT,t3);


    bajarListaTerminos(listaT,"listaTerminos.txt");


    levantarListaTerminos(listaT,"listaTerminos.txt");


    listaTerminosMostrar(listaT);
*/
}

void pruebasPasoMinusculas()
{/*
    String s;
    strcrear(s);
    scan(s);
    llevoAMinusculas(s);
    print(s);*/
}

void mainSumarPolinomios()
{/*
    ///Creo los polinomios a Sumar

    ABBPolinomio abb;
    ABBPolinomioCrear(abb);
    crearEstructurasPruebas(abb);
/////////////
    String s;
    ListaString ls;

    do
    {
        strcrear(s);
        CrearListaString(ls);

        printf("\nIngrese comando: ");
        scan(s);
        partirString(s,ls);

        if(streq("sumar",ls->info))
        {
            if(LargoListaString(ls) == 4)
            {
                if(esAlfanumerico(ls->Sig->info)) ///Nombre del Poli resultante
                {
                    if(!ABBPolinomioExiste(abb,ls->Sig->info)) ///Si existe un Poli con en nombre del resultante
                    {
                        if(esAlfanumerico(ls->Sig->Sig->info)) ///Nombre del primer Poli
                        {
                            if(esAlfanumerico(ls->Sig->Sig->Sig->info)) ///Nombre del segundo Poli
                            {
                                if(ABBPolinomioExiste(abb,ls->Sig->Sig->info))
                                {
                                    if(ABBPolinomioExiste(abb,ls->Sig->Sig->Sig->info))
                                     {
                                            ListaTerminos LstResultado,LstPoliA,LstPoliB;
                                            listaTerminosCrear(LstResultado);
                                            listaTerminosCrear(LstPoliA);
                                            listaTerminosCrear(LstPoliB);

                                            Polinomio PoliA = darPolinomio(abb,ls->Sig->Sig->info);
                                            Polinomio PoliB = darPolinomio(abb,ls->Sig->Sig->Sig->info);
                                            Polinomio PoliResultante;

                                            darListaTerminosPolinomio(PoliA,LstPoliA);
                                            darListaTerminosPolinomio(PoliB,LstPoliB);

                                            sumarPolinomios(LstPoliA,LstPoliB,LstResultado);
                                            crearPolinomio(PoliResultante,ls->Sig->info,LstResultado);
                                            ABBPolinomioInsertar(abb,PoliResultante);
                                            printf("Resultado : ");
                                            mostrarPolinomio(PoliResultante);
                                            ///Destruir listas????
                                     }
                                     else
                                     {
                                        printf("\nError: el segundo Polinomio a sumar, indicado con el nombre ");
                                        print(ls->Sig->Sig->Sig->info);
                                        printf("\nno existe en memoria.");
                                     }
                                }
                                else
                                {
                                    printf("\nError: el primer Polinomio a sumar, indicado con el nombre ");
                                    print(ls->Sig->Sig->info);
                                    printf("\nno existe en memoria.");
                                }
                            }
                            else
                            {
                                printf("\nError: el nombre ingresado para el segundo Polinomio a sumar - ");
                                print(ls->Sig->Sig->Sig->info);
                                printf(" -, no es un alfanumerico, y es imposible encontrarlo en el sistema.");
                            }
                        }
                        else
                        {
                            printf("\nError: el nombre ingresado para el primer Polinomio a sumar- ");
                            print(ls->Sig->Sig->info);
                            printf(" -, no es un alfanumerico, y es imposible encontrarlo en el sistema.");
                        }
                    }
                    else
                    {
                        printf("\nError: en el sistema ya existe un Polinomio con el nombre ingresado para indeficiar al resulatante, nombre ingresado: ");
                        print(ls->Sig->info);
                    }
                }
                else
                {
                   printf("\nError: el nombre ingresado para identificar al Polinimio resultante - ");
                   print(ls->Sig->info);
                   printf(" - , no es un alfanumerico.");
                }
            }
            else
                printf("\nError: la cantidad de parametros no es correcta para el comando,\n se esperan 3 parametros y fueron ingresados %d",LargoListaString(ls)- 1);
        }
        else
        {
            printf("\nError: no se reconoce el comando: ");
            print(ls->info);
        }
    }while(!streq("salir",ls->info));*/
}

void mainMultiplicarPolinomios()
{/*
    ///Creo los polinimios a Multiplicar
    ABBPolinomio abb;
    ABBPolinomioCrear(abb);
    crearEstructurasPruebas(abb);

/////////////
    String s;
    ListaString ls;

    do
    {
        strcrear(s);
        CrearListaString(ls);

        printf("\nIngrese comando: ");
        scan(s);
        partirString(s,ls);

        if(streq("multiplicar",ls->info))
        {
            if(LargoListaString(ls) == 4)
            {
                if(esAlfanumerico(ls->Sig->info)) ///Nombre del Poli resultante
                {
                    if(!ABBPolinomioExiste(abb,ls->Sig->info)) ///Si existe un Poli con en nombre del resultante
                    {
                        if(esAlfanumerico(ls->Sig->Sig->info)) ///Nombre del primer Poli
                        {
                            if(esAlfanumerico(ls->Sig->Sig->Sig->info)) ///Nombre del segundo Poli
                            {
                                if(ABBPolinomioExiste(abb,ls->Sig->Sig->info))
                                {
                                    if(ABBPolinomioExiste(abb,ls->Sig->Sig->Sig->info))
                                     {

                                            ListaTerminos LstResultado,LstPoliA,LstPoliB;
                                            listaTerminosCrear(LstResultado);
                                            listaTerminosCrear(LstPoliA);
                                            listaTerminosCrear(LstPoliB);

                                            Polinomio PoliA = darPolinomio(abb,ls->Sig->Sig->info);
                                            Polinomio PoliB = darPolinomio(abb,ls->Sig->Sig->Sig->info);
                                            Polinomio PoliResultante;

                                            darListaTerminosPolinomio(PoliA,LstPoliA);
                                            darListaTerminosPolinomio(PoliB,LstPoliB);

                                            multiplicarPolinomios(LstPoliA,LstPoliB,LstResultado);
                                            crearPolinomio(PoliResultante,ls->Sig->info,LstResultado);
                                            ABBPolinomioInsertar(abb,PoliResultante);
                                            printf("Resultado : ");
                                            mostrarPolinomio(PoliResultante);

                                     }
                                     else
                                     {
                                        printf("\nError: el segundo Polinomio a multiplicar, indicado con el nombre ");
                                        print(ls->Sig->Sig->Sig->info);
                                        printf("\nno existe en memoria.");
                                     }
                                }
                                else
                                {
                                    printf("\nError: el primer Polinomio a multiplicar, indicado con el nombre ");
                                    print(ls->Sig->Sig->info);
                                    printf("\nno existe en memoria.");
                                }
                            }
                            else
                            {
                                printf("\nError: el nombre ingresado para el segundo Polinomio a multiplicar - ");
                                print(ls->Sig->Sig->Sig->info);
                                printf(" -, no es un alfanumerico, y es imposible encontrarlo en el sistema.");
                            }
                        }
                        else
                        {
                            printf("\nError: el nombre ingresado para el primer Polinomio a multiplicar- ");
                            print(ls->Sig->Sig->info);
                            printf(" -, no es un alfanumerico, y es imposible encontrarlo en el sistema.");
                        }
                    }
                    else
                    {
                        printf("\nError: en el sistema ya existe un Polinomio con el nombre ingresado para indeficiar al resulatante, nombre ingresado: ");
                        print(ls->Sig->info);
                    }
                }
                else
                {
                   printf("\nError: el nombre ingresado para identificar al Polinimio resultante - ");
                   print(ls->Sig->info);
                   printf(" - , no es un alfanumerico.");
                }
            }
            else
                printf("\nError: la cantidad de parametros no es correcta para el comando,\n se esperan 3 parametros y fueron ingresados %d",LargoListaString(ls)- 1);
        }
        else
        {
            printf("\nError: no se reconoce el comando: ");
            print(ls->info);
        }
    }while(!streq("salir",ls->info));*/
}

void mainMostrar()
{/*
    ///Creo Polinimios para mostrar

    ABBPolinomio abb;
    ABBPolinomioCrear(abb);
    crearEstructurasPruebas(abb);

/////////////
    String s;
    ListaString ls;

    do
    {
        strcrear(s);
        CrearListaString(ls);

        printf("\nIngrese comando: ");
        scan(s);
        partirString(s,ls);

        if(streq("mostrar",ls->info))
        {
            if(LargoListaString(ls) == 1)
            {
                if(!ABBPolinomioEsVacio(abb)) /// Controlo que el abb no este vacio.
                {
                    printf("Resultado   : ");
                    ABBPolinomioListar(abb);
                }
                else
                   printf("\nError: No existen polinomios en memoria, no hay nada para listar.");
            }
            else
            {
                 printf("\nError: El comando - ");
                 print(ls->info);
                 printf(" - no acepta parametros.");
            }
        }
        else
        {
            printf("\nError: no se reconoce el comando: ");
            print(ls->info);
        }
    }while(!streq("salir",ls->info));*/
}


void mainEvaluar()
{/*
    ///Creo Polinimios para evaluar
    ABBPolinomio abb;
    ABBPolinomioCrear(abb);
    crearEstructurasPruebas(abb);

/////////////
    String s;
    ListaString ls;

    do
    {
        strcrear(s);
        CrearListaString(ls);

        printf("\nIngrese comando: ");
        scan(s);
        partirString(s,ls);

        if(streq("evaluar",ls->info))
        {
            if(LargoListaString(ls) == 3)
            {
                if(esAlfanumerico(ls->Sig->info)) ///Nombre del Poli a evaluar
                {
                    if(ABBPolinomioExiste(abb,ls->Sig->info)) ///Si existe el Poli a evaluar
                    {
                        if(esEntero(ls->Sig->Sig->info)) ///valor a evaluar
                        {
                            long int e = convertirStringAEntero(ls->Sig->Sig->info);
                            ListaTerminos LstPoliEvaluar;
                            listaTerminosCrear(LstPoliEvaluar);
                            Polinomio PoliEvaluar = darPolinomio(abb,ls->Sig->info);
                            darListaTerminosPolinomio(PoliEvaluar,LstPoliEvaluar);

                            printf("Resultado : %li",evaluarPolinomio(LstPoliEvaluar,e));

                        }
                        else
                        {
                            printf("\nError: el parametro correspondiente con el valor a evaluar - ");
                            print(ls->Sig->Sig->info);
                            printf(" -, no representa un numero entero. No es posible evaluar el Polinimio.");
                        }
                    }
                    else
                    {
                        printf("\nError: en el sistema no existe un Polinomio con el nombre: ");
                        print(ls->Sig->info);
                    }
                }
                else
                {
                   printf("\nError: el nombre ingresado del Polinimio a evaluar - ");
                   print(ls->Sig->info);
                   printf(" - , no es un alfanumerico, es imposible identificarlo en el sistema.");
                }
            }
            else
            {
                printf("\nError: la cantidad de parametros no es correcta para el comando - evaluar - ");
                printf(", para el mismo se esperan 2 parametros(nombre Polinomio y valor a evaluar) y fueron ingresados %d",LargoListaString(ls)- 1);
            }

        }
        else
        {
            printf("\nError: no se reconoce el comando: ");
            print(ls->info);
        }
    }while(!streq("salir",ls->info));
*/
}


void mainEsRaiz()
{/*
    ///Creo Polinimios para evaluar
    ABBPolinomio abb;
    ABBPolinomioCrear(abb);
    crearEstructurasPruebas(abb);

/////////////
    String s;
    ListaString ls;

    do
    {
        strcrear(s);
        CrearListaString(ls);

        printf("\nIngrese comando: ");
        scan(s);
        partirString(s,ls);

        if(streq("esraiz",ls->info))
        {
            if(LargoListaString(ls) == 3)
            {
                if(esAlfanumerico(ls->Sig->info)) ///Nombre del Poli a evaluar si es raiz
                {
                    if(ABBPolinomioExiste(abb,ls->Sig->info)) ///Si existe el Poli a evaluar si es raiz
                    {
                        if(esEntero(ls->Sig->Sig->info)) ///valor a evaluar si es raiz
                        {
                            long int e = convertirStringAEntero(ls->Sig->Sig->info);
                            ListaTerminos LstPoliEvaluar;
                            listaTerminosCrear(LstPoliEvaluar);
                            Polinomio PoliEvaluar = darPolinomio(abb,ls->Sig->info);
                            darListaTerminosPolinomio(PoliEvaluar,LstPoliEvaluar);

                            if(evaluarPolinomio(LstPoliEvaluar,e)== 0 )
                                printf("Resultado : es raiz");
                            else
                                printf("Resultado : No es raiz");
                        }
                        else
                        {
                            printf("\nError: el parametro correspondiente con el valor a evaluar si es raiz del Polinomio - ");
                            print(ls->Sig->Sig->info);
                            printf(" -, no representa un numero entero. No es posible evaluar si es raiz del Polinimio.");
                        }
                    }
                    else
                    {
                        printf("\nError: en el sistema no existe un Polinomio con el nombre: ");
                        print(ls->Sig->info);
                    }
                }
                else
                {
                   printf("\nError: el nombre ingresado del Polinimio a evaluar si es raiz - ");
                   print(ls->Sig->info);
                   printf(" - , no es un alfanumerico, es imposible identificarlo en el sistema.");
                }
            }
            else
            {
                printf("\nError: la cantidad de parametros no es correcta para el comando - es raiz - ");
                printf("\n, para el mismo se esperan 2 parametros(nombre Polinomio y valor a evaluar) y fueron ingresados %d",LargoListaString(ls)- 1);
            }
        }
        else
        {
            printf("\nError: no se reconoce el comando: ");
            print(ls->info);
        }
    }while(!streq("salir",ls->info));*/
}

void mainGuardar()
{/*
    ///Creo Polinimios para evaluar
    ABBPolinomio abb;
    ABBPolinomioCrear(abb);
    crearEstructurasPruebas(abb);

/////////////
    String s;
    ListaString ls;

    do
    {
        strcrear(s);
        CrearListaString(ls);

        printf("\nIngrese comando: ");
        scan(s);
        partirString(s,ls);

        if(streq("guardar",ls->info))
        {
            if(LargoListaString(ls) == 3)
            {
                if(esAlfanumerico(ls->Sig->info)) ///Nombre del Poli a guardar
                {
                    if(ABBPolinomioExiste(abb,ls->Sig->info)) ///Si existe el Poli a guardar
                    {
                        if(cntPuntos(ls->Sig->Sig->info) == 1)
                        {
                            String nombreArch,extensionArch;
                            strcrear(nombreArch);
                            strcrear(extensionArch);
                            retornaExtensionNombre(ls->Sig->Sig->info,nombreArch,extensionArch);
                            if(esAlfanumerico(nombreArch))
                            {
                                if(streq("txt",extensionArch))
                                {
                                    if(!ExisteArchivo(ls->Sig->Sig->info))
                                    {
                                        Polinomio Poli = darPolinomio(abb,ls->Sig->info);
                                        ListaTerminos LstAux;
                                        listaTerminosCrear(LstAux);
                                        darListaTerminosPolinomio(Poli,LstAux);
                                        bajarListaTerminos(LstAux,ls->Sig->Sig->info);
                                        printf("\nResultado:  Polinomio almacenado correctamente en ");
                                        print(ls->Sig->Sig->info);
                                    }
                                    else
                                    {
                                        printf("\nYa existen en disco un archivo con el nombre -");
                                        print(ls->Sig->Sig->info);
                                        printf("- \n\tDesea sobreescribirlo? (S - si, N - No) ");
                                        char respuesta;
                                        scanf("%c",&respuesta);
                                        if(respuesta == 's' || respuesta == 'S')
                                        {
                                            Polinomio Poli = darPolinomio(abb,ls->Sig->info);
                                            ListaTerminos LstAux;
                                            listaTerminosCrear(LstAux);
                                            darListaTerminosPolinomio(Poli,LstAux);
                                            bajarListaTerminos(LstAux,ls->Sig->Sig->info);
                                            printf("\nResultado:  Polinomio almacenado correctamente en ");
                                            print(ls->Sig->Sig->info);
                                        }
                                    }
                                }
                                else
                                {
                                    printf("\nError: la extension del archivo a guardar no es txt. La misma es: ");
                                    print(extensionArch);
                                }
                            }
                            else
                            {
                                printf("\nError: el nombre ingresado para el archivo en cual se desea guardar el Polinomio, no es elfanumeroco. Nombre ingresado es: ");
                                print(nombreArch);
                            }
                        }
                        else
                        {
                            if(cntPuntos(ls->Sig->Sig->info) == 0)
                            {
                                printf("\nError: no es posible determinar la extencion del archivo a guardar, no se encontro ningun punto en el nombre de archivo ingresado.",cntPuntos(ls->Sig->Sig->info));
                                printf(" Nombre de archivo ingresado: ");
                                print(ls->Sig->Sig->info);
                            }
                            else
                            {
                            printf("\nError: no es posible determinar la extencion del archivo a guardar, se encontraron %i puntos en el nombre de archivo ingresado.",cntPuntos(ls->Sig->Sig->info));
                            printf(" Nombre de archivo ingresado: ");
                            print(ls->Sig->Sig->info);
                            }
                        }
                    }
                    else
                    {
                        printf("\nError: en el sistema no existe un Polinomio con el nombre: ");
                        print(ls->Sig->info);
                    }
                }
                else
                {
                   printf("\nError: el nombre ingresado para el Polinimio a guardar - ");
                   print(ls->Sig->info);
                   printf(" - , no es un alfanumerico, es imposible identificarlo en el sistema.");
                }
            }
            else
            {
                if(LargoListaString(ls)- 1 == 0)
                    printf("\nError: No se encontraron parametros, para el comando -guardar-, se esperan que se ingresen 2 parametros(nombre del Polinomio y nombre del archivo).");
                else
                {
                    printf("\nError: la cantidad de parametros no es correcta para el comando -guardar- ");
                    printf("\n, para el mismo se esperan 2 parametros(nombre del Polinomio y nombre del archivo) y fueron ingresados %d",LargoListaString(ls)- 1);
                }
            }
        }
        else
        {
            printf("\nError: no se reconoce el comando: ");
            print(ls->info);
        }
    }while(!streq("salir",ls->info));
*/
}

void mainRecuperar()
{/*
    ///Creo Polinimios para recuperar
    ABBPolinomio abb;
    ABBPolinomioCrear(abb);
    crearEstructurasPruebas(abb);

/////////////
    String s;
    ListaString ls;

    do
    {
        strcrear(s);
        CrearListaString(ls);

        printf("\nIngrese comando: ");
        scan(s);
        partirString(s,ls);

        if(streq("recuperar",ls->info))
        {
            if(LargoListaString(ls) == 3)
            {
                if(esAlfanumerico(ls->Sig->info)) ///Nombre del Poli a guardar luego de recuperarlo
                {
                    if(!ABBPolinomioExiste(abb,ls->Sig->info)) ///Si ya existe un Poli con ese nombre
                    {
                        if(cntPuntos(ls->Sig->Sig->info) == 1)
                        {
                            String nombreArch,extensionArch;
                            strcrear(nombreArch);
                            strcrear(extensionArch);
                            retornaExtensionNombre(ls->Sig->Sig->info,nombreArch,extensionArch);
                            if(esAlfanumerico(nombreArch))
                            {
                                 if(streq("txt",extensionArch))
                                {
                                    if(ExisteArchivo(ls->Sig->Sig->info))
                                    {
                                        ListaTerminos LstAux;
                                        listaTerminosCrear(LstAux);

                                        levantarListaTerminos(LstAux,ls->Sig->Sig->info);
                                        if(LstAux != NULL)
                                        {
                                            Polinomio Poli;
                                            crearPolinomio(Poli,ls->Sig->info,LstAux);
                                            ABBPolinomioInsertar(abb,Poli);
                                            destuirListaTerminos(LstAux);
                                            printf("\nResultado : ");
                                            mostrarPolinomio(Poli);
                                        }
                                        else
                                            printf("\nError: ocurrio un error inesperado al recuperar la informacion del archivo.");
                                    }
                                    else
                                    {
                                        printf("\nError: no se encontro en el disco el archivo ");
                                        print(ls->Sig->Sig->info);
                                    }
                                }
                                else
                                {
                                    printf("\nError: la extension del archivo del cual se desea recuperar el Polinomio no es txt. La misma es: ");
                                    print(extensionArch);
                                }
                            }
                            else
                            {
                                printf("\nError: el nombre del archivo del cual se desea recuperar el Polinomio no es alfanumerico. Nombre ingresado es: ");
                                print(nombreArch);
                            }
                        }
                        else
                        {
                            if(cntPuntos(ls->Sig->Sig->info) == 0)
                            {
                                printf("\nError: no es posible determinar la extension del archivo del cual se desea recuperar el Polinomio, no se encontro ningun punto en el nombre de archivo ingresado.",cntPuntos(ls->Sig->Sig->info));
                                printf(" Nombre de archivo ingresado: ");
                                print(ls->Sig->Sig->info);
                            }
                            else
                            {
                            printf("\nError: no es posible determinar la extencion del archivo del cual se desea recuperar el Polinomio, se encontraron %i puntos en el nombre de archivo ingresado.",cntPuntos(ls->Sig->Sig->info));
                            printf(" Nombre de archivo ingresado: ");
                            print(ls->Sig->Sig->info);
                            }
                        }
                    }
                    else
                    {
                        printf("\nError: ya existe en el sistema un Polinomio con el nombre: ");
                        print(ls->Sig->info);
                    }
                }
                else
                {
                   printf("\nError: el nombre ingresado para el Polinimio que se desea recuperar -");
                   print(ls->Sig->info);
                   printf("- , no es un alfanumerico.");
                }
            }
            else
            {
                if(LargoListaString(ls)- 1 == 0)
                    printf("\nError: No se encontraron parametros, para el comando -recuperar-, se esperan que se ingresen 2 parametros(nombre del Polinomio y nombre del archivo).");
                else
                {
                    printf("\nError: la cantidad de parametros no es correcta para el comando -recuperar- ");
                    printf("\n, para el mismo se esperan 2 parametros(nombre del Polinomio y nombre del archivo) y fueron ingresados %d",LargoListaString(ls)- 1);
                }
            }
        }
        else
        {
            printf("\nError: no se reconoce el comando: ");
            print(ls->info);
        }
    }while(!streq("salir",ls->info));*/
}

void pruebaStringAEnteroYEsNumero()
{/*
    String s;
    strcrear(s);
    long int numero;
    scan(s);

    if(esEntero(s))
        printf("\nValor es entero");
    else
        printf("\nValor NOO es entero");

    numero = convertirStringAEntero(s);
    printf("\nValor convertido: %li",numero);
    */
}

void crearEstructurasPruebas(ABBPolinomio &abb)
{/*
     ///Creo los polinomios e inserto en el ABB
    Polinomio PoliA,PoliB;
    ListaTerminos LtA,LtB,ListaResultado;
    listaTerminosCrear(LtA);
    listaTerminosCrear(LtB);
    listaTerminosCrear(ListaResultado);

    Termino tA1,tA2,tA3,tB1,tB2,tB3;
    tA1.coef  = 3;
    tA1.grado = 6;
    listaTerminosInsertarOrdenado(LtA,tA1);

    tA2.coef  = 2;
    tA2.grado = 2;
    listaTerminosInsertarOrdenado(LtA,tA2);

    tA2.coef  = -4;
    tA2.grado = 1;
    listaTerminosInsertarOrdenado(LtA,tA2);

    tA3.coef  = 3;
    tA3.grado = 0;
    listaTerminosInsertarOrdenado(LtA,tA3);

    PoliA.nombre = "pepe";
    PoliA.listaTerminos = LtA;
    ABBPolinomioInsertar(abb,PoliA);

    tB1.coef  = 3;
    tB1.grado = 2;
    listaTerminosInsertarOrdenado(LtB,tB1);

    tB2.coef  = 1;
    tB2.grado = 1;
    listaTerminosInsertarOrdenado(LtB,tB2);

    tB3.coef  = 1;
    tB3.grado = 0;
    listaTerminosInsertarOrdenado(LtB,tB3);

    PoliB.nombre = "lolo";
    PoliB.listaTerminos = LtB;
    ABBPolinomioInsertar(abb,PoliB);
    */
}

