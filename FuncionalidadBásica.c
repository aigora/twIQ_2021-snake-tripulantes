#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>

#define ARRIBA 72
#define DERECHA 77
#define ABAJO 80
#define IZQUIERDA 75
#define ESC 27

int cuerpo[200][2];
int n=1, tamaño=10, direccion=3;
int x=10, y=12;
int xc=30, yc=15;
int velocidad=60;
char tecla;

void gotoxy(int x, int y) {
  HANDLE hCon;
  COORD dwPos;
  
  dwPos.X=x;
  dwPos.Y=y;
  hCon=GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleCursorPosition(hCon,dwPos);
  
}

void teclear() {
  if(kbhit()) {
    tecla = getch();
    switch(tecla) {
      case ARRIBA: if(dir !=2) dir=1;
        break;
      case DERECHA: if(dir !=4) dir=3;
        break;
      case ABAJO: if(dir!=1) dir=2;
        break;
      case IZQUIERDA: if(dir!=3) dir=4;
        break;
    }
  }
}
