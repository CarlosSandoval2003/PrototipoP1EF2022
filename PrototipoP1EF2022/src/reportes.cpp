#include "reportes.h"
#include "alumnos.h"

reportes::reportes()
{
    //ctor
}

reportes::~reportes()
{
    //dtor
}

reportes::menuInformes()
{
    //Creacion de un objeto de la clase alumnos
    alumnos a1;
    fstream alumnosEntradaSalida = a1.inicioArchivo();
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\t    Informes/Reportes    "<<endl;
	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\t 1. Generacion Informe Alumnos"<<endl;
	cout<<"\t\t\t 2. Generacion Informe Solvencia"<<endl;
    cout<<"\t\t\t 3. Generacion Acta de Notas"<<endl;
	cout<<"\t\t\t 4. Regresar"<<endl;

	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t"<<endl;
	cout<<"Ingresa una Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        a1.imprimirRegistro(alumnosEntradaSalida);
        cout << "" << endl;
        cout<<"Archivo creado satisfactoriamente"<<endl;
        cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
	case 2:
	    a1.imprimirRegistro2(alumnosEntradaSalida);
        cout << "" << endl;
        cout<<"Archivo creado satisfactoriamente"<<endl;
        cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
	case 3:
	    a1.imprimirRegistro3(alumnosEntradaSalida);
        cout << "" << endl;
        cout<<"Archivo creado satisfactoriamente"<<endl;
        cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
	case 4:
	        cout<<"Presione Enter para confirmar"<<endl;
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	alumnosEntradaSalida.clear(); // reinicializar indicador de fin de archivo
    getch();
    }while(choice!= 4);
}
