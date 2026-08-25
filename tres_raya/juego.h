#ifndef JUEGO_H
#define JUEGO_H

int main();
int turno(int x);
void mostrar_tablero(int **filas);
int comprobar_ganador(int **filas);
void jugar(int *turn,int *fila, int *columna, int **filas);
int tablero_lleno(int **filas);


#endif