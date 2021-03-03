#include<iostream>
#include "Usuario.h"

using namespace std;



int main(){
    Usuario Colb("Juan","micasa07","71216426");
    int a=1;
	while(a)
	{
	system("cls");
    cout<<"Login\n"<<endl;
    
	    if(Colb.Acceso()==true)
	    {
	        cout<<"\nLogeado correctamente!";
	        break;
	    }else{
		
	       cout<<"\nLogeo incorrecto!"<<endl;
		}
	}
    return 0;
}
