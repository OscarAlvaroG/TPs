#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    float A = 0;
    float B = 0;
    float resultado;
    int opcion = 0;
    char seguir = 's';

    while(seguir == 's') {
        system("cls");
        printf("1- Ingresar 1er operando (A =%.2f)\n", A);
        printf("2- Ingresar 2do operando (B =%.2f)\n", B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("\n Elija una Opcion: ");
        scanf("%d",&opcion);

        switch(opcion){
            case 1:
                printf("Ingrese el Primer operando: ");
                scanf("%f", &A);
                break;
            case 2:
                printf("Ingrese el Segundo operando: ");
                scanf("%f", &B);
                break;
            case 3:
                printf("\n La suma entre %.2f mas  %.2f es %.2f\n\n\n\n",A,B,resultado=sumar(A,B));
                system("pause");
                break;
            case 4:
                printf("\n La resta entre %.2f menos %.2f es %.2f\n\n\n\n",A,B,resultado=restar(A,B));
                system("pause");
                break;
            case 5:
                if(B==0){
                    printf("\nNo se puede dividir en Cero, ingrese un numero distindo en Operando B 0\n\n\n\n");
                    system("pause");
                } else {
                printf("\n La division de %.2f dividido %.2f es %.2f\n\n\n\n",A,B,resultado = dividir(A,B));
                system("pause");
                }
                break;
            case 6:
                printf("\n La Multiplicacion entre %.2f por %.2f es %.2f\n\n\n\n",A,B,resultado = multiplicar(A,B));
                system("pause");
                break;
            case 7:
                if(A<0){
                    printf("\n No se puede calcular el factorial del nro ingresado\n\n\n\n");
                } else {
                    printf("\n El Factorial de %.0f es %.0f\n\n\n\n", A,resultado = factorial(A));
                }//fin if a<0
                system("pause");
                break;
            case 8:
                printf("\n Resultados: \n\n");
                printf("\n La Suma de %.2f + %.2f es %.2f\n",A,B,resultado = sumar(A,B));
                printf("\n La Resta entre %.2f - %.2f es %.2f\n",A,B,resultado = restar(A,B));
                if(B==0){
                   printf("\n Para poder dividir, el divisor debe ser distinto de 0\n");
                } else {
                    printf("\n La Division entre %.2f / %.2f es %.2f\n",A,B,resultado = dividir(A,B));
                }//fin if b=0
                printf("\n La Multiplicacion entre %.2f * %.2f es %.2f\n",A,B,resultado = multiplicar(A,B));
                if(A<0){
                    printf("\n No se puede calcular el Factorial de un numero menor a Cero\n\n\n\n\n\n");
                } else {
                    printf("\n El Factorial de %.0f es %.0f\n\n\n\n\n\n", A,resultado = factorial(A));
                }//fin if a<0
                system("pause");
                break;
            case 9:
                printf("\n Saliste Correctamente!\n\n\n\n\n");
                seguir = 'n';
                break;
            } //fin switch menu
        } //fin while
        return 0;
} // fin main
