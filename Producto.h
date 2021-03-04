#ifndef PRODUCTO_H
#define PRODUCTO_H	
#include <iostream>
#include <string.h>
#include "Proveedor.h"
using namespace std;

class Producto {
    private:
        int codigo;
        char Nombre[10];
        int stock;
        char categoria[10];
        float precio;
        Proveedor *proveedor;
        int entrada;
        int salida;
    public:
    	void Registrar_Producto();
        void Registrar_Entrada(int);
        void Registrar_Salida(int);
        void Actualizar_Stock();
        void MostrarProducto();
        void ModificarProducto();
        void Asignar_Proveedor(Proveedor*);
};


#endif
