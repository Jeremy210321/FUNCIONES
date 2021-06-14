#include <iostream>
#include <fstream>
#include <ctime>
#include "E1.h"
#include "E2.h"
#include "E3.h"

using namespace std;
using namespace uno;
using namespace dos;
using namespace tres;
using namespace cuatro;

int menu();

int main() {
  int op;
  do{
  op= menu();
  switch(op){
    case 1:
    ejercicio1();
    break;
    case 2:
    ejercicio2();

    break;
    case 3:
    ingresarProveedor();
    ingresarProductos();
    break;

  }
  } while(op!=4);

}

int menu(){
  int opcion;
  cout << "\nTALLER 4\n";
  cout << " 1. Ejercicio 1\n";
  cout << " 2. Ejercicio 2\n";
  cout << " 3. Ejercicio 3\n";
  cout << " 4. Salir\n";
  cout << "OPCION: ";
  cin >>opcion;

  return opcion;

}


