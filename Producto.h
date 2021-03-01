# ifndef PRODUCTO_H
# define PRODUCTO_H

#include <iostream>
#include <string>
using namespace std;

class Producto {
    private:
        char codigo;
        string Nombre;
        int stock;
        string categoria;
        float precio;
        //Proveedor *proveedor;
    public:
        Producto();
        void Registrar_Entrada(int);
        void Registrar_Salida(int);
        void Actualizar_Stock();
        void MostrarProducto();
        void ModificarProducto();
};

#endif // PRODUCTO_H
