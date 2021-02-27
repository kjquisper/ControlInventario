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
         void virtual Mostrar_usuario()=0;
};

#endif // USUARIO_H
