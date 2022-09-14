#include "stAlumno.h"
#include "utiles.h"
#define ALUMNOS "alumnos.dat"
#define PROFESORES "profesores.dat"

void menuDeProfesores(stAlumno usuario);
void menuDeUsuarios(stAlumno usuario);
void menuDeCursadas(stAlumno usuario);
void listaDeProfesores(stAlumno usuario);
void comentariosPorProfesor(stAlumno usuario);
void agregarProfesor(stAlumno usuario);
void menuModificacionProfesor(stAlumno usuario);


void menuPrincipalAdmin(stAlumno usuario)
{
    char opcion;
    int X = 100;
    int Y = 16;
    do
    {
        LIMPIAPANTALLA;
        BORDE;
        logo(50,6);
        gotoxy(X,Y);
        printf("QUE DESEA HACER?\n");
        gotoxy(X-20,Y+2);
        printf("1. MENU DE PROFESORES\n");
        gotoxy(X-20,Y+4);
        printf("2. MENU DE USUARIOS\n");
        gotoxy(X-20,Y+6);
        printf("3. MENU DE CURSADAS\n");
        gotoxy(X+20,Y+2);
        printf("4. SALIR\n");

        CLEANBUFFER;
        opcion = getch();
    }
    while(opcion<'1' || opcion>'4');

    switch(opcion)
    {
    case '1':
        menuDeProfesores(usuario);
        break;
    case '2':
        menuDeUsuarios(usuario);
        break;
    case '3':
        menuDeCursadas(usuario);
        break;
    case '4':
        inicioAplicacion();
        break;
    };

}

void menuDeProfesores(stAlumno usuario)
{
    char opcion;
    int X = 100;
    int Y = 16;
    do
    {
        LIMPIAPANTALLA;
        BORDE;
        logo(50,6);
        gotoxy(X,Y);
        printf("QUE DESEA HACER?\n");
        gotoxy(X-20,Y+2);
        printf("1.VER EL LISTADO DE LOS PROFESORES\n");
        gotoxy(X-20,Y+4);
        printf("2. VER LOS COMENTARIOS DE UN PROFESOR\n");
        gotoxy(X-20,Y+6);
        printf("3. AGREGAR UN PROFESOR \n");
        gotoxy(X+20,Y+2);
        printf("4. MODIFICAR DATOS");
        printf("5.VOLVER\n");

        CLEANBUFFER;
        opcion = getch();
    }
    while(opcion<'1' || opcion>'5');

    switch(opcion)
    {
    case '1':
        listaDeProfesores(usuario);
        break;
    case '2':
        comentariosPorProfesor(usuario);
        break;
    case '3':
        agregarProfesor(usuario);
        break;
    case '4':
        menuModificacionProfesor(usuario);
        break;
    case '5':
        menuPrincipalAdmin(usuario);
        break;
    };

}
void menuDeUsuarios(stAlumno usuario)
{

}
void menuDeCursadas(stAlumno usuario)
{

}

void listaDeProfesores(stAlumno usuario)
{

}
void comentariosPorProfesor(stAlumno usuario)
{

}
void agregarProfesor(stAlumno usuario)
{

}
void menuModificacionProfesor(stAlumno usuario)
{

}
