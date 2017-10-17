#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int legajo;
    char nombre[50];
    int nota;

}eRecursante;

eRecursante* constructorparametrizado(int ,char* , int);
int main()
{
    eRecursante* puntero;

        puntero = constructorparametrizado(100,"pedro",3);

        if(puntero != NULL)
        {
            printf("%d\t\t%s\t\t%d\n",(puntero)->legajo,(puntero)->nombre,(puntero)->nota);
        }
        else
        {
            printf("no hay espacio en memoria.\n");
        }



    return 0;
}

eRecursante* constructorparametrizado(int legajo,char* nombre, int nota)
{
        eRecursante* puntero;

        puntero =(eRecursante*) malloc(sizeof(eRecursante));

        if(puntero != NULL)
        {
            (puntero)->legajo = legajo;
            strcpy((puntero)->nombre,nombre);
            (puntero)->nota = nota;
        }

    return puntero;
}
