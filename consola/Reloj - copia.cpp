#include "Reloj.h"
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
	//ingresa el numero de horas a temporizar
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

	while (ho >= 0 && min >=0 && seg > 0 ){
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

void Reloj::empezar(Reloj R){
	while(1>0){
	/* fecha/hora actual basado en el sistema actual */
		time_t now = time(0);

	/* Objeto de una estructura tm con fecha/hora local */
		tm * time = localtime(&now);
		R.setSegundo(time->tm_sec);
		R.setMinuto(time->tm_min);
		R.setHora(time->tm_hour);
		R.imprimir();
		

		system("cls");
	}
}