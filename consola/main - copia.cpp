#include "Reloj - copia.h"
#include <iostream>
#include <ctime>
using namespace std;


int main(){
	Reloj R1;
	int n;
	cout<<"presione 1 Reloj"<<endl;
	cout<<"presione 2 Temporizador"<<endl;
	cout<<"presione 3 Chrono"<<endl;
	cout<<"-->";
	cin>> n;
	switch(n) {
   		case 1: R1.empezar();
   		case 2: R1.temporizador();
   		case 3: R1.chrono();
	}
	return 0;
}


