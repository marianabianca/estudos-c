#include <stdio.h>
#include <stdlib.h>
/** pacote para lidar com strings **/
#include <string.h>


int main()
{
    /** testando iniciar variveis tipo int */
    int x, y;
    x = 2;
    y = 3;


    /** testando scannear e printar "strings" **/
    char meuNome[21342];
    char seuNome[23424];
    scanf("%s %s", seuNome, meuNome);
    printf("%s diz: oi, %s!\n", seuNome, meuNome);


    /** testando lidar com arrays expansiveis (?) **/
    int i;
    int *inteiros;
    inteiros = malloc(sizeof(int)*2);
    for (i = 0; i < 5; ++i) {
        inteiros[i] = i;
    }

    printf("\n %d \n", sizeof(inteiros));

    for (i = 0; i < sizeof(inteiros); ++i) {
        printf("%d\n", inteiros[i]);
    }


    /** testando while com true **/
    i = 0;
    int coiso = 1;
    while (coiso) {
        i = i + 1;
        printf("%d", i);
        if (i == 3) {
            break;
        }
    }

    return 0;
}
