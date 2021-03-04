#include "Almacen.h"
#include<string>
#include<iostream>


using namespace std;

Almacen::Almacen(char n[],char r[]){
	strcpy(n,nom);
	strcpy(r,Referencia);
}

void Almacen::Mostrar_Almacen(){
	cout<<"Nombre: "<<nom<<endl;
	cout<<"RF: "<<Referencia<<endl;
	
}

void Almacen::Mostrar_Productos(){

}