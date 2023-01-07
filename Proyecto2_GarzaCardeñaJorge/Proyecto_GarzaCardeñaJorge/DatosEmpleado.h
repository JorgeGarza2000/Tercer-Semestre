#pragma once
#include<iostream>

using namespace std;

class Empleado
{
public:
    string Nombre;
    string ApellidoPa;
    string ApellidoMa;
    string EdadEmpleado;
    string DNI;
    string DepEmpleado;
    string EstadoEmpleado;
    float Salario;
    float SueldoNeto;
    string EmpresaDeProcedencia;

public:
    Empleado();
    ~Empleado();

public:
   void IngresoDatosEmpleado();
};