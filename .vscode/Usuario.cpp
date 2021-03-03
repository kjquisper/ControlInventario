#include "Usuario.h"
#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
 
Usuario::Usuario(char u[],char c[],char d[])
{
    strcpy(usuario,u);
    strcpy(contrasena,c);
    strcpy(DNI,d);
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
    cout<<"Usuario: ";
    cin.getline(User,100);
     cout<<endl;
    LongitudX=strlen(User);
    Pase1=Validar_Datos(usuario,contadoru,User,LongitudX);
    cout<<"Contraseña: ";
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



