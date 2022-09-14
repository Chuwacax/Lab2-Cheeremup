#include "stAlumno.h"
#include "utiles.h"
#define ALUMNOS "alumnos.dat"
#define PROFESORES "profesores.dat"
#define BORDE borde(30,0);

void registrarse();
int comprobarNombreUsuario(char nombre[]);
int comprobarEmail(char email[]);

void registrarse()
{
    int X = 80;
    int Y = 10;
    stAlumno nuevo;

    LIMPIAPANTALLA;
    BORDE;
    gotoxy(X,Y);
    printf("NOMBRE: ");
    CLEANBUFFER;
    gets(nuevo.nombre);

    LIMPIAPANTALLA;
    BORDE;
    gotoxy(X,Y+2);
    printf("APELLIDO: ");
    CLEANBUFFER;
    gets(nuevo.apellido);

    int validador = 0;
    char username[10];

    /// VALIDACION DE NOMBRE DE USUARIO ///
    do
    {
        LIMPIAPANTALLA;
        BORDE;
        gotoxy(X,Y+4);
        printf("NOMBRE DE USUARIO: ");
        CLEANBUFFER;
        gets(username);

        validador = comprobarNombreUsuario(username);

        if(validador !=0)
        {
            // system("cls");
            printf("USUARIO YA EXISTENTE\n");
            printf("INTENTE NUEVAMENTE\n");
            system("pause");
        }
    }
    while(validador!=0);

    strcpy(nuevo.user, username);

    LIMPIAPANTALLA;
    BORDE;
    gotoxy(X,Y+6);
    printf("CONTRASENIA: ");
    CLEANBUFFER;
    gets(nuevo.password);

    char email[20];

    /// VALIDACION DE EMAIL ///
    do
    {
        LIMPIAPANTALLA;
        BORDE;
        gotoxy(X,Y+8);
        printf("EMAIL: ");
        CLEANBUFFER;
        gets(email);

        validador = comprobarEmail(email);

        if(validador!=0)
        {
            printf("EL EMAIL INGRESADO ES INCORRECTO\n");
            printf("INTENTELO NUEVAMENTE\n");
            system("pause");
        }
    }
    while(validador!=0);

    strcpy(nuevo.email, email);

    LIMPIAPANTALLA;
    BORDE;
    gotoxy(X,Y+10);
    printf("FECHA DE NACIMIENTO: ");
    CLEANBUFFER;
    gets(nuevo.fechaNac);

    /// VALIDACION DEL GENERO ///
    char genero;
    do
    {
        LIMPIAPANTALLA;
        BORDE;
        gotoxy(X,Y+12);
        printf("GENERO (m: masculino - f:femenino - x: sin especificar): ");
        CLEANBUFFER;
        scanf("%c", &genero);

        if(genero!='m' && genero !='f' && genero !='x')
        {
            printf("EL GENERO INGRESADO ES INCORRECTO\n");
            printf("INTENTE NUEVAMENTE\n");
            system("pause");
        }
    }
    while(genero!='m' && genero !='f' && genero !='x');

    nuevo.genero = genero;

    nuevo.estado = 0;

    nuevo.idUsuario = 0;

    nuevo.acceso = 0;

    ///GUARDAMOS EL NUEVO USUARIO EN EL ARCHIVO///
    FILE * file = fopen(ALUMNOS, "ab");

    if(file)
    {
        fwrite(&nuevo, sizeof(stAlumno), 1,file);
        fclose(file);
    }
    LIMPIAPANTALLA;
    BORDE;
    gotoxy(100,20);
    printf("TE REGISTRASTES CON EXITO!!!\n");

    Sleep(1500);
    inicioAplicacion();

}

int comprobarNombreUsuario(char nombre[])
{
    int flag = 0;
    stAlumno aux;
    FILE * file = fopen(ALUMNOS, "rb");
    if(file)
    {
        while(fread(&aux, sizeof(stAlumno),1, file)>0 && flag == 0)
        {
            if(strcmp(nombre, aux.user)==0)
            {
                flag = 1;
            }
        }
        fclose(file);
    }
    return flag;
}

int comprobarEmail(char email[])
{
    int rta = 1;
    {
        if(strstr(email, "@")!= NULL && strstr(email, ".")!= NULL)
            rta = 0;
    }
    return rta;
}

