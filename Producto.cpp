#include "Producto.h"
#include <string.h>
#include <iomanip>

void Producto::Registrar_Producto(){
 cout<<"Ingrese el Codigo: ";cin>>codigo;cout<<endl;
 cout<<"Ingrese el nombre: ";fflush(stdin),gets(Nombre);cout<<endl;
 cout<<"Stock: ";cin>>stock;cout<<endl;
 cout<<"Categoria: ";fflush(stdin),gets(categoria);cout<<endl;
 cout<<"Precio: ";cin>>precio;cout<<endl;
}

void Producto::Registrar_Entrada(int e){
	cout<<"Ingreso Cantidad de Entrada: ";
	cout<<e;
	e=entrada;
}

void Producto::Registrar_Salida(int s){
	cout<<"Ingreso Cantidad de Entrada: ";
	cout<<s;
	s=salida;	
}

void Producto::Actualizar_Stock(){
	cout<<"Actualizando..."<<endl,
	stock=stock+(entrada+salida);	
}

void Producto::Asignar_Proveedor(Proveedor *p){
	proveedor=p;
}


void Producto::MostrarProducto(){
	cout<<left;
    cout<<setw(20)<<codigo;
    cout<<setw(10)<<Nombre;
    cout<<setw(15)<<stock;
    cout<<setw(5)<<categoria;
    cout<<setw(10)<<precio;
	cout<< proveedor -> nombre();
}

void Producto::ModificarProducto(){
	cout<<"Ingrese Los datos nuevos:";
	Producto::Registrar_Producto();
}
