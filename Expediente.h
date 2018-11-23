#ifndef EXPEDIENTE_H_INCLUDED
#define EXPEDIENTE_H_INCLUDED

#include "String.h"

typedef struct { long int codigoExpediente;
                 String caratula;
                 String nombreEscribano;
                 String apellidoEscribano;
                 int cantPaginas;
               } Expediente;

void margarExpediente(Expediente &e);

void mostrarExpediente(Expediente e);

boolean existeExpediente(long int cod);

long int darCodigoExpediente(Expediente e);

void darCaratula(Expediente e, String &s);

void darNombreEscribano(Expediente e, String &s);

void darApellidoEscribano(Expediente e, String &s);

int darCntPaginas(Expediente e);


#endif // EXPEDIENTE_H_INCLUDED
