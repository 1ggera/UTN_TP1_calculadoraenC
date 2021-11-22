#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    int dato1,dato2,operacion;

    printf("Calculadora basica\n");
    printf("Seleccione la operacion a realizar\n\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Factorial de un numero\n");
    printf("6. Todas las operaciones\n");
    printf("0. Para salir\n");
    scanf("%d", &operacion);

    if(operacion >= 0 && operacion <= 6){
        switch(operacion)
        {
            case 1:
                printf("Sumar\n");
                scanf("%d", &dato1);
                printf("+\n");
                scanf("%d", &dato2);

                sumar(dato1,dato2);
                break;

            case 2:
                printf("Restar\n");
                scanf("%d", &dato1);
                printf("-\n");
                scanf("%d", &dato2);

                restar(dato1,dato2);
                break;

            case 3:
                printf("Multiplicar\n");
                scanf("%d", &dato1);
                printf("*\n");
                scanf("%d", &dato2);

                multiplicar(dato1,dato2);
                break;

            case 4:
                printf("Dividir\n");
                scanf("%d", &dato1);
                printf("/\n");
                scanf("%d", &dato2);

                dividir(dato1,dato2);
                break;

            case 5:
                printf("Factorial de un numero\n");
                scanf("%d", &dato1);

                int resultado = factorial(dato1);
                printf("El A! de %d es %d\n",dato1,resultado);
                break;

            case 6:
                printf("Ingrese dos números para calcular todas las operaciones\n");
                scanf("%d", &dato1);
                scanf("%d", &dato2);

                printf("\nSumar\n");
                sumar(dato1,dato2);

                printf("\nRestar\n");
                restar(dato1,dato2);

                printf("\nMultiplicar\n");
                multiplicar(dato1,dato2);

                printf("\nDividir\n");
                dividir(dato1,dato2);

                printf("\nFactorial\n");

                int result = factorial(dato1);
                printf("El A! de %d es %d \n",dato1,result);

                break;

            case 0:
                printf("Salir.\n");
                break;
        }
    }else if(operacion < 0 || operacion > 6){
        printf("Ingrese una operacion valida.");
    }else{
        printf("Ingrese una operacion valida.");
    }
    return 0;
}
