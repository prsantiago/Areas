#include <iostream>

using namespace std;

const double PI = 3.141592;
void triangulo();
void cuadrado();
void circulo();

int main()
{
    int opcion;

    do {
        cout << "Areas disponibles" << endl;
        cout << "1-. Triangulo" << endl;
        cout << "2-. Cuadrado" << endl;
        cout << "3-. Circulo" << endl;
        cout << "4-. Salida del programa" << endl << endl;
        cout << "Que opcion deseas?" << endl;
        cin >> opcion;

        switch(opcion) {
            case 1: triangulo(); break;
            case 2: cuadrado(); break;
            case 3: circulo(); break;
            case 4: continue;
            default: cout << endl << "Solo numeros de 1 a 4" << endl << endl;
        }

    } while (opcion!=4);

    return 0;
}

void triangulo() {
    double base, altura;

    cout << endl << "Ingrese la base" << endl;
    cin >> base;
    cout << "Ingresa la altura" << endl;
    cin >> altura;

    cout << "Area del triangulo = " << (base*altura)/2 << endl << endl;
}

void cuadrado() {
    double lado;

    cout << endl << "Ingrese el lado" << endl;
    cin >> lado;

    cout << "Area del cuadrado = " << lado*lado << endl << endl;
}

void circulo() {
    double radio;

    cout << endl << "Ingrese el radio" << endl;
    cin >> radio;

    cout << "Area del circulo = " << radio*radio*PI << endl << endl;
}
