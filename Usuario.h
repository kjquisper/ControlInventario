
#include "Usuario.h"
#include <string.h>
#include<iostream>
#include<conio.h>


using namespace std;

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


# ifndef USUARIO_H
# define USUARIO_H

# incluye  < iostream >
# incluir  < cadena >
# incluir  < string >

using namespace std ;
 class Usuario {
     private:
         string Login;
        string usuario;
        string contraseña;
        string DNI;

     public:
         Usuario(char[],char[],char[]);
        // void virtual Mostrar_usuario()=0;
         bool Validar_Datos(char*, int , char* , int);
         void Obtener_Longitud();
         bool Acceso();
};




Usuario::Usuario(char u[],char c[],char d[])
{
    strcpy(u,usuario);
    strcpy(c,contrasena);
    strcpy(d,DNI);
}

void Usuario::Obtener_Longitud()
{
    contadoru=strlen(usuario);
    contadorc=strlen(contrasena);
}


bool Usuario::Validar_Datos(char Dato1[],int Num_Dato1, char Dato2[], int Num_Dato2)
{
    bool Aprobado=false;
    int Conteo=0;

    if(Num_Dato2>=1 && Num_Dato2==Num_Dato1)
    {
        for(int i=0; i<Num_Dato1;i++)
        {
            if(Dato1[i]==Dato2[i])
            {
                Conteo++;
            }

            if(Conteo==Num_Dato1)
            {
             Aprobado=true;
            }else
            {
                Aprobado=false;
            }
        }

    }else
    {
        Aprobado=false;
    }
return Aprobado;
}


bool Usuario::Acceso()
{
    bool Permiso,Fin=false,Pase1,Pase2;
    int Contador=0, LongitudX;

    Obtener_Longitud();
    cin.getline(User,100);
    LongitudX=strlen(User);
    Pase1=Validar_Datos(usuario,contadoru,User,LongitudX);

    do
    {
        Pass[Contador]=getch();

        if(Pass[Contador]==13)
        {
            Pass[Contador]='\0';Fin=true;
        }else
        {
            cout<<"*";
            Contador++;
        }
    }while(Fin!=true);

 LongitudX=strlen(Pass);
 Pase2=Validar_Datos(contrasena,contadorc,Pass,LongitudX);

 if(Pase1==true && Pase2==true)
 {
     Permiso=true;
 }else
 {
     Permiso=false;
 }

    return Permiso;
}



