#include "menus.h"

menus::menus()
{

}

menus::menuGeneral()
{
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
	cout<<"\t\t\t 3. Informes"<<endl;
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
        menuCatalagos();
		break;
	case 2:
        menuProcesos();
		break;
	case 3:
        menuInformes();
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
        cout<<"Ingresar alumno"<<endl;
		break;
	case 2:
	    cout<<"Modificar Alumno"<<endl;
		break;
	case 3:
	    cout<<"Eliminar Alumno"<<endl;
		break;
    case 4:
	    cout<<"Consulta Alumnos"<<endl;
		break;
	case 5:
	        cout<<"Presione Enter para confirmar"<<endl;
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
    getch();
    }while(choice!= 5);
}

menus::menuProcesos()
{
    //Creacion de un objeto de la clase alumnos
    alumnos a1;
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
        cout<<"Boleta Inscripcion"<<endl;
		break;
	case 2:
	    cout<<"Boleta Solvencia"<<endl;
		break;
	case 3:
	    cout<<"Acta de Notas"<<endl;
		break;
	case 4:
	        cout<<"Presione Enter para confirmar"<<endl;
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
    getch();
    }while(choice!= 4);
}

