#include <iostream>
#include<conio.h>
#include "menus.h"
#include "alumnos.h"
#include "reportes.h"
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::ios;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;

#include <ctime>
#include <vector>
#include <fstream>

using std::ofstream;
using std::ostream;
using std::fstream;

#include <iomanip>

using std::setw;
using std::setprecision;

#include <cstdlib>
using namespace std;
menus::menus()
{

}

menus::menuGeneral()
{
    reportes informe;
    menus menuG;
int choice;
	char x;
	do
    {
	system("cls");
	//Funcion que imprime Fecha  y Hora
	cout<<"Carlos Javier Sandoval Catalán"<<endl;
	cout<<"9959-21-1324"<<endl;
	cout << "" << endl;
	cout<<"\t\t\t    SISTEMA CORPORACION EDUCATIVA    "<<endl;
	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Procesos"<<endl;
	cout<<"\t\t\t 3. Informes/Reportes"<<endl;
	cout<<"\t\t\t 4. Salir"<<endl;

	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t"<<endl;
	cout<<"Ingresa una Opcion: ";
    cin>>choice;
//Llamadas a los menus secundarios
    switch(choice)
    {
    case 1:
        menuCatalogos();
		break;
	case 2:
        menuProcesos();
		break;
	case 3:
        informe.menuInformes();
		break;
	case 4:
        break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
    }while(choice!= 4);
    return 0;
}

menus::menuCatalogos()
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
	cout<<"\t\t\t    Catalogos    "<<endl;
	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\t 1. Ingresar Alumno"<<endl;
	cout<<"\t\t\t 2. Modificar Alumno"<<endl;
	cout<<"\t\t\t 3. Eliminar Alumno"<<endl;
	cout<<"\t\t\t 4. Consultar Alumnos"<<endl;
	cout<<"\t\t\t 5. Regresar"<<endl;

	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t"<<endl;
	cout<<"Ingresa una Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        a1.nuevoRegistro(alumnosEntradaSalida);
        cout << "" << endl;
        cout<<"Alumno agregado satisfactoriamente"<<endl;
        cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
	case 2:
	    a1.actualizarRegistro(alumnosEntradaSalida);
	    cout << "" << endl;
        cout<<"Alumno modificado satisfactoriamente"<<endl;
        cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
	case 3:
	    a1.eliminarRegistro(alumnosEntradaSalida);
        cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
    case 4:
	    a1.consultarRegistro(alumnosEntradaSalida);
	    cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
	case 5:
	        cout<<"Presione Enter para confirmar"<<endl;
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	alumnosEntradaSalida.clear(); // reinicializar indicador de fin de archivo
    getch();
    }while(choice!= 5);
}

menus::menuProcesos()
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
	cout<<"\t\t\t    Procesos    "<<endl;
	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\t 1. Generacion Boleta Inscripcion"<<endl;
	cout<<"\t\t\t 2. Generacion Boleta Solvencia"<<endl;
	cout<<"\t\t\t 3. Regresar"<<endl;

	cout<<"\t\t\t"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t"<<endl;
	cout<<"Ingresa una Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        a1.busquedaRegistro2(alumnosEntradaSalida);
        cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
	case 2:
	    a1.busquedaRegistro2(alumnosEntradaSalida);
        cout << "" << endl;
        cout << "Presiona enter para continuar" << endl;
		break;
	case 3:
	        cout<<"Presione Enter para confirmar"<<endl;
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	alumnosEntradaSalida.clear(); // reinicializar indicador de fin de archivo
    getch();
    }while(choice!= 3);
}



