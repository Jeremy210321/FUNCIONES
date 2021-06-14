#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int menu();
double EJERCICIO1(int a);
long long int factorial(int b);
long int potencia(int c, int x);
void EJERCICIO2();
void exception_hora(int &H, int &M, int &S);
void EJERCICIO3();
double hipotenusa(double Lado1, double Lado2);
void EJERCICIO4();
void EJERCICIO5();
int inverso(int num, int num_invertido);
bool capicua(int original, int invertido);
void EJERCICIO6();
void exception_hora_base12(int &H , int &M, int &S);
int marca12(int H , int M, int S, int H2 = 0, int M2 = 0, int S2 = 0);


int main() {
  int opcion;
  do 
  {
    opcion = menu();
    switch (opcion)
    {
      case 1:
      {
        int x;
        cout<<"\t\t\t---SERIE DE TAYLOR----"<<endl;
        cout << "\nIngrese el valor de x para la funcion: ";
        cin >> x;
        	cout<<"El valor de taylor para n=10 y  x= "<<x << " es igual a: " << EJERCICIO1(x) << endl;
      break;
      }
      case 2:
      {
        EJERCICIO2();
      break;
      }
      case 3:
      {
        EJERCICIO3();
      break;
      }
      case 4:
      {
        EJERCICIO4();
      break;
      }
      case 5:
      {
       EJERCICIO5();
      break;
      }
      case 6:
      {
        EJERCICIO6();
      break;
      }
    }
  } while (opcion != 7);
  cout << "\n\t\t\t\t-------- FIN DE LA PRÁCTICA--------" << endl;
  return 0;
}
int menu()
{
  int op = 0;
  while ((op < 1) || (op > 7))
  {
	cout << "\n\t\t\t***PRÁCTICA 5 --FUNCIONES-- ***" << endl;
    cout << "\n***MENU DE LOS PROBLEMAS ***" << endl;
    cout << "1. EJERCICIO 1" << endl;
    cout << "2. EJERCICIO 2" << endl;
    cout << "3. EJERCICIO 3" << endl;
    cout << "4. EJERCICIO 4" << endl;
    cout << "5. EJERCICIO 5" << endl;
    cout << "6. EJERCICIO 6" << endl;
    cout << "7. Salir" << endl;
    cout << "Eliga una opción: ";
    cin >> op;
    if ((op < 1) || (op > 7))
    {
      cout << "\nEliga una opción correcta del menú" << endl;
    }
  } 
  return op;
}
double EJERCICIO1(int a)
{ 
  double poten, fact, Resultado = 0;
  for(int i = 0; i <= 10; ++i)
  {
    poten = potencia(i, a);
    fact = factorial(i);
    Resultado += poten / fact;
  }
  return Resultado;
}
long long int factorial(int b)
{
  long long int Factorial = 1;
  if (b < 0)
  {
    Factorial = 0;
  }
  else 
  {
    for (int i = 1; i <= b; i++)
    {
      Factorial *= i;
    }
  }
  return Factorial;
}
long int potencia(int c, int x)
{
  int resultado;
  if (c == 0)
  {
    resultado = 1;
  }
  else
  {
    resultado = pow(x,c);
  }
  return resultado;
}
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
void exception_hora(int &H, int &M, int &S)
{
  while (((H > 23) || (H < 0)) || ((M > 59) || (M < 0)) || ((S > 59) || (S < 0)))
  {
  	char c;
    cout << "\nIngrese una hora correcta (hora:minuto:segundo) : ";
    cin >> H>> c >> M>>c >> S;
  }
}
void EJERCICIO3()
{
	cout<<"\t\t\t--CALCULADORA DE HIPOTENUSA---"<<endl;
  double a,b, respuesta;
  cout << "Ingrese el primer cateto: ";
	cin >> a;
	cout << "Ingrese el segundo cateto: ";
	cin >> b;
  respuesta = hipotenusa(a, b);
  cout << "\nEl valor de la hipotenusa del triángulo es: " << respuesta << endl;
}
double hipotenusa(double Lado1, double Lado2)
{
  double resultado = sqrt(pow(Lado1,2)+pow(Lado2,2));
  return resultado;
}
void EJERCICIO4()
{
  int c, d, u, numerar = 0;
  cout<<"\t\t\t ---NUMEROS TRES CIFRAS---"<<endl;
  cout << "\nLos números de tres cifras en los que la suma de los cubos de sus dígitos es igual al mismo número son: " << endl;
  for(int tres_cifras = 100; tres_cifras < 1000; tres_cifras++)
  {
    c = tres_cifras / 100;
    d = (tres_cifras - c * 100) / 10;
    u = tres_cifras - c * 100 - d * 10;
    if ((pow(c,3) + pow(d,3) + pow(u,3))== tres_cifras)
    {
      cout << tres_cifras << endl;
    }
  }
}


void EJERCICIO5()
{
  int num;
  bool eva;
  cout<<"\t\t\t---NÚMERO CAPICÚA---"<<endl;
  cout << "\nIngrese el número a invertir: ";
  cin >> num;
  while (num < 0)
  {
    cout << "\nIngrese un número válido (entero positivo): ";
    cin >> num; 
  }
  cout << "\n Número ingresado: " << num << " \nNúmero invertido es: " << inverso(num,0) << endl;
  eva = num == inverso(num, 0);
  cout << "\n ¿Es un número capicua?: " << capicua(num, inverso(num, 0)) << endl;
}
int inverso(int num1, int numInv)
{
  if (num1 > 0)
  {
    return inverso(num1 / 10, num1 % 10 + numInv * 10);
  }
  else
  {
    return numInv;
  }
}
bool capicua(int original, int invertido)
{
  bool resultado;
  if (original == invertido)
  {
    resultado = true;
  }
  else
  {
    resultado = false;
  }
  return resultado;
}

void EJERCICIO6()
{
  int h, m, s, h2, m2, s2;
  char c;
  cout<<"\t\t***SEGUNDOS ENTRE DOS HORAS DESPUES DE LA ULTIMA VEZ MARCADO 12***"<<endl;
  cout << "\nIngrese la hora actual (hora:minuto:segundo) : ";
  cin >> h >> c>> m >> c>> s;
  exception_hora_base12(h , m, s);
  cout << "\nNúmero de segundos transcurridos desde la última vez que el reloj marcó las 12: " << marca12(h, m, s) << endl;
  cout << "\nIngrese la segunda hora (hora:minuto:segundo) : ";
  cin >> h2 >>c>> m2>>c >> s2;
  exception_hora_base12(h2 , m2, s2);
  cout << "\nNúmero de segundos transcurridos entre las dos horas ingresadas: " << marca12(h, m, s, h2, m2, s2) << " segundos" << endl;
}
void exception_hora_base12(int &H , int &M, int &S)
{
  while (((H > 24) || (H < 0)) || ((M > 59) || (M < 0)) || ((S > 59) || (S < 0)))
  {
  	char c;
    cout << "\nIngrese una hora correcta (hora:minuto:segundo) : ";
    cin >> H >>c>> M >>c>> S;
  }
}
int marca12(int H , int M, int S, int H2, int M2, int S2)
{
  int hs, ms, totalseg, t1, t2,t3,t4,hs2;
  if ((H>12)&&(H<=24))
  {
  	
	  t1=H-12;
	  hs = t1* 3600;
	  ms = M * 60;
	  t3 = hs + ms + S;
  }
  else {
  	hs = H * 3600;
      ms = M * 60;
      t3 = hs + ms + S;
  }
  if ((H2>12)&&(H2<=24))
  {
  	
	  t2=H2-12;
	  hs2 = t2* 3600;
	  ms = M2 * 60;
	  t4 = hs2 + ms + S2;
	
  }
  else 
  {
  	hs = H2 * 3600;
      ms = M2 * 60;
      t4 = hs + ms + S2;
  }
   totalseg=abs(t4-t3);
  
  return totalseg;
}

//Finaliza el código
