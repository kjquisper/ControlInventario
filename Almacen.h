#ifndef ALMACEN_H
#define ALMACEN_H
#include "Producto.h"
#include "Empleado.h"
#include <string>
class Almacen
{
	private:
		char nom[10];
		char Referencia[20];
		Producto *productos[30];
		Empleado *Empleado;
	public:
		Almacen(char[],char[]);
		void Mostrar_Productos();
		void Mostrar_Almacen();
		void Registrar_Producto(Producto*);
};

#endif