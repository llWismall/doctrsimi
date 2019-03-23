#include <iostream>
#include <string>
using namespace std;

class consul {
public:
string sintoma, fecha_a, tratam;

void Capturar();
void Mostrar();
void Capturar_c();
void Mostrar_c();
};

void consul::Capturar(){
system("cls");
cout << "- Ingresar de datos -" << endl;
cout << "Fecha Actual: " << endl;
getline(cin, fecha_a);
cout << "Ingresar sintomas: " << endl;
getline(cin, sintoma);
}


void consul::Mostrar() {

cout << "- Datos de sintomas -" << endl;
cout << "Fecha Actual: " << fecha_a << endl;
cout << "\nSintomas: " << sintoma << endl;
}

void consul::Capturar_c(){
cout << "- Ingresar de datos -" << endl;
cout << "Fecha: " << fecha_a << endl;
cout << "Sintoma: " << sintoma << endl;
cout << "Tratamiento: " << endl;
getline(cin, tratam);
}


void consul::Mostrar_c() {
cout << "- Datos de sintomas + tratamiento -" << endl;
cout << "Fecha Actual: " << fecha_a << endl;
cout << "\nSintomas: " << sintoma << endl;
cout << "\nTratamiento: " << tratam << endl;
}

