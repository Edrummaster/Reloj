#include "Reloj.h"
#include <iostream>
using namespace std;

Reloj::Reloj(){
	hora=0;
	minuto=0;
	segundo=0;
}

int Reloj::setHora(int h){
	return hora=h;
}

int Reloj::setMinuto(int m){
	return minuto=m;
}

int Reloj::setSegundo(int s){
	return segundo=s;
}

void Reloj::imprimir(){
	cout <<hora<<": "<<minuto<<": "<<segundo<<endl;
}

