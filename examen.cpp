#include <iostream>
#include <string>
using namespace std;

// CLASE FECHA
class Fecha {
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha(int, int, int);
    int getDia();
    int getMes();
    int getAnio();
    void mostrarFecha();
};

Fecha::Fecha(int d, int m, int a) {
    dia = d;
    mes = m;
    anio = a;
}

int Fecha::getDia() {
    return dia;
}

int Fecha::getMes() {
    return mes;
}

int Fecha::getAnio() {
    return anio;
}

void Fecha::mostrarFecha() {
    cout << dia << "/" << mes << "/" << anio;
}

// CLASE HORA
class Hora {
private:
    int hora;
    int minuto;
public:
    Hora(int, int);
    int getHora();
    int getMinuto();
    void mostrarHora();
};

Hora::Hora(int h, int m) {
    hora = h;
    minuto = m;
}

int Hora::getHora() {
    return hora;
}

int Hora::getMinuto() {
    return minuto;
}

void Hora::mostrarHora() {
    cout << hora << ":" << minuto;
}

// CLASE EXAMEN
class Examen {
private:
    string asignatura;
    string ciclo;
    Fecha *pFecha;
    Hora *pHora;
public:
    Examen(string, string, int, int, int, int, int);
    string getAsignatura();
    string getCiclo();
    void mostrarExamen();
};

Examen::Examen(string asig, string cic, int d, int m, int a, int h, int min) {
    asignatura = asig;
    ciclo = cic;
    pFecha = new Fecha(d, m, a);
    pHora = new Hora(h, min);
}

string Examen::getAsignatura() {
    return asignatura;
}

string Examen::getCiclo() {
    return ciclo;
}

void Examen::mostrarExamen() {
    cout << "Asignatura: " << asignatura << endl;
    cout << "Ciclo: " << ciclo << endl;
    cout << "Fecha: ";
    pFecha->mostrarFecha();
    cout << endl;
    cout << "Hora: ";
    pHora->mostrarHora();
    cout << endl;
}

int main() {
    Examen ex1("Programacion Orientada a Objetos", "III", 25, 11, 2026, 10, 30);
    ex1.mostrarExamen();

    return 0;
}
