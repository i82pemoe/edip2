#include <iostream>
#include <string>
#include <cstdio>
#include "donante.hpp"
#include "macros.hpp"


using namespace ed;
using namespace std;

int main(void){
  BORRAR;
  Donante p1("Eduardo", "Perez Moyano", "0", "negativo");
  std::cout << "Constructor por defecto" << std::endl;
  p1.escribirDonante();
  cout << endl;
  //Crea otro donante mediante constructor de copia;
  Donante p2(p1);
  std::cout << "Constructor mediante copia" << std::endl;
  p2.escribirDonante();
  int opcion=0;
  printf("pulse ");
	SUBRAYADO;
	printf("ENTER");
	APAGA;
	printf(" para ");
	INVERSO;
	printf("continuar");
	APAGA;
	getchar();
	BORRAR;
  do {
    BORRAR;
    LUGAR(5,10);
    cout << "Opciones del menu" << endl;
    std::cout << "1.Leer donante" << std::endl;
    std::cout << "2.Escribir donante" << std::endl;
    std::cout << "3.Modificar donante" << std::endl;
    std::cout << "4.Comparar donante" << std::endl;
    std::cout << "0.Salir" << std::endl;
    std::cout << "Introduzca opcion" << std::endl;
    std::cin >> opcion;
    getchar();

    switch (opcion) {
      case 1:
        p2.leerDonante();
        printf("pulse ");
        SUBRAYADO;
        printf("ENTER");
        APAGA;
        printf(" para ");
        INVERSO;
        printf("continuar");
        APAGA;
        getchar();
        BORRAR;
        break;
      case 2:
        p2.escribirDonante();
        printf("pulse ");
        SUBRAYADO;
        printf("ENTER");
        APAGA;
        printf(" para ");
        INVERSO;
        printf("continuar");
        APAGA;
        getchar();
        BORRAR;
        break;
      case 3:
        p2.leerDonante();
        printf("pulse ");
        SUBRAYADO;
        printf("ENTER");
        APAGA;
        printf(" para ");
        INVERSO;
        printf("continuar");
        APAGA;
        getchar();
        BORRAR;
        break;

      case 4:
        p2.escribirDonante();
        p1.escribirDonante();
        if (p2 <= p1){
          std::cout << "Donante 2 va antes que donante 1" << std::endl;
        }
        else{
          std::cout << "Donante 1 va antes que donate 2" << std::endl;
        }
        printf("pulse ");
        SUBRAYADO;
        printf("ENTER");
        APAGA;
        printf(" para ");
        INVERSO;
        printf("continuar");
        APAGA;
        getchar();
        BORRAR;
        break;


    }
  } while(opcion != 0);


}
