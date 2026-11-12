#include <iostream>
#include <string.h>
using namespace std;

//DISPLAY
class Display{
	private:
		//string tipo = "digital";
	public:	
		Display(string);
		string getTipo();
};

Display :: Display(string t){
	tipo = t;
}

string Display :: getTipo(){
	return tipo;
}

//HORA
class Hora{
	private:
		int hora;
		int minutos;
		int segundos;
	public:
		Hora(int, int, int);
		int getHora();
		int getMinutos();
		int getSegundos();
};

Hora :: Hora(int h, int m, int s){
	hora = h;
	minutos = m;
	segundos = s;
} 

int Hora :: getHora(){
	return hora;
}

int Hora :: getMinutos(){
	return minutos;
}

int Hora :: getSegundos(){
	return segundos;
}

//CLASE BASE RELOJ
class Reloj{
	private:
		Display *pDisplay;
		Hora *pHora;
	public:
		Reloj(int, int, int);
		void asignarDisplay(Display *);
		void mostrarReloj();
};

Reloj :: Reloj(){
	pDisplay = NULL;
	pHora = NULL;
}

//void Reloj :: mostrarReloj(){
	if (pDisplay == NULL){
		cout << 
	} else { 
		cout << 
	}
}
//void Reloj :: mostrarReloj(){
	if (pHora == NULL){
		cout << 
	} else { 
		cout << "La hora es [" << hora << ":" << minutos << ":" << segundos << "]." << endl;
		//pHora -> mostrarReloj();
	}
}

void Reloj :: asignarDisplay(Display *pR){
	pDisplay = pR;
}

int main(){
	Display d();
	Hora q("10", "15", "55");
	Reloj reloj1();
	reloj1.
	
}
