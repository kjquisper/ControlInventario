# ifndef EMPLEADO_H
# define EMPLEADO_H

#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class Empleado : public Usuario{
    private:
        Proveedor * proveedor;
    public:
      void Operacion(string ,bool ,int);
};

#endif // EMPLEADO_H