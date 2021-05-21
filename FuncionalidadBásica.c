#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
 
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESC 27

int main()
{
 OcultaCursor();
 
 pintar();
 gotoxy(xc, yc); printf("%c", 4);
 
 while(tecla != ESC && game_over())
 {
 borrar_cuerpo();
 guardar_posicion();
 dibujar_cuerpo();
 comida();
 teclear();
 teclear();
 
 if(dir == 1) y--;
 if(dir == 2) y++;
 if(dir == 3) x++;
 if(dir == 4) x--;
 
 Sleep(velocidad);
 }
 pintar();
 return 0;
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
