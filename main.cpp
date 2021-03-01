#include<iostream>
#include "Usuario.h"

using namespace std;



int main(){
    Usuario Colb("Juan","micasa07","71216426");

    cout<<"Login\n";
    cout<<"Usuario: "<<endl;
    cout<<"Contraseña: "<<endl;

    if(Colb.Acceso()==true)
    {
        cout<<"\nLogeado correctamente!";
    }else
    {
       cout<<"\nLogeo incorrecto!";
    }

    return 0;
}
