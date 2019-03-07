#include "ABBPolinomio.h"
#include "ProcesadorComandos.h"

int main()
{
    ///Creo Polinimios para recuperar
    ABBPolinomio abb;
    ABBPolinomioCrear(abb);
    String s;
    ListaString ls;

    do
    {
        strcrear(s);
        CrearListaString(ls);

        printf("\nIngrese comando: ");
        scan(s);
        partirString(s,ls);

        if(streq("crear",ls->info))
            comandoCrear(abb,ls);
        else
        {
           if(streq("sumar",ls->info))
                comandoSumar(abb,ls);
           else
           {
               if(streq("multiplicar",ls->info))
                    comandoMultiplicar(abb,ls);
               else
               {
                   if(streq("evaluar",ls->info))
                        comandoEvaluar(abb,ls);
                   else
                   {
                       if(streq("esraiz",ls->info))
                            comandoEsRaiz(abb,ls);
                       else
                       {
                           if(streq("mostrar",ls->info))
                                comandoMostrar(abb,ls);
                           else
                           {
                               if(streq("guardar",ls->info))
                                    comandoGuardar(abb,ls);
                               else
                               {
                                   if(streq("recuperar",ls->info))
                                        comandoRecuperar(abb,ls);
                                   else
                                   {
                                       if(streq("salir",ls->info))
                                            comandoSalir(abb,ls);
                                       else
                                            print("\nError: no se reconoce el comando.");
                                   }
                               }
                           }
                       }
                   }
               }
           }
        }
        ///strdestruir(s);
        ///destruirListaString(ls);
    }while(!streq("salir",ls->info));
/////////////

    ///pruebaModuloString();
    ///pruebaListaStrings();
    ///pruebasModuloArchivo();
    ///pruebasModuloTermino();
    ///pruebasModuloPolinomio();
    ///pruebasSumarPolinomios();
    ///pruebasReducirPolinomio();
    ///pruebasMultiplicarPolinomio();
    ///pruebasControlTerminoIndependienteNoNulo();
    ///pruebasEvaluarPolinomio();
    ///pruebasEsRaiz();
    ///PruebasABBPolinomio();
    ///pruebasListaTermino();
    ///pruebasPasoMinusculas();
    ///mainSumarPolinomios();
    ///mainMultiplicarPolinomios();
    ///mainMostrar();
    ///mainEvaluar();
    ///mainEsRaiz();
    ///mainGuardar();
    ///mainRecuperar();
    ///pruebaStringAEnteroYEsNumero();
    ///pruebaDarExtencion();
}
