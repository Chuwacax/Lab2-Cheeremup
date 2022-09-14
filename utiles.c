#include <windows.h>
#define LIMPIAPANTALLA system("cls")
void gotoxy(int, int);
void color();
void getColors();

void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void color(int _color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _color);
}

void getColors()
{
    for(int i = 0; i < 255; i++)
    {
        color(i);
        printf("%d  ABCDE abcde 1234 |@#&   \n",i);
    }

    color(7);
}

void printMessage(char mensaje[])
{
    printf_s("\n\t%s", mensaje);
}

void ocultarCursor(int accion) ///esta funcion oculta "0" o muestra "1" el cursor y ademar setea su tamaño
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = accion;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void letra_C(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c",32,32,219,219,219,219,219);
    gotoxy(x,y+1);
    printf("%c%c%c",32,219, 219);
    gotoxy(x,y+2);
    printf("%c%c",219,219);
    gotoxy(x,y+3);
    printf("%c%c",219,219);
    gotoxy(x,y+4);
    printf("%c%c",219,219);
    gotoxy(x,y+5);
    printf("%c%c%c",32,219, 219);
    gotoxy(x,y+6);
    printf("%c%c%c%c%c%c%c",32,32,219,219,219,219,219);
}

void letra_H(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+1);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+2);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+3);
    printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
    gotoxy(x,y+4);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+5);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+6);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
}

void letra_E(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
    gotoxy(x,y+1);
    printf("%c%c%",219,219);
    gotoxy(x,y+2);
    printf("%c%c%",219,219);
    gotoxy(x,y+3);
    printf("%c%c%c%c%c",219,219,219,219,219);
    gotoxy(x,y+4);
    printf("%c%c%",219,219);
    gotoxy(x,y+5);
    printf("%c%c%",219,219);
    gotoxy(x,y+6);
    printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
}

void letra_R(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
    gotoxy(x,y+1);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+2);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+3);
    printf("%c%c%c%c%c%c%c",219,219,219,219,219,219,219);
    gotoxy(x,y+4);
    printf("%c%c%c%c%c%c",219,219,32,32,219,219);
    gotoxy(x,y+5);
    printf("%c%c%c%c%c%c%c",219,219,32,32,32,219,219);
    gotoxy(x,y+6);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
}

void letra_M(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c%c",219,219,219,32,32,219,219,219);
    gotoxy(x,y+1);
    printf("%c%c%c%c%c%c%c%c",219,219,32,219,219,32,219,219);
    gotoxy(x,y+2);
    printf("%c%c%c%c%c%c%c%c",219,219,32,219,219,32,219,219);
    gotoxy(x,y+3);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+4);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+5);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+6);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
}

void apos(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c",32,32,219,219);
    gotoxy(x,y+1);
    printf("%c%c%c%c",32,219,219,32);
    gotoxy(x,y+2);
    printf("%c%c%c%c",219,219,32,32);
    gotoxy(x,y+3);
    printf("%c",219);
}


void letra_U(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+1);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+2);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+3);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+4);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+5);
    printf("%c%c%c%c%c%c%c%c",32,219,32,32,32,32,219,32);
    gotoxy(x,y+6);
    printf("%c%c%c%c%c%c%c%c",32,32,219,219,219,219,32,32);
}

void letra_P(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219);
    gotoxy(x,y+1);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+2);
    printf("%c%c%c%c%c%c%c%c",219,219,32,32,32,32,219,219);
    gotoxy(x,y+3);
    printf("%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,32);
    gotoxy(x,y+4);
    printf("%c%c",219,219);
    gotoxy(x,y+5);
    printf("%c%c",219,219);
    gotoxy(x,y+6);
    printf("%c%c",219,219);
}

void flecha(int x, int y)
{
    ocultarCursor(0);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c",32,32,32,219,32,32,32);
    gotoxy(x,y+1);
    printf("%c%c%c%c%c%c%c",32,32,219,219,219,32,32);
    gotoxy(x,y+2);
    printf("%c%c%c%c%c%c%c",32,219,32,219,32,219,32);
    gotoxy(x,y+3);
    printf("%c%c%c%c%c%c%c",219,32,32,219,32,32,219);
    gotoxy(x,y+4);
    printf("%c%c%c%c%c%c%c",32,32,32,219,32,32,32);
    gotoxy(x,y+5);
    printf("%c%c%c%c%c%c%c",32,32,219,219,32,32,32);
    gotoxy(x,y+6);
    printf("%c%c%c%c%c%c%c",219,219,32,32,32,32);
}

void logo(int x, int y)
{
    letra_C(x,y);
    letra_H(x+10,y);
    letra_E(x+20,y);
    letra_E(x+30,y);
    letra_R(x+40,y);
    apos(x+50,y);
    letra_E(x+55,y);
    letra_M(x+65,y);

    letra_U(x+85,y);
    letra_P(x+95,y);
    flecha(x+105,y);
}

void borde(int x, int y)
{
    gotoxy(x,y);

    ///1er marco//
    for(int i = 0 ; i< 160 ; i++)
    {
        printf("%c", 205);
    }
    for(int i = 0 ; i<48 ; i++)
    {
        gotoxy(x,i+1);
        printf("%c", 186);
        gotoxy(x+160,i+1);
        printf("%c", 186);
    }
    gotoxy(x,49);
    for(int i = 0 ; i< 160 ; i++)
    {
        printf("%c", 205);
    }
    gotoxy(x,y);
    printf("%c", 201);
    gotoxy(x+160,y);
    printf("%c", 187);
    gotoxy(x,49);
    printf("%c", 200);
    gotoxy(x+160,49);
    printf("%c", 188);

    ///2do marco///
    gotoxy(x+2,y+1);
    for(int i = 0 ; i< 157 ; i++)
    {
        printf("%c", 205);
    }
    for(int i = 0 ; i<46 ; i++)
    {
        gotoxy(x+2,y+2+i);
        printf("%c", 186);
        gotoxy(x+158,y+2+i);
        printf("%c", 186);
    }
    gotoxy(x+2,y+48);
    for(int i = 0 ; i< 157 ; i++)
    {
        printf("%c", 205);
    }
    gotoxy(x+2,y+1);
    printf("%c", 201);
    gotoxy(x+158,y+1);
    printf("%c", 187);
    gotoxy(x+2,48);
    printf("%c", 200);
    gotoxy(x+158,48);
    printf("%c", 188);


}

void screen1(int x, int y)
{
    for(int i = 0; i<157 ; i++)
    {
        for(int j = 0; j <46 ; j++)
        {
            if(i%8==0 && j%4==0)
            {
                gotoxy(x+i,y+j);
                printf("%c", 178);

            }
        }
    }
}

void screen2()
{
    for(int i = 0; i<210 ; i++)
    {
        for(int j = 0; j <50 ; j++)
        {
            if(i%3==0 && j%3==0)
            {
                gotoxy(i,j);
                printf("%c", 254);

            }
        }
    }
}

void transicion(int x, int y)
{
    for(int i=0; i<20; i++)
    {
        color(rand()%10);
        screen1(x,y);
        Sleep(10);
    }
    color(112);
}
