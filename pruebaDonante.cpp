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

    switch (opcion) {
      case 1:
        getchar();
        p2.leerDonante();
        getchar();
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
        getchar();
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
        getchar();
        p2.leerDonante();
        getchar();
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
        if (p2 <= p1){
          std::cout << "p2 va antes que p1" << std::endl;
        }
        else{
          std::cout << "Mal" << std::endl;
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
