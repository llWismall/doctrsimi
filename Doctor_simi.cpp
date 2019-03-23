#include <iostream>
#include <string>
#include "paciente.h"
#include "medicos.h"
#include "consulta.h"
using namespace std;
void menuprincipal();
void menupaciente();
void menumedico();
void menuconsulta();
	int main()
			{
			menuprincipal();
			return 0;
			}				
//Menu principal
	void menuprincipal(){
	int opc_menu;
	do{

		cout << "------ Menu Principal ------" << endl;
		cout << "1.-Menu Medicos" << "\n2.-Menu Pacientes" << "\n3.-Menu Consulta" << "\n4.-Salir" << endl;
		cout << "Elija una opcion y oprima ENTER ===> ";
		cin >> opc_menu;

	cin.ignore();

	switch (opc_menu){
		case 1:
			menumedico();
		break;
		case 2:
			menupaciente();
		case 3:
			menuconsulta();
		case 4:
			cout << "" << endl;
		break;
		default:
			cout << "Esta opcion es invalida" << endl;
		}
		} while (opc_menu > 0 && opc_menu < 4);
}
//Menu medicos
	void menumedico(){
	Medico doctor;
	int opc_menu;
	do{

		cout << "------ Menu Pacientes ------" << endl;
		cout << "1.-Capturar" << "\n2.-Mostrar" << "\n4.-Regresar" << endl;
		cout << "Elija una opcion y oprima ENTER ===> ";
		cin >> opc_menu;

	cin.ignore();

	switch (opc_menu){
		case 1:
			doctor.Capturar();
		break;
		case 2:
			doctor.Mostrar();
		break;
		case 4:
			cout << " " << endl;
		break;
		default:
			cout << " " << endl;
}
	} while (opc_menu > 0 && opc_menu <= 3);
}
//Menu paciente
	void menupaciente(){
	Pacientes paci;
	int opc_menu;
	do{
			cout << "------ Menu Paciente ------" << endl;
			cout << "1.-Capturar" << "\n2.-Mostrar" << "\n4.-Regresar" << endl;
			cout << "Elija una opcion y oprima ENTER ===> ";
			cin >> opc_menu;

	cin.ignore();
	switch (opc_menu){
	case 1:
		paci.Capturar_p();
	break;
	case 2:
		paci.Mostrar_p();
	break;
	case 4:
		cout << " " << endl;
	break;
	default:
			cout << " " << endl;
}
		} while (opc_menu > 0 && opc_menu <= 3);
}
//Menu Consulta
	void menuconsulta(){
	consul consult;
	int opc_menu;
	do{
		cout << "------ Menu Consulta ------" << endl;
		cout << "1.-Capturar Historia Clinica" << "\n2.-Mostrar Historia Clinica" << "\n3.-Capturar Medicacion" << "\n4.-Mostrar Historia clinica + Medicacion" << "\n5.-Regresar" << endl;
		cout << "Elija una opcion y oprima ENTER ===> ";
		cin >> opc_menu;
	cin.ignore();
	switch (opc_menu){
		case 1:
			consult.Capturar();
		case 2:
			consult.Mostrar();
		case 3:
			consult.Capturar_c();
		case 4:
			consult.Mostrar_c();
		case 5:
			cout << " " << endl;
		break;
		default:
			cout << " " << endl;
}
	} while (opc_menu > 0 && opc_menu <= 4);
}
