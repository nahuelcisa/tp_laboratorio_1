#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char menu(int a, int b){
/** \brief menu de opciones para la calculadora del tp1
 *
 * \param
 * \param
 * \return
 *
 */

     char opcion;

     system("cls");
     printf("-------menu de opciones-----\n");
     printf("El valor que posee A es: %d. \n",a);
     printf("El valor que posee B es: %d. \n",b);
     printf("\nQue desea hacer con sus numeros?.\n\n");

     printf("a- Sumar.\n");
     printf("b- Restar.\n");
     printf("c- Dividir.\n");
     printf("d- Multiplicar.\n");
     printf("e- Factorial.\n");
     printf("f- Salir.\n");
     printf("-Ingrese opcion: ");
     opcion = getche();
     printf("\n");

     return(opcion);
}

int sumar (int a, int b){
/** \brief suma dos enteros
 *
 * \param 1er numero a sumar
 * \param 2do numero a sumar
 * \return resultado de la suma
 *
 */

    int resultado;

    resultado = a + b;

    return resultado;
}


int restar (int a, int b){
/** \brief resta dos enteros
 *
 * \param 1er numero a restar
 * \param 2do numero a restar
 * \return resultado de la resta
 *
 */
    int resultado;

    resultado = a - b;

    return resultado;
}

float multiplicar (float a, float b){
/** \brief multiplica dos enteros
 *
 * \param 1er numero a multiplicar
 * \param 2do numero a multiplicar
 * \return resultado de la multiplicacion
 *
 */
    float resultado;

    resultado = a * b;

    return resultado;
}

float dividir (float a, float b){
/** \brief dividee dos enteros
 *
 * \param dividendo
 * \param divisor
 * \return resultado de la division
 *
 */
    float resultado;

    resultado = a / b;

    return resultado;
}

float factorialA(float a){
/** \brief saca el factorial del numero ingresado
 *
 * \param numero a calcular el factorial
 * \param
 * \return numero factoreado
 *
 */

    float f = 1;

    if(a<=0){
        printf("Numero no valido para realizar factorial.\n");
        f = 0;
    }else{
        while(a>0){

            f=a*f;
            a--;
            }
        }

    return f;
}

float factorialB(float a){
/** \brief saca el factorial del numero ingresado
 *
 * \param numero a calcular el factorial
 * \param
 * \return numero factoreado
 *
 */

    float f = 1;

    if(a<=0){
        printf("Numero no valido para realizar factorial.\n");
        f = 0;
    }else{
        while(a>0){

            f=a*f;
            a--;
            }
        }

    return f;
}
