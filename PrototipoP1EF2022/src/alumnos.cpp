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
   string valorApellido, string valorNombre, string valorSede, string valorAula, string valorFacultad, string valorCarrera, string valorCurso1, int valorNota1,
   string valorCurso2, int valorNota2, string valorCurso3, int valorNota3)
{
   establecerId( valorNumeroId );
   establecerApellido( valorApellido );
   establecerNombre( valorNombre );
   establecerSede(valorSede);
   establecerAula(valorAula);
   establecerFacultad(valorFacultad);
   establecerCarrera(valorCarrera);
   estableceCurso1(valorCurso1);
   establecerNota1(valorNota1);
   estableceCurso2(valorCurso2);
   establecerNota2(valorNota2);
   estableceCurso3(valorCurso3);
   establecerNota3(valorNota3);
}

alumnos::~alumnos()
{
    //dtor
}
