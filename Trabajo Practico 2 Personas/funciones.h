#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define M 80

typedef struct {

    char nombre[50];
    int edad;
    long int dni;
    int estado;

}EPersona;

void obtenerEspacioLibre(EPersona lista[]);
int buscarPorDni(EPersona lista[]);
void agregar(EPersona lista[]);
void listar(EPersona lista[]);
void borrar(EPersona lista[]);
void graficar(EPersona lista[]);
#endif // FUNCIONES_H_INCLUDED
