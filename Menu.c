int main(){
	char opcion;
	// Menu:
	// Mensaje: Bienvenido al SNAKE!
	// 		O:JUGAR
	//		L:TABLA DE PUNTOS
	//		P:SALIR DEL JUEGO
	do{
		printf("Bienvenido al SNAKE!\n");
		printf("¿Que deseas hacer?\n");
		scanf("%c", &opcion );
		switch(opcion) {
			case 'O':
				printf("Dandole a esta opcion empezaria el juego\n");
				break;
			case 'L':
				printf("Aqui se mostraria una tabla con los TOP 5 del juego y los puntos que ha conseguido cada uno\n");
				break;
			case 'P':
				printf ("Espero que te lo hayas pasado bien, adios!\n");
				return 0;
			default:
				printf("Opcion equivocada, escoge de nuevo\n");
		}
	}
}
