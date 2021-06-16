#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

namespace tres{
  
void ingresarProveedor(){
  ofstream archiv;
  string codigo,nombreP,ciudad , telefono;
  archiv.open ("produtos.txt", ios::app);
  cout << "\tDATOS DEL PROVEEDOR" << endl;
  cout << "Ingrese los siguientes datos: "<< endl;
  cout << "Codigo: ";
  cin>> codigo;
  cout << "Nombre: ";
  cin >> nombreP;
  cout << "Ciudad: ";
  cin>> ciudad;
  cout << "Telefono: ";
  cin >> telefono;
 
  archiv<< "** DATOS DEL PROVEEDOR ****\n";
      archiv << "Codigo\t\tNombre\t\tCiudad\t\tTelefono\n";
      archiv <<codigo<< "\t\t"<< nombreP <<"\t\t\t"<<ciudad << "\t\t\t"<< telefono <<"\n";
  archiv.close();
}
}

namespace cuatro{
  void ingresarProductos(){
    ofstream archiv;
    archiv.open ("produtos.txt", ios::app);
    string nombre, estado;
    double precio[5], valor[5];
    double sumaprod, precio1;
    int cantidad[5];
    int contador=0;
    cout << "\tDATOS DEL PRODUCTO\n";
    archiv << "\n*** DATOS DEL PRODUCTO ***\n";
    archiv << "Nombre\tPrecio\tCantidad\tEstado\n";
    cout << "Nombre: ";
    cin >> nombre;
    while( nombre != "*"){
        cout << "Precio: " ;
        cin>> precio[contador];
        cout << "Cantidad: " ;
        cin>> cantidad [contador] ;
        cout << "estado: ";
        cin>> estado;
    valor[contador]= precio[contador]* cantidad [contador];
    sumaprod= sumaprod + cantidad [contador];
    precio1= precio1 + valor[contador];
    archiv <<nombre<< "\t\t"<< precio[contador] <<"\t\t\t\t\t"<< cantidad[contador] << "\t\t"<< estado <<"\n";
    cout << "Nombre: ";
    cin >> nombre;
    contador ++;
    }
    cout<< "Numero total de productos adquiridos: "<< contador << endl;
    cout << "Cantidad de prodcutos adquirido: "<<  sumaprod <<endl;
    cout << "El valor total: " <<  precio1 << endl;
    
    archiv<< "Numero de productos adquiridos: "<< contador << endl;
    archiv<< "Cantidad de prodcutos adquiridos: "<<  sumaprod<<endl;
    archiv<< "El valor total: " <<  precio1 << endl;
    void EJERCICIO2()
{
  int h, m, s, h_despues, m_despues, s_despues;
  char c;
  cout<<"\t\t\t---RELOJ DIGITAL UN SEGUNDO DESPUES----"<<endl;
  cout << "\nIngrese la hora actual (hora:minuto:segundo) : ";
  cin >> h>> c >> m >>c >> s;
  exception_hora(h , m, s);
  cout << "\nHora actual sumado un segundo: \n" << "HH:" << "MM:" << "SS" << endl;
  if ((h == 23) && (m == 59) && (s == 59))
  {
    cout << "00:" << "00:" << "00" << endl;
  }
  else if ((m == 59) && (s == 59))
  {
    cout << setfill('0') << setw(2) << right << h + 1 << ":00:" << "00" << endl;
  }
  else if (s == 59)
  {
    cout << setfill('0') << setw(2) << right << h + 1 << ":" << setfill('0') << setw(2) << right << m + 1 << ":00" << endl;
  }
  else
  {
    cout << setfill('0') << setw(2) << right << h << ":" << setfill('0') << setw(2) << right <<  m << ":" << setfill('0') << setw(2) << right << s + 1 << endl;
  }
}
    archiv.close();
}
}
