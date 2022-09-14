#include "stAlumno.h"
#include "utiles.h"
#define ALUMNOS "alumnos.dat"
#define PROFESORES "profesores.dat"
#define BORDE borde(30,0);

void inicioAplicacion();

void inicioAplicacion()
{
    char opcion;
    int posicionX = 100;
    int posicionY = 6;

    LIMPIAPANTALLA;
    do
    {
        LIMPIAPANTALLA;
        BORDE;
        color(112);
        logo(50,posicionY);
        gotoxy(posicionX,posicionY+10);
        printf("BIENVENIDOS A CHEER'EM UP \n\n");
        gotoxy(posicionX,posicionY+12);
        printf("\t1.LOGIN\n");
        gotoxy(posicionX,posicionY+14);
        printf("\t2.REGISTARSE\n");
        gotoxy(posicionX,posicionY+16);
        printf("\t3.SALIR\n");

        CLEANBUFFER;
        opcion = getch();
    }
    while(opcion<'1' || opcion>'3');


    switch(opcion)
    {
    case '1':
        login();
        break;
    case '2':
        registrarse();
        break;
    case '3':
        salir();
        break;
    };

}


void login()
{
    int intentos = 0;
    int acceso = 0;
    char username[20];
    char password[20];
    char caracter;
    int i = 0;
    int Enter=13;
    int Espacio=8;
    int longitud=10;

    int X = 100;
    int Y = 6;

    do
    {
        LIMPIAPANTALLA;
        logo(50,Y);
        BORDE;
        gotoxy(X,Y+10);
        printf("USUARIO: ");
        CLEANBUFFER;
        gets(username);

        gotoxy(X,Y+12);
        printf("PASSWORD: ");
        CLEANBUFFER;

        i = 0;
        while (caracter = getch())
        {
            if (caracter == Enter)
            {
                password[i] = '\0';
                break;
            }
            else if (caracter == Espacio)
            {
                if (i > 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else
            {
                if (i < longitud)
                {
                    printf("*");
                    password[i] = caracter;
                    i++;
                }
            }
        }

        /// NOS PONEMOS A BUSCAR SI EL USUARIO EXISTE EN EL ARCHIVO ///

        FILE * archivo = fopen(ALUMNOS, "rb");

        stAlumno aux;
        int flag = 0;

        if(archivo)
        {
            while(fread(&aux, sizeof(stAlumno), 1, archivo)>0 && flag == 0)
            {
                if(strcmp(username, aux.user)==0 && strcmp(password,aux.password)==0)
                {
                    if(aux.estado==0)
                    {
                        flag = 1;
                    }
                }
            }
            fclose(archivo);
        }

        /// EXISTE O NO EXITE EL USUARIO??///
        if(flag == 1)
        {
            if(aux.acceso == 0)
            {
                acceso = 1;
                menuPrincipalU(aux);
            }
            else
            {
                acceso = 1;
                menuPrincipalAdmin(aux);
            }
        }
        else
        {
            intentos++;
            if(intentos<3)
            {
                gotoxy(X-5,Y+14);
                printf("USUARIO Y/O CONTRASENA INVALIDA");
                gotoxy(X-1,Y+15);
                printf("INTENTE NUEVAMENTE...");
                Sleep(1500);
            }
            else
            {
                gotoxy(X-5,Y+14);
                printf("HA EXCEDIDO EL NUMERO DE INTENTOS");
                Sleep(1500);
                inicioAplicacion();
            }
        }
    }
    while(intentos<3 && acceso==0);

}

void salir()
{

}
