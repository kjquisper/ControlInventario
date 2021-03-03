#ifndef USUARIO_H
#define USUARIO_H
#include<iostream>
#include <string>


class Usuario
{
    private:
        char usuario[10];
        char contrasena[10];
        char DNI[10];
        int contadoru;
        int contadorc;
        char User[30];
        char Pass[30];
     public:
         Usuario(char[],char[],char[]);
        // void virtual Mostrar_usuario()=0;
         bool Validar_Datos(char*, int , char* , int);
         void Obtener_Longitud();
         bool Acceso();
};


#endif


