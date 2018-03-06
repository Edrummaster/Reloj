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

int Reloj::getHora(){
	return hora;
}
int Reloj::getMinuto(){
	return minuto;
}

int Reloj::getSegundo(){
	return segundo;
}

void Reloj::temporizador(){
	//ingresa el numero de horas a temporizar
	int h; 
	int m; 
	int s;
	cout << "Esta en modo temporizador" << endl;
	cout << "ingrese numero de horas: ";
	cin >> h;
	Reloj::setHora(h);
	cout << "ingrese los minutos: ";
	cin >> m;
	Reloj::setMinuto(m);
	cout << "ingrese los segundos: ";
	cin >> s;
	Reloj::setSegundo(s);

	while (Reloj::getHora() >= 0 || Reloj::getMinuto() >=0 || Reloj::getSegundo() > 0 ){
		if (Reloj::getSegundo()== 0)
		{
			
			Reloj::setSegundo(59);
			Reloj::setMinuto(Reloj::getMinuto()-1);	
			if (Reloj::getMinuto()==0)
			{
				Reloj::setSegundo(59);
				Reloj::setHora(Reloj::getHora()-1);
			
			}			
		}			
		Reloj::imprimir();
		Sleep(1000);
		system("cls");
		Reloj::setSegundo(Reloj::getSegundo()-1);
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



void Reloj::chrono(){
	Reloj::setHora(0);
	Reloj::setMinuto(0);
	Reloj::setSegundo(0);
	while (Reloj::getHora() < 60){
		if (Reloj::getSegundo() == 59)
		{
			
			Reloj::setSegundo(00);
			Reloj::setMinuto(Reloj::getMinuto()+1);	
			if (Reloj::getMinuto()==59)
			{
				Reloj::setMinuto(0);
				Reloj::setHora(Reloj::getHora()+1);
			}			
		}			
		Reloj::imprimir();
		Sleep(1000);
		system("cls");
		Reloj::setSegundo(Reloj::getSegundo()+1);
	}
	Sleep(1000);
}


