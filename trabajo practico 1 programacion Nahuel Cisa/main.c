#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "cisa.h"

int main()
{
    int num1;
    int num2;
    char respuesta = 's';

do{

    printf("\n-----------Bienvenido a la calculadora-----------\n");
    printf("A continuacion, debera cargar dos numeros para comenzar a operar.\n");

    system("pause");
    system("cls");

    printf("\nIngrese el valor que poseera el numero A: ");
    fflush(stdin);
    scanf("%d", &num1);

    printf("\nAhora, ingrese el valor que poseera el numero B: ");
    fflush(stdin);
    scanf("%d", & num2);


    printf("Ahora, elija la operacion que quiere realizar con los numeros ingresados anteriormente.\n ");

    system("pause");

    switch(menu(num1,num2)){

case 'a':

    system("pause");
    system("cls");

    printf("Usted eligio sumar.\n");
    printf("Y el resultado de la suma es : %d \n", sumar(num1, num2));
    break;

case 'b':

    system("pause");
    system("cls");

    printf("Usted eligio restar.\n");
    printf("Y el resultado de la resta es : %d \n", restar(num1, num2));
    break;

case 'c':
    system("pause");
    system("cls");

    if(num2 == 0){

        printf("No es posible dividir por cero, elija otro divisor.\n");
        respuesta = 's';

        system("pause");
        system("cls");
        break;


    }else {
    printf("Usted eligio division.\n");
    printf("Y el resultado de la division es : %.2f \n", dividir(num1, num2));
    break;
    }

case 'd':

    system("pause");
    system("cls");

    printf("Usted eligio multiplicar.\n");
    printf("Y el resultado de la multiplicacion es : %.2f \n", multiplicar(num1, num2));
    break;

case 'e':
    system("pause");
    system("cls");

    printf("Usted eligio factorial.\n");
    printf("Y el resultado de la factorizacion para A  es : %.2f  y para B %.2f \n", factorialA(num1), factorialB(num2));
    break;


case 'f':

    system("pause");
    system("cls");

    printf("Gracias por usar la calculadora de Nahuel Cisa. \n ");
    respuesta = 'n';

    break;


}

    system("pause");
    system("cls");

    if(respuesta == 's'){

        printf("Desea realizar otra operacion? s/n: ");
        respuesta = getche();
        system("cls");
    }



}while(respuesta == 's');

    return 0;
}




