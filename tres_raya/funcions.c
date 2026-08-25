#include <stdio.h>
#include <math.h>
#include "juego.h"

void mostrar_tablero(int **filas){
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(filas[i][j] == 0){
                printf(" ");
            }else if (filas[i][j] == 1){
                printf("X");
                }else{
                    printf("O");
                }
            if(j < 2){
                printf("|");
     }
    }
    printf("\n");
    if(i<2){
        printf("------");
        printf("\n");
    }
}
}


int comprobar_ganador(int **filas){
    for (int i = 0; i < 3; i++){
        if(filas[i][0] == filas[i][1] && filas[i][1] == filas[i][2] && filas[i][0] != 0 ){
            return filas[i][0];

        }   
    }for (int i = 0; i < 3; i++){
        if(filas[0][i] == filas[1][i] && filas[1][i] == filas[2][i] && filas[0][i] != 0 ){
            return filas[0][i];
        }
    }
    if ((filas[0][0] == filas[1][1] && filas[1][1] == filas[2][2] || filas[0][2] == filas[1][1] && filas[1][1] == filas[2][0]) && filas[1][1] != 0 ){
    return filas[1][1]; 
    }else{
        return 0;
    }


}

void jugar(int *turn,int *fila, int *columna,int **filas){

    printf("\n escoge fila del 1 al 3\n");
    scanf("%d", fila);
    if (*fila < 1 || *fila > 3){
            printf("\nLA CASILLA NO ES TAN GRANDE (3X3)\n");
            
        }else{
        *fila = *fila - 1;
        printf("\n escoge columna del 1 al 3\n");
        scanf("%d", columna);
        if (*columna < 1 || *columna > 3){
        printf("\nLA CASILLA NO ES TAN GRANDE (3X3)\n");

        }else{
        *columna = *columna -1;
    
        if(filas[*fila][*columna] == 1 ||filas[*fila][*columna] == 2 ){
            printf("\nESCOGE OTRA CASILLA\n");
        }else{
            if (*turn == 1){
                    filas[*fila][*columna]= 1;
                    *turn = turno(*turn);
                }else{
                    filas[*fila][*columna]= 2;
                    *turn = turno(*turn);
                    }

            }  

        }

    }


}

int tablero_lleno(int **filas){

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (filas[i][j] == 0){
                return 0;
            }
        }
    }

    return 3;
}