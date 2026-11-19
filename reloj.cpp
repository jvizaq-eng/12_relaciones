#include <iostream>
#include <string>
using namespace std;

// CLASE DISPLAY
class Display {
private:
    string tipo;
public:
    Display(string = "digital");
    string getTipo();
};

Display::Display(string t) {
    tipo = t;
}

string Display::getTipo() {
    return tipo;
}

// CLASE HORA
class Hora {
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

Hora::Hora(int h, int m, int s) {
    hora = h;
    minutos = m;
    segundos = s;
}

int Hora::getHora() {
    return hora;
}

int Hora::getMinutos() {
    return minutos;
}

int Hora::getSegundos() {
    return segundos;
}

// CLASE RELOJ
class Reloj {
private:
    Display *pDisplay;
    Hora *pHora;
public:
    Reloj(int, int, int);
    void asignarDisplay(Display *);
    void mostrarReloj();
};

Reloj::Reloj(int h, int m, int s) {
    pDisplay = NULL;
    pHora = new Hora(h, m, s);
}

void Reloj::asignarDisplay(Display *pD) {
    pDisplay = pD;
}

void Reloj::mostrarReloj() {
    if (pDisplay == NULL) {
        cout << "No hay un display asignado." << endl;
        return;
    }

    int h = pHora->getHora();
    int m = pHora->getMinutos();
    int s = pHora->getSegundos();

    if (pDisplay->getTipo() == "digital") {
        cout << "[" << h << ":" << m << ":" << s << "]" << endl;
    } else if (pDisplay->getTipo() == "analogico") {
        cout << "-->" << h << ":" << m << ":" << s << "<--" << endl;
    }
}

int main() {
    Display d1("digital");
    Display d2("analogico");

    Reloj reloj1(10, 15, 55);
    Reloj reloj2(10, 15, 55);

    reloj1.asignarDisplay(&d1);
    reloj2.asignarDisplay(&d2);

    reloj1.mostrarReloj();
    reloj2.mostrarReloj();

    return 0;
}
