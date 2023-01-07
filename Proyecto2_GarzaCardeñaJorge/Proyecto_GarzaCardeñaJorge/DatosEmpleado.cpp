#include"DatosEmpleado.h"

Empleado::Empleado() {
	this->Nombre;
	this->ApellidoPa;
	this->ApellidoMa;
	this->EdadEmpleado;
	this->DNI;
	this->DepEmpleado;
	this->EstadoEmpleado;
	this->Salario;
	this->SueldoNeto;
	this->EmpresaDeProcedencia;
}
Empleado::~Empleado() {

}

void Empleado::IngresoDatosEmpleado() {
	cout << "Nombre: ";
	cin >> this->Nombre;
	cout << "Apellido Paterno: ";
	cin >> this->ApellidoPa;
	cout << "Apellido Materno: ";
	cin >> this->ApellidoMa;
	cout << "Edad del empleado: ";
	cin >> this->EdadEmpleado;
	cout << "DNI: ";
	cin >> this->DNI;
	cout << "Puesto del empleado minusculas (secretario, jefe de zona, vendedor): ";
	cin >> this->DepEmpleado;
	cout << "Empresa de procedencia: ";
	cin >> this->EmpresaDeProcedencia;
	cout << "Estado donde proviene: ";
	cin >> this->EstadoEmpleado;
	cout << "Salario: ";
	

	cout << "Digite el sueldo del empleado: ";
	cin >> this->Salario;
	if (this->DepEmpleado == "secretario") {
		if (this->Salario <= 1000); {
			this->SueldoNeto = this->Salario * 0.1;
		}
	}
	if (this->DepEmpleado == "jefe de zona")
	{
		if (this->Salario <= 2000); {
			this->SueldoNeto = ((this->Salario - 1000) * 0.05) + (1000 * 0.1);
		}
	
	}
	if(DepEmpleado == "vendedor"){
		if (this->Salario > 2000) {
			this->SueldoNeto = ((this->Salario - 2000) * 0.03) + (1000 * 0.1);
		}
	}

	cout << "El sueldo neto es de:" << this->SueldoNeto;


	cout << " y estos son sus datos de informacion " << endl;
	cout << "Nombre Completo: " << this->Nombre << " " << this->ApellidoPa << " " << this->ApellidoMa<<endl;
	cout << "Edad del empleado: " << this->EdadEmpleado<<endl;
	cout << "DNI de empleado: " << this->DNI<<endl;
	cout << "Estado donde proviene: " << this->EstadoEmpleado<<endl;
	cout << "Departamento donde se ubica el empleado: " << this->DepEmpleado << endl;
	cout << "Sueldo neto del empleado con respecto a su puesto: " << this->SueldoNeto<<endl;
	cout << "Empresa donde proviene el empleado: " << this->EmpresaDeProcedencia<<endl;
}