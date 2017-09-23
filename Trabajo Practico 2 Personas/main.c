#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(){
    int flag=0;
    char seguir='s';
    int opcion;
    EPersona lista[M];

    while(seguir=='s'){

        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion){
            case 1:
                system("cls");
                agregar(lista);
                flag=1;
                break;
            case 2:
                system("cls");
                if(flag==1){
                    borrar(lista);
                }
                else{
                    printf("\n\n ---------------------------No Se encontro Ningun Registro--------------------------\n\n");
                }
                break;
            case 3:
                system("cls");
                if(flag==1){
                   listar(lista);
                }
                 else{
                    printf("\n\n --------------- No hay Registros. Agrega Uno e Intenta de nuevo -------------\n\n");
                }
                break;
            case 4:
                system("cls");
                if (flag==1){
                    graficar(lista);
                }
                 else{
                    printf("\n\n --------------- No hay Registros. Agrega Uno e Intenta de nuevo -------------\n\n");
                }
                break;
            case 5:
                system("cls");
                seguir = 'n';
                break;
            default:
                system("cls");
                printf("\n\n --------------- Opcion Invalida. Opciones de 1 a 5 -------------\n\n");
                break;
        }
    }
    return 0;
}
