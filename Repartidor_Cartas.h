
#ifndef Repartidor_Cartas_H_
#define Repartidor_Cartas_H_

#include<iostream>


class Repartidor_Cartas {
public:
	int Repartircartas(int Numerocartas, std:: string mensaje);
	void determinarGanador(int persona, int computadora);
	int Barajar(int limiteInferior, int limiteSuperior);
	Repartidor_Cartas();

private:
	int Puntajepersonaa;
	int Puntajecomputadora;

};

#endif
