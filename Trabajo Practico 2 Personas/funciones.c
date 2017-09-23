#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funciones.h"

#define M 80
/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
void obtenerEspacioLibre(EPersona lista[]){
    int i;
    for(i=0; i<M; i++){
        lista[i].estado=0;
        lista[i].dni=0;
        lista[i].edad=0;
    }
}
/**
 * Ingresa los datos
 * \param permite ingresar el nombre la edad y el dni
 * \param valida los valores
 * \return carga los valores en el array
 *
 */
void agregar(EPersona lista[]){
    int i;
    for(i=0; i<M; i++){
        if(lista[i].estado==0){
            printf("\n Ingrese nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);
            printf("\n Ingrese Edad: ");
            scanf("%d",&lista[i].edad);
            while(lista[i].edad<0 || lista[i].edad>99){
                printf("\n Edad Invalida, reingrese: ");
                scanf("%d",&lista[i].edad);
            }
            printf("\n Ingrese dni: ");
            scanf("%li", &lista[i].dni);
            while(lista[i].dni>99999999 || lista[i].dni<1000000){
                printf("\n DNI Invalido, reingrese: ");
                scanf("%li",& lista[i].dni);
            }
            lista[i].estado=1;
            system("cls");
            printf("\n\n----------------------------------------------------------------------------------------\n\n\n");
            printf("Se Agrego Correctamente a %s con DNI: %li  EDAD: %i ", lista[i].nombre, lista[i].dni, lista[i].edad);
            printf("\n\n----------------------------------------------------------------------------------------\n\n\n");
            break;
        }
    }
    if(i==M){
        printf("\n\n---------------------------- No hay Lugar para Agregar mas Registros, Borre Uno ------------------------------------\n\n");
    }
}
/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[]){
    int indice=0,i;
    long int dniaux;

        printf("\n Buscar por DNI: ");
        scanf("%li",&dniaux);
        for(i=0;i<M;i++){
            if(dniaux == lista[i].dni){
               indice = i;
               break;
            }
        }
    return indice;
}
/**
 * Elimina los datos almacenados en el array elegido
 * \param recibe el valor del indice de la funcion buscar por dni
 * \param cambia los valores del array por 0,incluido el estado.
 */
void borrar(EPersona lista[]){
    int i,auxInd;
    auxInd = buscarPorDni(lista);
    for(i=0; i<M; i++){
        if( auxInd == i && lista[auxInd].estado==1){
            lista[i].estado=0;
            lista[i].dni=0;
            lista[i].edad=0;
            printf("\n\n----------------------------------------------------------------------------------------\n\n\n");
            printf("Se Elimino Correctamente a:   %s con DNI: %li  EDAD: %i ", lista[i].nombre, lista[i].dni, lista[i].edad);
            printf("\n\n----------------------------------------------------------------------------------------\n\n\n");
            strcpy(lista[i].nombre,"-");

            break;
        }
    }
    if(i==M){
       printf("\n\n---------------------------- No Existe el DNI ------------------------------------\n\n");
    }
}
/**
 * Imprime los nombres
 * \param ordena los nombres alfabeticamente
 * \return muestra los nombres de las personas ordenados con sus respectivos datos
 */
void listar(EPersona lista[]){
    int i, j;
    EPersona auxP;

    for(i=0; i<M-1; i++){
        for(j=i+1; j<M; j++){
            if(lista[j].estado ==1){
                if(strcmp(lista[i].nombre,lista[j].nombre)>0){
                    auxP=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxP;
                }
            }

        }
    }
    printf("\n\n---------------------------- Listado de Personas------------------------------------\n\n");
    for(i=0;i<M;i++){
        if(lista[i].estado==1){
            printf("\nNombre: %s DNI: %li  EDAD: %i\n", lista[i].nombre, lista[i].dni, lista[i].edad);
        }
    }
    printf("\n\n------------------------------------------------------------------------------------\n\n");
}
/**
 * grafica las personas por su edad
 * \param comprueba cuantas personas hay de cada rango de edad
 * \param las ordena y grafica un "*" por cada persona
 */
void graficar(EPersona lista[]){
    int menor19 = 0;
    int entre18y35 = 0; //mayores
    int mayor35 = 0; //viejos
    int i;
    int mayor=0;
    int flag=0;
    for(i=0;i<M;i++){
        if(lista[i].estado == 1){
            if(lista[i].edad < 19 ){
                menor19++;
           }
        if(lista[i].edad > 18 && lista[i].edad < 36){
                entre18y35++;
            }
        if(lista[i].edad > 35){
                mayor35++;
            }
        }
    }
    if(menor19 > entre18y35 && menor19 > mayor35){
        mayor = menor19;
    }
    else{
        if( entre18y35 > menor19 && entre18y35 >= mayor35){
                mayor = entre18y35;
            }
             else{

                mayor = mayor35;
               }
     }
     printf("\n\n---------------------------- Grafico de Edades------------------------------------\n\n");
     for(i=mayor; i>0; i--){
        if(i<= menor19){
            printf("*");
        }
        if(i<= entre18y35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayor35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");
        }
        printf("\n");
    }

    printf("<18\t19-35\t>35\n");
    printf("\n\n----------------------------------------------------------------------------------\n\n");
}
