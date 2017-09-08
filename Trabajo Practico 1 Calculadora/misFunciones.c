/** \brief Suma dos numeros recibidos como parametro de la funcion main
 *  \param  numero1 tipo float
 *  \param  numero2 tipo float
 *  \return retorna el resultado de la suma
 */
float sumar(float numero1,float numero2){
    float resultado;
    resultado=numero1+numero2;
    return resultado;
}
/** \brief Resta dos numeros que son recibidos como parametros de la funcion main
 *  \param numero1 tipo float
 *  \param numero2 tipo float
 *  \return retorna el resultado de la resta
 */
float restar(float numero1,float numero2){
    int resultado;
    resultado=numero1-numero2;
    return resultado;
}
/** \brief Divide dos numeros recibidos como parametro
 *  \param numero1 tipo float
 *  \param numero2 tipo float
 *  \return resultado de la division
 *
 */
float dividir(float numero1,float numero2){
    float resultado;
    resultado=numero1/numero2;
    return resultado;
}
/** \brief Multiplica dos numeros que son recibidos como parametros de la funcion main
 *  \param numero1 tipo float
 *  \param numero2 tipo float
 *  \return resultado de la operacion multiplicar
 */
float multiplicar(float numero1,float numero2){
    float resultado;
    resultado=numero1*numero2;
    return resultado;
}
/** \brief Calcula el factorial de un numero que se recibe como parametro
 *  \param numero tipo float
 *  \return resultado del factorial
 */
float factorial(float numero){
    int i;
    float resultado=1;

  for (i=numero;i>1;i--){
        resultado=resultado*i;
    }
    return resultado;
}
