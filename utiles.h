#ifndef UTILES_H_INCLUDED
#define UTILES_H_INCLUDED
#define BORDE borde(30,0)

#include <stdio.h>
#define CLEANBUFFER fflush(stdin)
#define LIMPIAPANTALLA system("cls")

void gotoxy(int x, int y);
void color(int _color);
void getColors();
void printMessage();
void ocultarCursor(int accion);

void letra_C(int, int);
void letra_H(int, int);
void letra_E(int, int);
void letra_R(int, int);
void letra_U(int, int);
void letra_P(int, int);
void flecha(int, int);
void logo(int, int);

void inicioAplicacion();
void login();
void salir();

#endif // UTILES_H_INCLUDED
