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
   estableceCurso1(valorCurso1);
   establecerNota1(valorNota1);
   estableceCurso2(valorCurso2);
   establecerNota2(valorNota2);
   estableceCurso3(valorCurso3);
   establecerNota3(valorNota3);
}

int alumnos:obtenerNumeroId() const
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
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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

void alumnos::establecerCurso2( string curso2String )
{
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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

void alumnos::establecerCurso3( string curso3String )
{
   // copiar a lo m�s 15 caracteres de la cadena en apellido
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



void jugador::imprimirRegistro( fstream &leerDeArchivo )
{
   // crear archivo de texto
   ofstream archivoImprimirSalida( "ReporteJugadores.txt", ios::out );

   // salir del programa si ofstream no puede crear el archivo
   if ( !archivoImprimirSalida ) {
      cerr << "No se pudo crear el archivo." << endl;
      exit( 1 );

   } // fin de instrucci�n if

   archivoImprimirSalida << left << setw( 10 ) << "ID" << setw( 16 )
       << "Apellido" << setw( 17 ) << "Nombre"
       << setw( 10 ) <<"Edad"<<setw( 18 )<<"Equipo"<<setw( 5 )<<"Posicion"<<endl;

   // colocar el apuntador de posici�n de archivo al principio del archivo de registros
   leerDeArchivo.seekg( 0 );

   // leer el primer registro del archivo de registros
   jugador player;
   leerDeArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( jugador ) );

   // copiar todos los registros del archivo de registros en el archivo de texto
   while ( !leerDeArchivo.eof() ) {

      // escribir un registro individual en el archivo de texto
      if ( player.obtenerNumeroId() != 0 )
         mostrarLinea( archivoImprimirSalida, player );

      // leer siguiente registro del archivo de registros
      leerDeArchivo.read( reinterpret_cast< char * >( &player),
         sizeof( jugador ) );

   } // fin de instrucci�n while

}


void jugador::actualizarRegistro( fstream &actualizarArchivo )
{
   // obtener el n�mero de cuenta a actualizar
   int numeroId = obtenerId( "Escriba el ID del Jugador a modificar" );

   // desplazar el apuntador de posici�n de archivo hasta el registro correcto en el archivo
   actualizarArchivo.seekg(
      ( numeroId - 1 ) * sizeof( jugador ) );

   // leer el primer registro del archivo
   jugador player;
   actualizarArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( jugador ) );
    int choice;
   // actualizar el registro
   if ( player.obtenerNumeroId() != 0 ) {

         cout << left << setw( 10 ) << "ID" << setw( 16 )
       << "Apellido" << setw( 17 ) << "Nombre"
       << setw( 10 ) <<"Edad"<<setw( 18 )<<"Equipo"<<setw( 5 )<<"Posicion"<< endl;
      mostrarLinea( cout, player );


      // solicitar al usuario que especifique la transacci�n
      cout<<""<<endl;
      cout <<"�Que desea modificar?"<<endl;
	  cout<<"1. Apellido"<<endl;
	  cout<<"2. Nombre"<<endl;
	  cout<<"3. Edad"<<endl;
	  cout<<"4. Equipo"<<endl;
	  cout<<"5. Posicion"<<endl;
	  cout<<"6. Cancelar"<<endl;
	  cin >> choice;
    switch(choice)
    {
        case 1:
            {cout << "Ingrese el nuevo apellido: "<<endl;
            string cambioApellido;
            cin >> cambioApellido;

        // actualizar el saldo del registro
            player.establecerApellido( cambioApellido );}
            break;
        case 2:
            {cout << "Ingrese el nuevo Nombre: "<<endl;
            string cambioNombre;
            cin >> cambioNombre;

      // actualizar el saldo del registro
            player.establecerNombre( cambioNombre );}
            break;
        case 3:
            {cout << "Ingrese la nueva Edad: "<<endl;
            int cambioEdad; // cargo o abono
            cin >> cambioEdad;

      // actualizar el saldo del registro
            player.establecerEdad(cambioEdad);}
            break;
        case 4:
            {cout << "Ingrese el nombre del nuevo equipo: "<<endl;
            string cambioEquipo; // cargo o abono
            cin >> cambioEquipo;

        // actualizar el saldo del registro
            player.establecerEquipo( cambioEquipo );}
            break;
        case 5:
            {cout << "Ingrese la nueva posicion: "<<endl;
            string cambioPosicion; // cargo o abono
            cin >> cambioPosicion;

        // actualizar el saldo del registro
            player.establecerPosicion( cambioPosicion );}
            break;
        case 6:
            cout << "Modificacion cancelada, empleado sin cambios "<<endl;
            break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}

      // actualizar el saldo del registro
      cout << left << setw( 10 ) << "ID" << setw( 16 )
       << "Apellido" << setw( 17 ) << "Nombre"
       << setw( 10 ) <<"Edad"<<setw( 18 )<<"Equipo"<<setw( 5 )<<"Posicion"<< endl;
      mostrarLinea( cout, player );

      // desplazar el apuntador de posici�n de archivo hasta el registro correcto en el archivo
      actualizarArchivo.seekp(
         ( numeroId - 1 ) * sizeof( jugador ) );

      // escribir el registro actualizado sobre el registro anterior en el archivo
      actualizarArchivo.write(
         reinterpret_cast< const char * >( &player ),
         sizeof( jugador ) );

   } // fin de instrucci�n if

   // mostrar error si la cuenta no existe
   else{
      cerr << "El ID #" << numeroId
         << " aun no existe" << endl;
         }

}


void jugador::nuevoRegistro( fstream &insertarEnArchivo )
{
   // obtener el n�mero de cuenta a crear
   int numeroId = obtenerId( "Ingrese el ID del nuevo jugador: " );

   // desplazar el apuntador de posici�n del archivo hasta el registro correcto en el archivo
   insertarEnArchivo.seekg(
      ( numeroId - 1 ) * sizeof( jugador ) );

   // leer el registro del archivo
   jugador player;
   insertarEnArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( jugador ) );

   // crear el registro, si �ste no existe ya
   if ( player.obtenerNumeroId() == 0 ) {

      char apellido[ 15 ];
      char nombre[ 16 ];
      int edad;
      char equipo[ 17 ];
      char posicion[ 4 ];


      // el usuario introduce el apellido, primer nombre y saldo
      cout << "Escriba el apellido: " << endl;
      cin >> setw( 15 ) >> apellido;
      cout << "Escriba el nombre: " << endl;
      cin >> setw( 16 ) >> nombre;
      cout << "Escriba la edad: "<<endl;
      cin >> setw( 10 ) >> edad;
      cout << "Escriba el nombre del equipo: "<<endl;
      cin >> setw(17)>> equipo;
      cout << "Escriba la posicion: "<<endl;
      cin >> setw(5)>> posicion;

      // usar valores para llenar los valores de la cuenta
      player.establecerApellido( apellido );
      player.establecerNombre( nombre );
      player.establecerEdad( edad );
      player.establecerEquipo( equipo );
      player.establecerPosicion( posicion );
      player.establecerId( numeroId );

      // desplazar el apuntador de posici�n de archivo hasta el registro correcto en el archivo
      insertarEnArchivo.seekp( ( numeroId - 1 ) *
         sizeof( jugador ) );

      // insertar el registro en el archivo
      insertarEnArchivo.write(
         reinterpret_cast< const char * >( &player ),
         sizeof( jugador ) );

   } // fin de instrucci�n if

   // mostrar error si la cuenta ya existe
   else
      cerr << "El ID numero #" << numeroId
           << " ya est� registrado." << endl;

}


void jugador::eliminarRegistro( fstream &eliminarDeArchivo )
{
   // obtener n�mero de cuenta a eliminar
   int numeroId = obtenerId( "Escriba el ID del equipo a eliminar" );

   // desplazar el apuntador de posici�n de archivo hasta el registro correcto en el archivo
   eliminarDeArchivo.seekg(
      ( numeroId - 1 ) * sizeof( jugador ) );

   // leer el registro del archivo
   jugador player;
   eliminarDeArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( jugador ) );

   // eliminar el registro, si es que existe en el archivo
   if ( player.obtenerNumeroId() != 0 ) {
      jugador jugadorEnBlanco;

      // desplazar el apuntador de posici�n de archivo hasta el registro correcto en el archivo
      eliminarDeArchivo.seekp( ( numeroId - 1 ) *
         sizeof( jugador ) );

      // reemplazar el registro existente con un registro en blanco
      eliminarDeArchivo.write(
         reinterpret_cast< const char * >( &jugadorEnBlanco ),
         sizeof( jugador ) );

      cout << "Jugador con ID #" << numeroId << " eliminado.\n";

   } // fin de instrucci�n if

   // mostrar error si el registro no existe
   else
      cerr << "No existe ningun jugador con el ID #" << numeroId<<endl;

}

void jugador::consultarRegistro( fstream &leerDeArchivo )
{

   cout << left << setw( 10 ) << "ID" << setw( 16 )
       << "Apellido" << setw( 17 ) << "Nombre"
       << setw( 10 ) <<"Edad"<<setw( 18 )<<"Equipo"<<setw( 5 )<<"Posicion" << endl;

   // colocar el apuntador de posici�n de archivo al principio del archivo de registros
   leerDeArchivo.seekg( 0 );

   // leer el primer registro del archivo de registros
   jugador player;
   leerDeArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( jugador ) );

   // copiar todos los registros del archivo de registros en el archivo de texto
   while ( !leerDeArchivo.eof() ) {

      // escribir un registro individual en el archivo de texto
      if ( player.obtenerNumeroId() != 0 )
         mostrarLineaPantalla(player);

      // leer siguiente registro del archivo de registros
      leerDeArchivo.read( reinterpret_cast< char * >( &player),
         sizeof( jugador ) );

   } // fin de instrucci�n while

}


void jugador::mostrarLinea( ostream &salida, const jugador &registro )
{
   salida << left << setw( 10 ) << registro.obtenerNumeroId()
          << setw( 15 ) << registro.obtenerApellido().data()
          << setw( 16 ) << registro.obtenerNombre().data()
          << setw( 10 ) << registro.obtenerEdad()
          << setw( 17 ) << registro.obtenerEquipo().data()
          << setw( 5 ) << registro.obtenerPosicion().data()<<endl;

} // fin de la funci�n mostrarLinea
void jugador::mostrarLineaPantalla( const jugador &registro )
{
   cout << left << setw( 10 ) << registro.obtenerNumeroId()
          << setw( 15 ) << registro.obtenerApellido().data()
          << setw( 16 ) << registro.obtenerNombre().data()
          << setw( 10 ) << registro.obtenerEdad()
          << setw( 17 ) << registro.obtenerEquipo().data()
          << setw( 5 ) << registro.obtenerPosicion().data()<<endl;
} // fin de la funci�n mostrarLineaPantalla

// obtener el valor del n�mero de cuenta del usuario
int jugador::obtenerId( const char * const indicador )
{
   int numeroId;

   // obtener el valor del n�mero de cuenta
   do {
      cout << indicador << " (1 - 1000): ";
      cin >> numeroId;

   } while ( numeroId < 1 || numeroId > 1000 );

   return numeroId;

} // fin de la funci�n obtenerCuenta
void jugador::crearArchivoJugador()
{
    ofstream jugadorSalida( "jugadores.dat", ios::out | ios::binary );
   // salir del programa si ofstream no pudo abrir el archivo
   if ( !jugadorSalida ) {
      cerr << "No se pudo abrir el archivo." << endl;
      exit( 1 );

   } // fin de instrucci�n if

   // crear DatosCliente sin informaci�n
   jugador jugadorEnBlanco;

   // escribir 100 registros en blanco en el archivo
   for ( int i = 0; i < 1000; i++ )
      jugadorSalida.write(
         reinterpret_cast< const char * >( &jugadorEnBlanco ),
         sizeof( jugador ) );
}

fstream jugador::inicioArchivo(){
    jugador player;
        fstream jugadorEntradaSalida( "jugadores.dat", ios::in | ios::out | ios::binary);

   // salir del programa si fstream no puede abrir el archivo
    if ( !jugadorEntradaSalida ) {
      cerr << "No se pudo abrir el archivo." << endl;
      player.crearArchivoJugador();
      cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo";
      exit ( 1 );

    }
    return jugadorEntradaSalida;
}

void jugador::busquedaRegistro(fstream &actualizarArchivo)
{

       int numeroId = obtenerId( "Escriba el ID del jugador a buscar" );

   // desplazar el apuntador de posici�n de archivo hasta el registro correcto en el archivo
   actualizarArchivo.seekg(
      ( numeroId - 1 ) * sizeof( jugador ) );

   // leer el primer registro del archivo
   jugador player;
   actualizarArchivo.read( reinterpret_cast< char * >( &player ),
      sizeof( jugador ) );
if ( player.obtenerNumeroId() != 0 ) {
      // actualizar el saldo del registro
      cout << left << setw( 10 ) << "ID" << setw( 16 )
       << "Apellido" << setw( 17 ) << "Nombre"
       << setw( 10 ) <<"Edad"<<setw( 18 )<<"Equipo"<<setw( 5 )<<"Posicion" << endl;
      mostrarLinea( cout, player );

      // desplazar el apuntador de posici�n de archivo hasta el registro correcto en el archivo
      actualizarArchivo.seekp(
         ( numeroId - 1 ) * sizeof( jugador ) );

   } // fin de instrucci�n if

   // mostrar error si la cuenta no existe
   else
      cerr << "El ID #" << numeroId
         << " aun no existe" << endl;

}


