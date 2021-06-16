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
