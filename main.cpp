#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 40;

int lectura(string nombre[], float tareas[], float examenes[], float programas[])
{
    int neto = 1;
    int op;

    do {
        cout << "Ingrese el primer apellido del alumno"<< endl;
        cin >> nombre[neto];
        cout << "Ingrese la calificacion de las tareas" << endl;
        cin >> tareas[neto];
        cout << "Ingrese la calificacion de los programas" << endl;
        cin >> programas[neto];
        cout << "Ingrese la calificacion de los examenes" << endl;
        cin >> examenes[neto];
        cout << "Desea ingresar mas alumnos?" << endl;
        cout << "1. Si. 2.No" << endl;
        cin >> op;
        if (op==1) {
            neto++;
        }
    } while (neto <= MAX && op==1);

    return neto;

}

void calificacion (float tareas[], float examenes[], float programas[], int neto, float cafi[])
{
    for (int I=1; I<=neto; I++) {
        cafi[I]= 0.1*tareas[I] + 0.5*examenes[I] + 0.4*programas[I];

    }
}

void muestra (string nombre[], float tareas[], float examenes[], float programas[], int neto, float cafi[])
{

    cout << "Nombre" << right << setw(15) << "Tareas" << right << setw(15) << "Examenes" << right << setw(15) << "Programas" << right << setw(15) << "Final" << endl;

    for (int I=1; I<=neto; I++) {
        cout << nombre[I] << right << setw(15) << tareas[I] << right << setw(15) << examenes[I] << right << setw(15) << programas[I] << right << setw(15) <<cafi[I] << endl;
    }
}

 int main ()
{
	string nombre[MAX];
	int neto;
	float tareas[MAX], examenes [MAX], programas [MAX], cafi [MAX];
    neto = lectura (nombre, tareas, examenes, programas);
    calificacion (tareas, examenes, programas, neto, cafi);
    muestra (nombre, tareas,examenes, programas, neto, cafi);
    return 0;
}
