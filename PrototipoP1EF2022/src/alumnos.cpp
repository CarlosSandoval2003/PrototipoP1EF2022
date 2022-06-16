#include "alumnos.h"
#include <iostream>
#include<conio.h>
using namespace std;
using std::string;
#include <cstring>
#include <fstream>
#include <iomanip>
#include <cstdlib>

alumnos::alumnos(int valorNumeroId,
   string valorApellido, string valorNombre, string valorSede, string valorAula, string valorFacultad, string valorCarrera, int valorSolvencia, string valorCurso1, int valorNota1,
   string valorCurso2, int valorNota2, string valorCurso3, int valorNota3)
{
   establecerId( valorNumeroId );
   establecerApellido( valorApellido );
   establecerNombre( valorNombre );
   establecerSede(valorSede);
   establecerAula(valorAula);
   establecerFacultad(valorFacultad);
   establecerCarrera(valorCarrera);
   establecerSolvencia(valorSolvencia);
   establecerCurso1(valorCurso1);
   establecerNota1(valorNota1);
   establecerCurso2(valorCurso2);
   establecerNota2(valorNota2);
   establecerCurso3(valorCurso3);
   establecerNota3(valorNota3);
}

int alumnos::obtenerNumeroId() const
{
   return numeroId;

}

void alumnos::establecerId( int valorNumeroId )
{
   numeroId = valorNumeroId;

}

string alumnos::obtenerApellido() const
{
   return apellido;

}

void alumnos::establecerApellido( string apellidoString )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorApellido = apellidoString.data();
   int longitud = strlen( valorApellido );
   longitud = ( longitud < 16 ? longitud : 15 );
   strncpy( apellido, valorApellido, longitud );

   // anexar caracter nulo al apellido
   apellido[ longitud ] = '\0';

}

string alumnos::obtenerNombre() const
{
   return nombre;

}

void alumnos::establecerNombre( string nombreString )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorNombre = nombreString.data();
   int longitud = strlen( valorNombre );
   longitud = ( longitud < 17 ? longitud : 16 );
   strncpy( nombre, valorNombre, longitud );

   // anexar caracter nulo al apellido
   nombre[ longitud ] = '\0';

}

string alumnos::obtenerSede() const
{
   return sede;

}

void alumnos::establecerSede( string sedeString )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorSede = sedeString.data();
   int longitud = strlen( valorSede );
   longitud = ( longitud < 18 ? longitud : 17 );
   strncpy( sede, valorSede, longitud );

   // anexar caracter nulo al apellido
   sede[ longitud ] = '\0';

}

string alumnos::obtenerAula() const
{
   return aula;

}

void alumnos::establecerAula( string aulaString )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorAula = aulaString.data();
   int longitud = strlen( valorAula );
   longitud = ( longitud < 18 ? longitud : 17 );
   strncpy( aula, valorAula, longitud );

   // anexar caracter nulo al apellido
   aula[ longitud ] = '\0';

}

string alumnos::obtenerFacultad() const
{
   return facultad;

}

void alumnos::establecerFacultad( string facultadString )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorFacultad = facultadString.data();
   int longitud = strlen( valorFacultad );
   longitud = ( longitud < 18 ? longitud : 17 );
   strncpy( facultad, valorFacultad, longitud );

   // anexar caracter nulo al apellido
   facultad[ longitud ] = '\0';

}

string alumnos::obtenerCarrera() const
{
   return carrera;

}

void alumnos::establecerCarrera( string carreraString )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorCarrera = carreraString.data();
   int longitud = strlen( valorCarrera );
   longitud = ( longitud < 18 ? longitud : 17 );
   strncpy( carrera, valorCarrera, longitud );

   // anexar caracter nulo al apellido
   carrera[ longitud ] = '\0';

}

int alumnos::obtenerSolvencia() const
{
   return solvencia;

}

void alumnos::establecerSolvencia( int valorSolvencia )
{
   solvencia = valorSolvencia;

}

string alumnos::obtenerCurso1() const
{
   return curso1;

}

void alumnos::establecerCurso1( string curso1String )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorCurso1 = curso1String.data();
   int longitud = strlen( valorCurso1 );
   longitud = ( longitud < 18 ? longitud : 17 );
   strncpy( curso1, valorCurso1, longitud );

   // anexar caracter nulo al apellido
   curso1[ longitud ] = '\0';

}

int alumnos::obtenerNota1() const
{
   return nota1;

}

void alumnos::establecerNota1( int valorNota1 )
{
   nota1 = valorNota1;

}

string alumnos::obtenerCurso2() const
{
   return curso2;

}

void alumnos::establecerCurso2( string curso2String )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorCurso2 = curso2String.data();
   int longitud = strlen( valorCurso2 );
   longitud = ( longitud < 18 ? longitud : 17 );
   strncpy( curso2, valorCurso2, longitud );

   // anexar caracter nulo al apellido
   curso2[ longitud ] = '\0';

}

int alumnos::obtenerNota2() const
{
   return nota2;

}

void alumnos::establecerNota2( int valorNota2 )
{
   nota2 = valorNota2;

}

string alumnos::obtenerCurso3() const
{
   return curso3;

}

void alumnos::establecerCurso3( string curso3String )
{
   // copiar a lo más 15 caracteres de la cadena en apellido
   const char *valorCurso3 = curso3String.data();
   int longitud = strlen( valorCurso3 );
   longitud = ( longitud < 18 ? longitud : 17 );
   strncpy( curso3, valorCurso3, longitud );

   // anexar caracter nulo al apellido
   curso3[ longitud ] = '\0';

}

int alumnos::obtenerNota3() const
{
   return nota3;

}

void alumnos::establecerNota3( int valorNota3 )
{
   nota3 = valorNota3;

}



void alumnos::imprimirRegistro( fstream &leerDeArchivo )
{
   // crear archivo de texto
   ofstream archivoImprimirSalida( "InformeAlumnos.txt", ios::out );

   // salir del programa si ofstream no puede crear el archivo
   if ( !archivoImprimirSalida ) {
      cerr << "No se pudo crear el archivo." << endl;
      exit( 1 );

   } // fin de instrucción if

   archivoImprimirSalida << left << setw( 10 ) << "ID" << setw( 16 )
       << "Apellido" << setw( 17 ) << "Nombre"
       <<setw( 18 )<<"Sede"<<setw( 18 )<<"Aula"<<setw( 18 )<<"Facultad"<<setw( 18 )<<"Carrera"<<setw( 10 )<<"Solvencia"<<setw( 18 )<<"Curso 1"<<setw( 10 )<<"Nota"
       <<setw( 18 )<<"Curso 2"<<setw( 10 )<<"Nota"<<setw( 18 )<<"Curso 3"<<setw( 10 )<<"Nota"<<endl;

   // colocar el apuntador de posición de archivo al principio del archivo de registros
   leerDeArchivo.seekg( 0 );

   // leer el primer registro del archivo de registros
   alumnos player;
   leerDeArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( alumnos ) );

   // copiar todos los registros del archivo de registros en el archivo de texto
   while ( !leerDeArchivo.eof() ) {

      // escribir un registro individual en el archivo de texto
      if ( player.obtenerNumeroId() != 0 )
         mostrarLinea( archivoImprimirSalida, player );

      // leer siguiente registro del archivo de registros
      leerDeArchivo.read( reinterpret_cast< char * >( &player),
         sizeof( alumnos ) );

   } // fin de instrucción while

}


void alumnos::actualizarRegistro( fstream &actualizarArchivo )
{
   // obtener el número de cuenta a actualizar
   int numeroId = obtenerId( "Escriba el ID del Alumno a modificar" );

   // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
   actualizarArchivo.seekg(
      ( numeroId - 1 ) * sizeof( alumnos ) );

   // leer el primer registro del archivo
   alumnos player;
   actualizarArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( alumnos ) );
    int choice;
   // actualizar el registro
   if ( player.obtenerNumeroId() != 0 ) {

         cout << left << setw( 10 ) << "ID" << setw( 16 )<< "Apellido" << setw( 17 ) << "Nombre"<<setw( 18 )<<"Sede"<<setw( 18 )
         <<"Aula"<<setw( 18 )<<"Facultad"<<setw( 18 )<<"Carrera"<<setw( 10 )<<"Solvencia"<<setw( 18 )<<"Curso 1"<<setw( 10 )<<"Nota"
         <<setw( 18 )<<"Curso 2"<<setw( 10 )<<"Nota"<<setw( 18 )<<"Curso 3"<<setw( 10 )<<"Nota"<<endl;
      mostrarLinea( cout, player );


      // solicitar al usuario que especifique la transacción
      cout<<""<<endl;
      cout <<"¿Que desea modificar?"<<endl;
	  cout<<"1. Apellido"<<endl;
	  cout<<"2. Nombre"<<endl;
	  cout<<"3. Sede"<<endl;
	  cout<<"4. Aula"<<endl;
	  cout<<"5. Facultad"<<endl;
	  cout<<"6. Carrera"<<endl;
	  cout<<"7. Solvencia"<<endl;
	  cout<<"8. Curso 1"<<endl;
	  cout<<"9. Curso 2"<<endl;
	  cout<<"10. Curso 3"<<endl;
	  cout<<"11. Nota Curso 1"<<endl;
	  cout<<"12. Nota Curso 2"<<endl;
	  cout<<"13. Nota Curso 3"<<endl;
	  cout<<"14. Cancelar"<<endl;
	  cin >> choice;
    switch(choice)
    {
        case 1:
            {cout << "Ingrese el nuevo apellido: "<<endl;
            string cambioApellido;
            cin >> cambioApellido;
            player.establecerApellido( cambioApellido );}
            break;
        case 2:
            {cout << "Ingrese el nuevo Nombre: "<<endl;
            string cambioNombre;
            cin >> cambioNombre;
            player.establecerNombre( cambioNombre );}
            break;
        case 3:
            {cout << "Ingrese la nueva Sede: "<<endl;
            string cambioSede;
            cin >> cambioSede;
            player.establecerSede( cambioSede );}
            break;
        case 4:
            {cout << "Ingrese la nueva Aula: "<<endl;
            string cambioAula;
            cin >> cambioAula;
            player.establecerAula( cambioAula );}
            break;
        case 5:
            {cout << "Ingrese la nueva Facultad: "<<endl;
            string cambioFacultad;
            cin >> cambioFacultad;
            player.establecerFacultad( cambioFacultad );}
            break;
        case 6:
            {cout << "Ingrese la nueva Carrera: "<<endl;
            string cambioCarrera;
            cin >> cambioCarrera;
            player.establecerCarrera( cambioCarrera );}
            break;
        case 7:
            {cout << "Ingrese la nueva Solvencia (1=Solvente, 2=Insolvente): "<<endl;
            int cambioSolvencia;
            cin >> cambioSolvencia;
            player.establecerSolvencia(cambioSolvencia);}
            break;
        case 8:
            {cout << "Ingrese el nuevo Curso 1: "<<endl;
            string cambioCurso1;
            cin >> cambioCurso1;
            player.establecerCurso1( cambioCurso1 );}
            break;
        case 9:
            {cout << "Ingrese la nueva Nota del curso 1: "<<endl;
            int cambioNota1;
            cin >> cambioNota1;
            player.establecerNota1(cambioNota1);}
            break;
        case 10:
            {cout << "Ingrese el nuevo Curso 2: "<<endl;
            string cambioCurso1;
            cin >> cambioCurso1;
            player.establecerCurso2( cambioCurso1 );}
            break;
        case 11:
            {cout << "Ingrese la nueva Nota del curso 2: "<<endl;
            int cambioNota1;
            cin >> cambioNota1;
            player.establecerNota2(cambioNota1);}
            break;
        case 12:
            {cout << "Ingrese el nuevo Curso 3: "<<endl;
            string cambioCurso1;
            cin >> cambioCurso1;
            player.establecerCurso3( cambioCurso1 );}
            break;
        case 13:
            {cout << "Ingrese la nueva Nota del curso 3: "<<endl;
            int cambioNota1;
            cin >> cambioNota1;
            player.establecerNota3(cambioNota1);}
            break;
        case 14:
            cout << "Modificacion cancelada, empleado sin cambios "<<endl;
            break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}

      cout << left << setw( 10 ) << "ID" << setw( 16 )<< "Apellido" << setw( 17 ) << "Nombre"<<setw( 18 )<<"Sede"<<setw( 18 )
         <<"Aula"<<setw( 18 )<<"Facultad"<<setw( 18 )<<"Carrera"<<setw( 4 )<<"Solvencia"<<setw( 18 )<<"Curso 1"<<setw( 4 )<<"Nota"
         <<setw( 18 )<<"Curso 2"<<setw( 4 )<<"Nota"<<setw( 18 )<<"Curso 3"<<setw( 4 )<<"Nota"<<endl;
      mostrarLinea( cout, player );

      // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
      actualizarArchivo.seekp(
         ( numeroId - 1 ) * sizeof( alumnos ) );

      // escribir el registro actualizado sobre el registro anterior en el archivo
      actualizarArchivo.write(
         reinterpret_cast< const char * >( &player ),
         sizeof( alumnos ) );

   } // fin de instrucción if

   // mostrar error si la cuenta no existe
   else{
      cerr << "El ID #" << numeroId
         << " aun no existe" << endl;
         }

}


void alumnos::nuevoRegistro( fstream &insertarEnArchivo )
{
   // obtener el número de cuenta a crear
   int numeroId = obtenerId( "Ingrese el ID del nuevo alumno: " );

   // desplazar el apuntador de posición del archivo hasta el registro correcto en el archivo
   insertarEnArchivo.seekg(
      ( numeroId - 1 ) * sizeof( alumnos ) );

   // leer el registro del archivo
   alumnos player;
   insertarEnArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( alumnos ) );

   // crear el registro, si éste no existe ya
   if ( player.obtenerNumeroId() == 0 ) {

        char apellido[ 15 ];
        char nombre[ 16 ];
        char sede[ 17 ];
        char facultad[ 17 ];
        char carrera[ 17 ];
        int solvencia;
        char aula[ 17 ];
        char curso1[ 17 ];
        char curso2[ 17 ];
        char curso3[ 17 ];
        int nota1;
        int nota2;
        int nota3;


      // el usuario introduce el apellido, primer nombre y saldo
      cout << "Escriba el apellido: " << endl;
      cin >> setw( 15 ) >> apellido;
      cout << "Escriba el nombre: " << endl;
      cin >> setw( 16 ) >> nombre;
      cout << "Escriba la Sede: "<<endl;
      cin >> setw(17)>> sede;
      cout << "Escriba el aula: "<<endl;
      cin >> setw(17)>> aula;
      cout << "Escriba la facultad: "<<endl;
      cin >> setw(17)>> facultad;
      cout << "Escriba la carrera: "<<endl;
      cin >> setw(17)>> carrera;
      cout << "¿Está solvente? 1=Si, 2=No"<<endl;
      cin >> setw(4)>> solvencia;
      cout << "Escriba el curso 1: "<<endl;
      cin >> setw(17)>> curso1;
      cout << "Escriba la nota del curso 1: "<<endl;
      cin >> setw(4)>> nota1;
      cout << "Escriba el curso 2: "<<endl;
      cin >> setw(17)>> curso2;
      cout << "Escriba la nota del curso 2: "<<endl;
      cin >> setw(4)>> nota2;
      cout << "Escriba el curso 3: "<<endl;
      cin >> setw(17)>> curso3;
      cout << "Escriba la nota del curso 3: "<<endl;
      cin >> setw(4)>> nota3;

      // usar valores para llenar los valores de la cuenta
      player.establecerApellido( apellido );
      player.establecerNombre( nombre );
      player.establecerSede( sede );
      player.establecerAula( aula );
      player.establecerFacultad( facultad );
      player.establecerCarrera( carrera );
      player.establecerCurso1( curso1 );
      player.establecerNota1( nota1 );
      player.establecerCurso2( curso2 );
      player.establecerNota2( nota2 );
      player.establecerCurso3( curso3 );
      player.establecerNota3( nota3 );
      player.establecerId( numeroId );

      // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
      insertarEnArchivo.seekp( ( numeroId - 1 ) *
         sizeof( alumnos ) );

      // insertar el registro en el archivo
      insertarEnArchivo.write(
         reinterpret_cast< const char * >( &player ),
         sizeof( alumnos ) );

   } // fin de instrucción if

   // mostrar error si la cuenta ya existe
   else
      cerr << "El ID numero #" << numeroId
           << " ya está registrado." << endl;

}


void alumnos::eliminarRegistro( fstream &eliminarDeArchivo )
{
   // obtener número de cuenta a eliminar
   int numeroId = obtenerId( "Escriba el ID del alumno a eliminar" );

   // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
   eliminarDeArchivo.seekg(
      ( numeroId - 1 ) * sizeof( alumnos ) );

   // leer el registro del archivo
   alumnos player;
   eliminarDeArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( alumnos ) );

   // eliminar el registro, si es que existe en el archivo
   if ( player.obtenerNumeroId() != 0 ) {
      alumnos alumnoEnBlanco;

      // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
      eliminarDeArchivo.seekp( ( numeroId - 1 ) *
         sizeof( alumnos ) );

      // reemplazar el registro existente con un registro en blanco
      eliminarDeArchivo.write(
         reinterpret_cast< const char * >( &alumnoEnBlanco ),
         sizeof( alumnos ) );

      cout << "Alumno con ID #" << numeroId << " eliminado.\n";

   } // fin de instrucción if

   // mostrar error si el registro no existe
   else
      cerr << "No existe ningun alumno con el ID #" << numeroId<<endl;

}

void alumnos::consultarRegistro( fstream &leerDeArchivo )
{

   cout << left << setw( 10 ) << "ID" << setw( 16 )<< "Apellido" << setw( 17 ) << "Nombre"<<setw( 18 )<<"Sede"<<setw( 18 )
         <<"Aula"<<setw( 18 )<<"Facultad"<<setw( 18 )<<"Carrera"<<setw( 10 )<<"Solvencia"<<setw( 18 )<<"Curso 1"<<setw( 10 )<<"Nota 1"
         <<setw( 18 )<<"Curso 2"<<setw( 10 )<<"Nota 2"<<setw( 18 )<<"Curso 3"<<setw( 10 )<<"Nota 3"<<endl;

   // colocar el apuntador de posición de archivo al principio del archivo de registros
   leerDeArchivo.seekg( 0 );

   // leer el primer registro del archivo de registros
   alumnos player;
   leerDeArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( alumnos ) );

   // copiar todos los registros del archivo de registros en el archivo de texto
   while ( !leerDeArchivo.eof() ) {

      // escribir un registro individual en el archivo de texto
      if ( player.obtenerNumeroId() != 0 )
         mostrarLineaPantalla(player);

      // leer siguiente registro del archivo de registros
      leerDeArchivo.read( reinterpret_cast< char * >( &player),
         sizeof( alumnos ) );

   } // fin de instrucción while

}


void alumnos::mostrarLinea( ostream &salida, const alumnos &registro )
{
   salida << left << setw( 10 ) << registro.obtenerNumeroId()
          << setw( 15 ) << registro.obtenerApellido().data()
          << setw( 16 ) << registro.obtenerNombre().data()
          << setw( 17 ) << registro.obtenerSede().data()
          << setw( 17 ) << registro.obtenerAula().data()
          << setw( 17 ) << registro.obtenerFacultad().data()
          << setw( 17 ) << registro.obtenerCarrera().data()
          << setw( 10 ) << registro.obtenerSolvencia()
          << setw( 17 ) << registro.obtenerCurso1().data()
          << setw( 10 ) << registro.obtenerNota1()
          << setw( 17 ) << registro.obtenerCurso2().data()
          << setw( 10 ) << registro.obtenerNota2()
          << setw( 17 ) << registro.obtenerCurso3().data()
          << setw( 10 ) << registro.obtenerNota3()<<endl;

} // fin de la función mostrarLinea
void alumnos::mostrarLineaPantalla( const alumnos &registro )
{
   cout << left << setw( 10 ) << registro.obtenerNumeroId()
          << setw( 15 ) << registro.obtenerApellido().data()
          << setw( 16 ) << registro.obtenerNombre().data()
          << setw( 17 ) << registro.obtenerSede().data()
          << setw( 17 ) << registro.obtenerAula().data()
          << setw( 17 ) << registro.obtenerFacultad().data()
          << setw( 17 ) << registro.obtenerCarrera().data()
          << setw( 10 ) << registro.obtenerSolvencia()
          << setw( 17 ) << registro.obtenerCurso1().data()
          << setw( 10 ) << registro.obtenerNota1()
          << setw( 17 ) << registro.obtenerCurso2().data()
          << setw( 10 ) << registro.obtenerNota2()
          << setw( 17 ) << registro.obtenerCurso3().data()
          << setw( 10 ) << registro.obtenerNota3()<<endl;
} // fin de la función mostrarLineaPantalla

// obtener el valor del número de cuenta del usuario
int alumnos::obtenerId( const char * const indicador )
{
   int numeroId;

   // obtener el valor del número de cuenta
   do {
      cout << indicador << " (1 - 1000): ";
      cin >> numeroId;

   } while ( numeroId < 1 || numeroId > 1000 );

   return numeroId;

} // fin de la función obtenerCuenta
void alumnos::crearArchivoAlumnos()
{
    ofstream alumnosSalida( "alumnos.dat", ios::out | ios::binary );
   // salir del programa si ofstream no pudo abrir el archivo
   if ( !alumnosSalida ) {
      cerr << "No se pudo abrir el archivo." << endl;
      exit( 1 );

   } // fin de instrucción if

   // crear DatosCliente sin información
   alumnos alumnoEnBlanco;

   // escribir 100 registros en blanco en el archivo
   for ( int i = 0; i < 1000; i++ )
      alumnosSalida.write(
         reinterpret_cast< const char * >( &alumnoEnBlanco ),
         sizeof( alumnos ) );
}

fstream alumnos::inicioArchivo(){
    alumnos player;
        fstream alumnosEntradaSalida( "alumnos.dat", ios::in | ios::out | ios::binary);

   // salir del programa si fstream no puede abrir el archivo
    if ( !alumnosEntradaSalida ) {
      cerr << "No se pudo abrir el archivo." << endl;
      player.crearArchivoAlumnos();
      cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo";
      exit ( 1 );

    }
    return alumnosEntradaSalida;
}

void alumnos::mostrarLinea2( ostream &salida, const alumnos &registro )
{
     cout<<"_______________________________________________________________________________"<<endl;
     cout<<"\t\t\t"<<endl;
	 cout<<"\t\t\t .   Generacion de voucher   ."<<endl;
	 cout<<"_______________________________________________________________________________"<<endl;
     cout<<"\t Banco Nacional "; cout<<"\t\t\t ID alumno: " <<registro.obtenerNumeroId()<<endl;
     cout<<"\t\t\t"<<endl;
     cout<<"\t Apellido: "<<registro.obtenerApellido().data(); cout<<"\t\t\t Nombre: "<< registro.obtenerNombre().data()<<endl;
     cout<<"\t\t\t"<<endl;
     cout<<"\t Pago Mensualidad: Q900" << endl;
     cout<<"_______________________________________________________________________________"<<endl;
     cout<<"\t\t\t"<<endl;
     cout<<"\t\t\t Firma______________"<< endl;
}

void alumnos::mostrarLinea3( ostream &salida, const alumnos &registro )
{
     cout<<"_______________________________________________________________________________"<<endl;
     cout<<"\t\t\t"<<endl;
	 cout<<"\t\t\t .   Generacion de voucher Inscripcion  ."<<endl;
	 cout<<"_______________________________________________________________________________"<<endl;
     cout<<"\t Banco Nacional "; cout<<"\t\t\t ID alumno: " <<registro.obtenerNumeroId()<<endl;
     cout<<"\t\t\t"<<endl;
     cout<<"\t Apellido: "<<registro.obtenerApellido().data(); cout<<"\t\t\t Nombre: "<< registro.obtenerNombre().data()<<endl;
     cout<<"\t\t\t"<<endl;
     cout<<"\t Pago Inscripcion: Q1000.00" << endl;
     cout<<"_______________________________________________________________________________"<<endl;
     cout<<"\t\t\t El alumno ha sido inscrito para el ciclo escolar 20___"<<endl;
     cout<<"\t\t\t"<<endl;
     cout<<"\t\t\t Firma______________"<< endl;
}
void alumnos::busquedaRegistro(fstream &actualizarArchivo)
{
//Se obtiene el ID a buscar
       int numeroId = obtenerId( "Escriba el ID del alumno a generar voucher " );

   // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo

   actualizarArchivo.seekg(
      ( numeroId - 1 ) * sizeof( alumnos ) );

   // leer el primer registro del archivo
   alumnos empleado;
   actualizarArchivo.read( reinterpret_cast< char * >( &empleado ),
      sizeof( alumnos ) );
if ( empleado.obtenerNumeroId() != 0 ) {
     mostrarLinea2( cout, empleado );
      // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo

      actualizarArchivo.seekp(
         ( numeroId - 1 ) * sizeof( alumnos ) );

   }

   // mostrar error si el ID no existe
   else
      cerr << "El ID #" << numeroId
         << " aun no existe" << endl;

}

void alumnos::busquedaRegistro2(fstream &actualizarArchivo)
{
//Se obtiene el ID a buscar
       int numeroId = obtenerId( "Escriba el ID del alumno a generar voucher " );

   // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo

   actualizarArchivo.seekg(
      ( numeroId - 1 ) * sizeof( alumnos ) );

   // leer el primer registro del archivo
   alumnos empleado;
   actualizarArchivo.read( reinterpret_cast< char * >( &empleado ),
      sizeof( alumnos ) );
if ( empleado.obtenerNumeroId() != 0 ) {
     mostrarLinea3( cout, empleado );
      // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo

      actualizarArchivo.seekp(
         ( numeroId - 1 ) * sizeof( alumnos ) );

   }

   // mostrar error si el ID no existe
   else
      cerr << "El ID #" << numeroId
         << " aun no existe" << endl;

}
