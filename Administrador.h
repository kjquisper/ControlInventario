#include <iostream>
#include <string>
using namespace std;

class Administrador{
    private:
        string Nombre;
        string Apellido;
        string cargo;
    public:
        void Registrar_administrador();
        void Registrar_empleado();
        void Generar_reporte();
};
