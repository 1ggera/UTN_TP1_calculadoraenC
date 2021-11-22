#include <stdio.h>
#include <stdlib.h>
/**/
float getFloat(char mensaje[])
{
    float x;
    printf("%s", mensaje);
    scanf("%f", &x);
    return x;
}

float getInt(char mensaje[])
{
    int x;
    printf("%s", mensaje);
    scanf("%d", &x);
    return x;
}

float getChar(char mensaje[])
{
    char x;
    printf("%s", mensaje);
    fflush(stdin);//borrado de alg�n dato que no sea el char
    scanf("%d", &x);
    return x;
}
/*para usar esta funci�n hay que importar en .c la librer�a #include <time.h>
char getNumAleatorio(int desde, hasta, iniciar)
{
    if(iniciar)
        srand(time(null));
    return desde + (rand()%(hasta + 1 - desde));
}
*/

int sumar(int a, int b)
{
    int total;
    total=a+b;
    printf("= %d \n",total);
}

int restar(int a, int b)
{
    int total;
    total=a-b;
    printf("= %d \n",total);
}

int multiplicar(int a, int b)
{
    int total;
    total=a*b;
    printf("= %d \n",total);
}

int dividir(int a, int b)
{
    int total;
    total=a/b;
    printf("= %d \n",total);
}

int factorial(int f)
{
    if(f==0){
        return 1;
    }else
    {
        return f*factorial(f-1);
    }
}
