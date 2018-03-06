#include "Reloj.h"
#include <iostream>
#include <ctime>
using namespace std;


int main(){
	Reloj R1;

	while(1>0){
	/* fecha/hora actual basado en el sistema actual */
		time_t now = time(0);

	/* Objeto de una estructura tm con fecha/hora local */
		tm * time = localtime(&now);
		R1.setSegundo(time->tm_sec);
		R1.setMinuto(time->tm_min);
		R1.setHora(time->tm_hour);
		R1.imprimir();
		system("cls");
	}
	return 0;
}


