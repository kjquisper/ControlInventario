# ifndef EMPLEADO_H
# define EMPLEADO_H

#include<iostream>
#include <string>

class Empleado 
{
	private:
		char DNI[8];
		char usuario[10];
        char contrasena[10];
        int contadoru;
        int contadorc;
        char User[30];
        char Pass[30];
	public:
		Empleado(char[],char[],char[]);
		bool Validar_Datos(char*, int , char* , int);
        void Obtener_Longitud();
        bool Acceso();
};

#endif