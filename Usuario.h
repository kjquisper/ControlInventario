#include <iostream>
#include <string>
using namespace std;


 class Usuario {
     private:
        string usuario;
        string contraseña;
        string DNI;
     public:
         void virtual Mostrar_usuario()=0;
};



