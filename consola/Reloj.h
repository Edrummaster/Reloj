#ifndef _RELOJ_H_
#define _RELOJ_H_



class Reloj{
	private:
		int hora;
		int minuto;
		int segundo;
	public:
		Reloj();
		void imprimir();
		int setHora(int h);
		int setMinuto(int m);
		int setSegundo(int s);

}; 

#endif
