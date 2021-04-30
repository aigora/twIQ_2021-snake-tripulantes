#include<fstream.h>
#include<iostream.h>
int main()
{
 ifstream f;
 char snake;
 f.open("snake.exe");
 if(!f)
 cout << "Error abriendo el juego" << endl;
 else
 {
 snake = f.get();
 while(! f.eof())
 {
 cout << snake << endl;
 dato = f.get();
 }
 f.close();
 }
 return 0;
}
