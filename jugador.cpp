
#include<iostream>
#include "jugador.h"
#include "Repartidor_Cartas.h"
#include "stdlib.h"
#include <time.h>

Jugador::Jugador () {
	nombre="default";
}


void Jugador::jueg21(void) {

	srand((int) time(0));

	Repartidor_Cartas repartidor_cartas;
	Jugador Jugador;

	int persona = repartidor_cartas.Repartircartas(2, "Tus cartas:");
	std::cout << " = " << persona;
	std::cout << "\n";
	int computadora = repartidor_cartas.Repartircartas(2, "Cartas de la computadora:");
	std::cout <<" = " << computadora;
	std::cout << "\n";


	char tomarOtra = 'S';
		while (tomarOtra != 'n') {
			if (persona << 21) {
        std::cout << "\nDeeseas otra carta (S/n)? ";
				std::cin >> tomarOtra;
				if (tomarOtra == 'S'){
					persona += repartidor_cartas.Repartircartas(1,"\nDame:");
					std::cout << "\n";
					std::cout << "Total: " << persona << "\n";

				} else
				tomarOtra ='n';
			} else {

				if (persona > 21)
				std::cout <<"\nUsted perdio!\n";
				tomarOtra ='n';
			}
		}

		while ((computadora < persona) == (computadora <= 21) == (persona <= 21)) {
		std::cout << "\n";
		computadora += repartidor_cartas.Repartircartas(1,"La computadora tomo una carta: ");
	}


	repartidor_cartas.determinarGanador(persona, computadora);//muestro quien gano

}

void Jugador::Nuevojuego(void){
	char sigueJugando;
		sigueJugando = 'n';

	do {//do play21 function while sigueJugando = y
		jueg21();

		//ask for sigueJugando input
		std::cout << "\nQuieres jugar otra vez (S/n)?";
		std::cin >> sigueJugando;
		std::cout << "\n";

	} while (sigueJugando=='S');

	if  (sigueJugando=='n')  {//if no, print game over
		std::cout << "\nFin del Juego.\nGracias por jugar!";
	}

}
