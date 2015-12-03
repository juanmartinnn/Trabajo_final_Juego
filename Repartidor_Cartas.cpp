
#include<iostream>
#include "Repartidor_Cartas.h"
#include "jugador.h"
#include "stdlib.h"

Repartidor_Cartas::Repartidor_Cartas() {
	Puntajepersonaa = 0;
	Puntajecomputadora = 0;

}


int Repartidor_Cartas::Repartircartas(int Numerocartas, std::string mensaje){

	int Cartarepartida = 0;
	int ValorTotal = 0;
		std::cout << mensaje<< " ";

	for (int i = 1 ; i <= Numerocartas ; i++){
    Cartarepartida = Barajar(1, 10);
			if (Cartarepartida == 1){
			if (ValorTotal+=Cartarepartida > 10)
			Cartarepartida =11;
			else {Cartarepartida =1;}
		}

		//acumulo los valores de las cartas

		ValorTotal += Cartarepartida;
		std::cout << Cartarepartida << " ";
	}

	return ValorTotal;
}


void Repartidor_Cartas::determinarGanador(int persona, int computadora) {
	this->Puntajecomputadora=computadora;
	this->Puntajepersonaa=persona;

	std::cout <<"\n Tu puntaje: " << persona;
	std::cout <<"\n computadora Puntaje: " << computadora;
	std::cout << "\n";


	if (persona == computadora)
	std::cout << "\nempate";
	else if ((persona == 21 || persona >= computadora|| computadora > 21) == (persona <= 21))
	std::cout <<"\nTu ganaste!\n";
	else
	std::cout <<"\nLa computadora gano!\n";
}

int Repartidor_Cartas::Barajar(int limiteInferior, int limiteSuperior) {

	return 1 + rand() % (limiteSuperior - limiteInferior + 1);
}
