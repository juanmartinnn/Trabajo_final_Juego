
#include<iostream>
#include "Repartidor_Cartas.h"
#include "jugador.h"

using namespace std;

int main() {

	cout <<"Juego_de_cartas_21\n" << endl;

	Jugador humano;

	if (humano.nombre=="default") {
		string Nombrejugador;

		cout << "Ingrese su nombre: "<<endl;
		cin>>Nombrejugador;
		humano.nombre = Nombrejugador;
		cout<<endl;
	}

	cout <<"Bienvenido "  "Vamos a jugar!\n"<< endl;

	humano.Nuevojuego();

	return 0;

}
