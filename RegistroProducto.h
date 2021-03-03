# ifndef REGISTRARPRODUCTO_H
# define REGISTRARPRODUCTO_H

//#include  < cadena >
#include <iostream>
#include <string>
using namespace std;

class RegistrarProducto{
    private:
        int Cantidad;
        bool Estado;
        //Empleado *Empleado;
        string FechaHora;
    public:
        void MostrarRegistro();
};

#endif  // REGISTRARPRODUCTO_H