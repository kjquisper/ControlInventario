#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "Empleado.h"
#include "Administrador.h"
using namespace std;
void menuempleado();
void menuadmi();


int main(){
    Empleado Colb1("Juan","miaula07","712164");
    Empleado Colb2("luis","miaula08","743567");
    Administrador Admi("Andre","admi1","723456");
    
	int a=1,op;
	
	do
	{
		system("CLS");
	cout<<"\t\tSecion\n"<<endl;
	cout<<"1.Empleado"<<endl;
	cout<<"2.Administrador"<<endl;
	cout<<"OPCION:  ";cin>>op;
	
	switch(op){
		
		case 1:
		while(a)
				{
				system("cls");
    			cout<<"Login\n"<<endl;
    
	    	if(Colb1.Acceso()==true)
	    	{
	        cout<<"\nLogeado correctamente!";
	        menuempleado();
	        
	        
	    	}else{
		
	       cout<<"\nLogeo incorrecto!"<<endl;
			system("PAUSE");
			}
				}	
		break;
		
		case 2:
		while(a)
				{
				system("cls");
    			cout<<"Login\n"<<endl;
    
	    	if(Admi.Acceso()==true)
	    	{
	        cout<<"\nLogeado correctamente!";
	        break;
	        
	    	}else{
		
	       cout<<"\nLogeo incorrecto!"<<endl;
			system("PAUSE");
			}
				}		
		break;
	}
	
	}while(op!=3);
	
    return 0;
}


void menuempleado(){
	do{
		system("cls");
		cout<<"\t\tActividades"<<endl;
		cout<<"1.Mostrar Almacen"<<endl;
		cout<<"2.Registrar Producto"<<endl;
		cout<<"3."
	switch(op){
		
		
		
		}	
	}while(op!=);
}