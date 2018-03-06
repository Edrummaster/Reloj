#include "Reloj - copia.h"
#include <iostream>
#include <ctime>
#include <windows.h>
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

void Reloj::temporizador(){
	int ho; 
	int min; 
	int seg;
	cout << "Esta en modo temporizador" << endl;
	cout << "ingrese numero de horas: ";
	cin >> ho;
	cout << "ingrese los minutos: ";
	cin >> min;
	cout << "ingrese los segundos: ";
	cin >> seg;
	while (ho >= 0 || min >=0 || seg > 0 ){
		if (seg== 0)
		{
			seg = 59;
			min--;	
			if (min==0)
			{
			min=59;
			ho--;
			}			
		}			
		cout << ho << ":" << min <<":" << seg;
		Sleep(1000);
		system("cls");
		seg--;
	}
	cout <<"time's up!";
	Sleep(1000);
}

void Reloj::empezar(){
	while(1>0){
		time_t now = time(0);
		tm * time = localtime(&now);
		Reloj::setSegundo(time->tm_sec);
		Reloj::setMinuto(time->tm_min);
		Reloj::setHora(time->tm_hour);
		Reloj::imprimir();
		system("cls");
	}
}
