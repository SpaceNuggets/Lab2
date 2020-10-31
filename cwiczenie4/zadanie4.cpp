#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

double wynik(double a, double b, double & iloczyn){
    double suma=a+b;
    iloczyn=a*b;
    return suma;
   
}

int main()
{
  double a,b,iloczyn;
  cout <<"Podaj liczby"<<endl;
  cin>>a;
  cin>>b;
  
  cout<<"Suma liczb wynosi "<<wynik(a,b,iloczyn)<<", a iloczyn wynosi "<<iloczyn;
  
  getch();
}