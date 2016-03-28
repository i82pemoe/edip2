#include <iostream>
#include <string>

#include "donante.hpp"

using namespace ed;
using namespace std;

void Donante::escribirDonante(){
  cout << "Nombre: " << getNombre() << endl;
  cout << "Apellidos: " << getApellido() << endl;
  cout << "Grupo Sanguineo: " << getGrupoSanguineo() << endl;
  cout << "Factor RH: " << getFactorRH() << endl;
}

void Donante::leerDonante(){
	string nombre, apellido, factorRH, grupoSanguineo;
  int aux=0;
	cout << "Introduzca nombre" << endl;
	getline(cin, nombre);

	cout << "Introduzca apellidos" << endl;
	getline(cin, apellido);

  do{
    cout << "Introduzca grupo sanguineo 0,A,B,AB" << endl;
  	cin >> grupoSanguineo;
    if(((grupoSanguineo == "") || (grupoSanguineo == "0") || (grupoSanguineo == "A") || (grupoSanguineo == "B") || (grupoSanguineo == "AB"))){
      aux = 0;
    }
    else{
      cout << "Error al escribir el grupo sanguineo" << endl;
      aux = 1;
    }
  }while(aux == 1);
  aux = 0;
	do{
    cout << "Introduzca factor RH positivo o negativo" << endl;
  	cin >> factorRH;
    if ((factorRH == "") || (factorRH == "positivo") || (factorRH == "negativo")){
      aux = 0;
    }
    else{
      cout << "Error al escribir el factor RH" << endl;
      aux = 1;
    }
  }while(aux == 1);
	setNombre(nombre);
	setApellido(apellido);
	setGrupoSanguineo(grupoSanguineo);
	setFactorRH(factorRH);
}


namespace ed{
ostream &operator << (ostream &stream, Donante const &p){
  stream << "Nombre: ";
  stream << p._nombre;
  stream << endl;
  stream << "Apellido: ";
  stream << p._apellido;
  stream << endl;
  stream << "Grupo sanguineo: ";
  stream << p._grupoSanguineo;
  stream << endl;
  stream << "Factor RH: ";
  stream << p._factorRH;
  stream << endl;
}

istream &operator >> (istream &stream, Donante &p){
  int aux = 0;
  cout << "Introduzca nombre" << endl;
  stream >> p._nombre;

  cout << "Introduzca apellidos" << endl;
  stream >> p._apellido;

  do{
    cout << "Introduzca grupo sanguineo 0,A,B,AB" << endl;
    stream >> p._grupoSanguineo;
    if(((p._grupoSanguineo == "") || (p._grupoSanguineo == "0") || (p._grupoSanguineo == "A") || (p._grupoSanguineo == "B") || (p._grupoSanguineo == "AB"))){
      aux = 0;
    }
    else{
      cout << "Error al escribir el grupo sanguineo" << endl;
      aux = 1;
    }
  }while(aux == 1);
  aux = 0;

  do{
    cout << "Introduzca factor RH positivo o negativo" << endl;
    stream >> p._factorRH;
    if ((p._factorRH == "") || (p._factorRH == "positivo") || (p._factorRH == "negativo")){
      aux = 0;
    }
    else{
      cout << "Error al escribir el factor RH" << endl;
      aux = 1;
    }
  }while(aux == 1);

  return stream;
}

}
