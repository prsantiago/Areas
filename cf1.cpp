#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 40;

void lectura(int &neto, const int MAX, string nombre [], float tareas [], float examenes[], float programas[])
{
    neto = 1;
    int op;
    nombre[MAX]=nombre[neto];
    tareas[MAX]=tareas[neto];
    examenes[MAX]=examenes[neto];
    programas [MAX]=programas[neto];

    do
        {
            cout << "Ingrese el nombre del alumno"<< endl;
            cin >> nombre[neto];
            cout << "Ingrese la calificación de las tareas"<<endl;
            cin >> tareas [neto];
            cout << "Ingrese la calificación de los programas"<<endl;
            cin >> programas [neto];
            cout << "Ingrese la calificación de los exámenes"<<endl;
            cin >> examenes[neto];
            cout << "¿Desea ingresar más alumnos?" << endl;
            cout << "1. Sí. 2.No" << endl;
            cin >> op;
            if (op==1)
            {
                neto = neto + 1;
            }
         } while ( neto <= MAX && op==1);

}

void calificacion (const float tareas[], const float examenes [], const float programas[],int neto, float cafi[])
{
    for (int I=1; I=neto ;I++)
    {
        cafi[I]=0.1 *tareas[I] + 0.5* examenes[I]+0.4*programas [I];
    }

}

void muestra (const string nombre[], const float tareas[], const float examenes [], const float programas[],int neto, const float cafi[])
{

    cout << "Nombre, Tareas, Exámenes, Programas, Final"<<endl;
    for (int I=1; I=neto; I++)
	{
        cout << nombre [I]<< left << setw(30) << tareas[I]<< left << setw(30) << examenes [I]<< left << setw(30)<< programas[I] << left << setw(30) <<cafi << endl;
    }
}

 int main ()
{
	string nombre[MAX];
	int neto;
	float tareas[MAX], examenes [MAX], programas [MAX], cafi [MAX];
    lectura (neto, MAX, nombre, tareas, examenes, programas);
    calificacion (tareas, examenes, programas, neto, cafi);
    muestra (nombre, tareas,examenes, programas, neto, cafi);
    return 0;
}
