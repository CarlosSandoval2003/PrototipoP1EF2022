#ifndef ALUMNOS_H
#define ALUMNOS_H
#include <iostream>
#include<conio.h>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::ios;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;

#include <fstream>

using std::ofstream;
using std::ostream;
using std::fstream;

#include <iomanip>

using std::setw;
using std::setprecision;

#include <cstdlib>
using namespace std;


class alumnos
{
    public:
        alumnos( int = 0, string = "", string = "", string = "", string = "", string = "", string = "", string = "", int = 0, string = "", int = 0, string = "", int = 0);

        void establecerId( int );
        int obtenerNumeroId() const;

   // funciones de acceso para apellido
        void establecerApellido( string );
        string obtenerApellido() const;

   // funciones de acceso para primerNombre
        void establecerNombre( string );
        string obtenerNombre() const;

        void establecerSede( string );
        string obtenerSede() const;

        void establecerAula( string );
        string obtenerAula() const;

        void establecerFacultad( string );
        string obtenerFacultad() const;

        void establecerCarrera( string );
        string obtenerCarrera() const;

        void establecerCurso1( string );
        string obtenerCurso1() const;

        void establecerNota1( int );
        int obtenerNota1() const;

        void establecerCurso2( string );
        string obtenerCurso2() const;

        void establecerNota2( int );
        int obtenerNota2() const;

        void establecerCurso3( string );
        string obtenerCurso3() const;

        void establecerNota3( int );
        int obtenerNota3() const;

        void imprimirRegistro( fstream& );
        void actualizarRegistro( fstream& );
        void nuevoRegistro( fstream& );
        void eliminarRegistro( fstream& );
        void mostrarLinea( ostream&, const alumnos & );
        int obtenerId( const char * const );
        void crearArchivoJugador();
        void consultarRegistro( fstream& );
        void busquedaRegistro(fstream&);
        void mostrarLineaPantalla( const alumnos &);
        fstream inicioArchivo();


    private:
        int numeroId;
        char apellido[ 15 ];
        char nombre[ 16 ];
        char sede[ 17 ];
        char facultad[ 17 ];
        char carrera[ 17 ];
        char aula[ 17 ];
        char curso1[ 17 ];
        char curso2[ 17 ];
        char curso3[ 17 ];
        int nota1;
        int nota2;
        int nota3;
};

#endif // ALUMNOS_H
