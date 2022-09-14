#ifndef STALUMNO_H_INCLUDED
#define STALUMNO_H_INCLUDED

typedef struct
{
    char nombre[30];
    char apellido[30];
    char fechaNac[10];
    char user[10];
    char password[10];
    char email[20];
    char genero; /// m - masculino; f - femenino - x: sin especificar;
    int estado; /// activo 0 - inactivo 1
    int acceso; /// usuario comun 0 - administrador 1
    int idUsuario; ///autoincremental;
} stAlumno;


#endif // STALUMNO_H_INCLUDED

