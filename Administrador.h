#include <iostream>
#include <string>
#include <Usuario.h>

using namespace std;

class Administrador : public Usuario{
    private:
        string Nombre;
        string Apellido;
        string cargo;
    public:
        void Registrar_administrador();
        void Registrar_empleado();
        void Generar_reporte();
        void Verificar_administrador();
};
