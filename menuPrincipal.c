#include "stAlumno.h"
#include "utiles.h"
#define ALUMNOS "alumnos.dat"
#define PROFESORES "profesores.dat"

void menuPrincipalU(stAlumno);
void buscaProfesor(stAlumno);
void buscaCursada(stAlumno);
void listaProfesores(stAlumno);
void listaCursadas(stAlumno);
void menuUsuario(stAlumno);
void buscaProfesorPorNombre(stAlumno);
void buscaProfesorPorApellido(stAlumno);
void menuUsuario(stAlumno);

void menuPrincipalU(stAlumno usuario)
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
        gotoxy(X-20,Y+2);        printf("1. BUSCAR PROFESOR\n");
        gotoxy(X-20,Y+4);
        printf("2. BUSCAR CURSADA\n");
        gotoxy(X-20,Y+6);
        printf("3. LISTA DE PROFESORES\n");
        gotoxy(X+20,Y+2);
        printf("4. LISTA DE CURSADAS\n");
        gotoxy(X+20,Y+4);
        printf("5. CONFIGURACION DE USUARIO\n");
        gotoxy(X+20,Y+6);
        printf("6. SALIR\n");

        CLEANBUFFER;
        opcion = getch();
    }
    while(opcion<'1' || opcion>'6');

    switch(opcion)
    {
    case '1':
        buscaProfesor(usuario);
        break;
    case '2':
        buscaCursada(usuario);
        break;
    case '3':
        listaProfesores(usuario);
        break;
    case '4':
        listaCursadas(usuario);
        break;
    case '5':
        menuUsuario(usuario);
        break;
    case '6':
        inicioAplicacion();
        break;
    };

}

void buscaProfesor(stAlumno usuario)
{
    char opcion;
    do
    {
        LIMPIAPANTALLA;
        logo(50,2);
        printf("1. BUSCAR POR NOMBRE\n");
        printf("2. BUSCAR POR APELLIDO\n");
        printf("3. VOLVER AL MENU PRINCIPAL\n");

        CLEANBUFFER;

        opcion = getch();

    }
    while(opcion<'1' || opcion>'3');

    switch(opcion)
    {
    case '1':
        buscaProfesorPorNombre(usuario);
        break;
    case '2':
        buscaProfesorPorApellido(usuario);
        break;
    case '3':
        menuPrincipalU(usuario);
        break;
    };

}

void buscaProfesorPorNombre(stAlumno usuario)
{

}

void buscaProfesorPorApellido(stAlumno usuario)
{

}

void buscaCursada(stAlumno usuario)
{

}

void listaProfesores(stAlumno usuario)
{
    FILE * archivo=fopen(PROFESORES, "rb");

    if(archivo)
    {
        fclose(archivo);
    }
}
void listaCursadas(stAlumno usuario)
{

}

void menuUsuario(stAlumno usuario)
{

}
