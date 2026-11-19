#include <iostream>
#include <string>
using namespace std;

// CLASE CLIENTE
class Cliente {
private:
    string nombre;
    string direccion;
    string telefono;
public:
    Cliente(string, string, string);
    string getNombre();
    string getDireccion();
    string getTelefono();
    void mostrarCliente();
};

Cliente::Cliente(string n, string d, string t) {
    nombre = n;
    direccion = d;
    telefono = t;
}

string Cliente::getNombre() {
    return nombre;
}

string Cliente::getDireccion() {
    return direccion;
}

string Cliente::getTelefono() {
    return telefono;
}

void Cliente::mostrarCliente() {
    cout << "Cliente: " << nombre << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Telefono: " << telefono << endl;
}

// CLASE AUTO
class Auto {
private:
    string marca;
    string modelo;
    string color;
    string placas;
public:
    Auto(string, string, string, string);
    string getMarca();
    string getModelo();
    string getColor();
    string getPlacas();
    void mostrarAuto();
};

Auto::Auto(string m, string mod, string c, string p) {
    marca = m;
    modelo = mod;
    color = c;
    placas = p;
}

string Auto::getMarca() {
    return marca;
}

string Auto::getModelo() {
    return modelo;
}

string Auto::getColor() {
    return color;
}

string Auto::getPlacas() {
    return placas;
}

void Auto::mostrarAuto() {
    cout << "Auto: " << marca << " " << modelo << endl;
    cout << "Color: " << color << endl;
    cout << "Placas: " << placas << endl;
}

// CLASE ORDEN DE TRABAJO
class OrdenTrabajo {
private:
    int id;
    Cliente *pCliente;
    Auto *pAuto;
public:
    OrdenTrabajo(int);
    int getId();
    void asignarCliente(Cliente *);
    void asignarAuto(Auto *);
    void mostrarOrden();
};

OrdenTrabajo::OrdenTrabajo(int identificador) {
    id = identificador;
    pCliente = NULL;
    pAuto = NULL;
}

int OrdenTrabajo::getId() {
    return id;
}

void OrdenTrabajo::asignarCliente(Cliente *pC) {
    pCliente = pC;
}

void OrdenTrabajo::asignarAuto(Auto *pA) {
    pAuto = pA;
}

void OrdenTrabajo::mostrarOrden() {
    cout << "=== ORDEN DE TRABAJO #" << id << " ===" << endl;
    if (pCliente != NULL) {
        pCliente->mostrarCliente();
    } else {
        cout << "Sin cliente asignado." << endl;
    }

    if (pAuto != NULL) {
        pAuto->mostrarAuto();
    } else {
        cout << "Sin auto asignado." << endl;
    }
}

int main() {
    Cliente c1("Carlos Mendoza", "Av. Bolognesi 450", "952129056");
    Auto a1("Toyota", "Corolla", "Negro", "Z4B-712");

    OrdenTrabajo orden1(1001);
    orden1.asignarCliente(&c1);
    orden1.asignarAuto(&a1);

    orden1.mostrarOrden();

    return 0;
}
