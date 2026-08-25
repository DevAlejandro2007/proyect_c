#include <stdio.h>
#include <math.h>
#include "juego.h"

int main(){

printf("BIENBENIDOS A MI PRIMER JUEGO EN C\n");

int win = 0;
int fila;
int columna;

int turn = turno(2);

int x[3] = {0,0,0};
int y[3] = {0,0,0};
int z[3] = {0,0,0};

int *filas[3] = {x,y,z}; 

for (int i = 0; i < 3 ; i++){
    printf("\n");
    for (int j = 0; j < 3; j++){
        printf("_|"); 
    }
}

while (win == 0){
    jugar(&turn,&fila,&columna,filas);
    mostrar_tablero(filas);
    win = comprobar_ganador(filas);     
   if(win == 0){win = tablero_lleno(filas);}
}

if (win == 1){
    printf("\nFELICIDADES! X HA GANADO\n");
}else if (win==2){
    printf("\nFELICIDADES O HA GANADO!\n");
}else if(win == 3){
     printf("EMPATE!");
}
printf("FIN DEL JUEGO");


}

int turno(int x){
    if(x == 1){
    return 2;
    }else if (x == 2)
{
return 1;
}
}


