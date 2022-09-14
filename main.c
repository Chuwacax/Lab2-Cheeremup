#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include "stAlumno.h"
#include "utiles.h"

#define ALUMNOS "alumnos.dat"
#define CURSADAS "cursadas.dat"
#define PROFESORES "profesores.dat"


typedef struct
{
    char nombre[30];
    char apellido[30];
    char email[20];
    char materia[30];
    float puntaje;
    char profesion[30];
    char ciudad[30];
    int idProfesor;
} stProfesor;

typedef struct
{
    char materia[30];
    int idProfesor;
    char comentario[300];
} stReviews;


typedef struct
{
    char comentario[300];
    struct nodo * siguiente;
} nodo;

typedef struct
{
    stProfesor profesor;
    char materia[30];
    nodo * listaReviews;
} sTcelda;

/// PROTOTIPADO ///
stAlumno devuelveAlumno();
void cargarAlumnos(char ruta[]);
stProfesor devolverProfesor();

/// FIN PROTOTIPADO ///

int main()
{
    srand(time(NULL));
    //cargarAlumnos(ALUMNOS);
    system("pause");
    //transicion();
    inicioAplicacion();
    //borde(20,0);
    //leerArchivo(ALUMNOS);

    //cargarProfesores(PROFESORES);
    //leerArchivoProfesores(PROFESORES);

    // cargarCursadas(CURSADAS);
    //leerArchivoCursada(CURSADAS);

    return 0;
}


void cargarAlumnos(char ruta[])
{
    stAlumno aux;
    FILE * file = fopen(ALUMNOS, "wb");

    if(file)
    {
        for(int i = 0 ; i<10 ; i++)
        {
            aux = devuelveAlumno();
            aux.idUsuario = i;
            fwrite(&aux, sizeof(stAlumno), 1, file);
        }
        fclose(file);
    }
}

stAlumno devuelveAlumno()
{
    stAlumno aux;

    char nombre[][30]= {"Leonardo", "Agustin", "Marcos"};
    strcpy(aux.nombre, nombre[rand()%(sizeof(nombre)/30)]);
    char apellido[][30]= {"Tosoni", "Torres", "Abal"};
    strcpy(aux.apellido, apellido[rand()%(sizeof(apellido)/30)]);
    strcpy(aux.fechaNac, "16/05/1988");
    aux.estado = 0;
    strcpy(aux.password, "micuenta");
    aux.genero = 'm';
    strcpy(aux.email, "leotosoni@hotmail.com");
    aux.idUsuario = 0;
    char username[][10]= {"micuenta", "newuser", "nueva"};
    strcpy(aux.user, username[rand()%(sizeof(username)/10)]);

    if(strcmp(aux.user, "nueva")==0)
    {
        aux.acceso = 1;
    }
    else
    {
        aux.acceso = 0;
    }


    return aux;
}

void leerArchivo(char ruta[])
{
    stAlumno aux;
    FILE * file = fopen(ruta, "rb");
    if(file)
    {
        while(fread(&aux, sizeof(stAlumno),1,file)>0)
        {
            mostrarAlumno(aux);
        }
        fclose(file);
    }
}

void mostrarAlumno(stAlumno alumno)
{
    char acceso[10];

    if(alumno.acceso == 0)
    {
        strcpy(acceso, "USER");
    }
    else
    {
        strcpy(acceso, "ADMI");
    }

    printf("NOMBRE: %10s | APELLIDO: %6s | USUARIO: %10s | EMAIL: %s | ACCESO: %s\n", alumno.nombre, alumno.apellido, alumno.user, alumno.email, acceso);
}


void cargarProfesores(char ruta[])
{
    FILE * archivo = fopen(ruta, "ab");

    if(archivo)
    {
        for(int i = 0 ; i<5 ; i++)
        {
            stProfesor nuevo=devolverProfesor();
            fwrite(&nuevo, sizeof(stProfesor), 1, archivo);
        }

        fclose(archivo);
    }
}

stProfesor devolverProfesor()
{
    stProfesor aux;

    printf("NOMBRE: ");
    CLEANBUFFER;
    gets(aux.nombre);
    printf("APELLIDO: ");
    CLEANBUFFER;
    gets(aux.apellido);
    printf("MATERIA: ");
    CLEANBUFFER;
    gets(aux.materia);
    printf("PROFESION: ");
    CLEANBUFFER;
    gets(aux.profesion);
    printf("EMAIL: ");
    CLEANBUFFER;
    gets(aux.email);
    strcpy(aux.ciudad, "Mar del Plata");
    aux.puntaje = 0;
    aux.idProfesor = 0;

    return aux;
}

void leerArchivoProfesores(char ruta[])
{
    FILE * archivo = fopen(ruta, "rb");

    if(archivo)
    {
        stProfesor aux;

        while(fread(&aux, sizeof(stProfesor),1, archivo)>0)
        {
            mostrarProfesor(aux);
        }
        fclose(archivo);
    }
}

void mostrarProfesor(stProfesor profesor)
{
    printf("%10s | %10s | %15s | %15s | %20s | %.0f \n", profesor.nombre, profesor.apellido, profesor.ciudad, profesor.materia, profesor.profesion, profesor.puntaje);

}


void cargarCursadas(char ruta[])
{
    FILE * archivo = fopen(ruta, "wb");

    char cursada[][30]= {"Programacion 1","Matematica","SPD","Laboratorio 1","Ingles 1", "Estadistica", "Metodologia de la Investigacion","AySO","Programacion 2","Laboratorio 2","Ingles 2","Organizacion Empresarial","Organizacion Contable de la Empresa", "Elementos de la Investigacion Operativa", "Programacion 3","Laboratorio 3","Metodologia de Sistemas 1","DABD","Legislacion","Laboratorio 4"};

    int sizeCursada=sizeof(cursada)/30;

    if(archivo)
    {
        for(int i=0; i<sizeCursada ; i++)
        {
            char materia[30];
            strcpy(materia, cursada[i]);
            fwrite(&materia, sizeof(materia), 1, archivo);
        }
        fclose(archivo);
    }
}

void leerArchivoCursada(char ruta[])
{
    FILE * archivo = fopen(ruta, "rb");

    if(archivo)
    {
        char materia[30];
        while(fread(&materia, sizeof(materia), 1, archivo)>0)
        {
            printf("%s\n", materia);
        }
    }
    fclose(archivo);
}
