/* Agrega, modifica, elimina y obtiene los datos de un empleado */

#include<iostream>
#include"DatosEmpleado.h"
#include<vector>

using namespace std;

string empleado[100];

void MenuEmpleado();
void AgregarEmpleado();
void ObtenerDatosEmpleado();
void ModificarEmpleado();
void EliminarEmpleado(); 
int n;
int opcion;

int main() {
	
	MenuEmpleado();

	system("PAUSE");
	return 0;
}

void MenuEmpleado() {
	

	cout << "--------------- << MENU >> -------------------- " << endl;
	cout << "1) Agregar empleado" << endl;
	cout << "2) Modificar datos de empleado " << endl;
	cout << "3) Obtener informacion del empleado " << endl;
	cout << "4) Eliminar empleado " << endl;
	cout << "5) Salir" << endl;
	cout << "Elige una opcion: ";
	cin >> opcion;

	switch (opcion) {
	case 1: AgregarEmpleado(); break;
	case 2: ModificarEmpleado(); break;
	case 3: ObtenerDatosEmpleado(); break;
	case 4: EliminarEmpleado(); break;
	case 5: cout << endl;
	}

}



void AgregarEmpleado() {
		
	cout << "Cuantos empleados desea agregar: ";
	cin >> n;
	for (int i = 0; i < n; i++) {

		Empleado* emp1 = new Empleado();
		cout << "Ingresa al empleado de la posicion " << i << ": " << endl;
		emp1->IngresoDatosEmpleado();
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << i;
		cout << empleado[i];
	}
	MenuEmpleado();
}
void ModificarEmpleado() {
	Empleado* emp1 = new Empleado();
	cout << "Posicion del empleado a modificar: ";
	cin >> opcion;

	if (opcion < n) {
		cout << "Agrega los nuevos datos del empleado ";
		emp1->IngresoDatosEmpleado();
	}
	else {
		cout << "No existe tal posicion, intente con uno que haya puesto " << endl;
		ModificarEmpleado();
	}
	cout << "Se ha modificado los datos del empleado ";
	MenuEmpleado();
}
void EliminarEmpleado() {
	cout << "Dime la posicion del empleado a eliminar: ";
	cin >> opcion;

	if (opcion < n) {
		empleado[opcion] = "No info";

		cout << "Se ha eliminado la informacion del empleado " << endl;
	}
	else {
		cout << "No existe esa posicion dada, intenta con uno que si hayas puesto" << endl;
		EliminarEmpleado();
	}
	MenuEmpleado();
}

void ObtenerDatosEmpleado() 
{

	for (int i = 0; i < n; i++) {
		cout << "Empleado "<<"["<<i<<"]" <<empleado[i];
	}
}