#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>

using namespace std;

void zamiana(double & a, double & b){
    
    swap(a,b);
   
}

int main()
{
  double a,b,iloczyn;
  cout <<"Podaj liczby"<<endl;
  cin>>a;
  cin>>b;
  cout << "A to "<<a<<" B to "<<b<<endl;
  zamiana(a,b);
  cout << "Po zamianie A to "<<a<<" B to "<<b<<endl;
  
  getch();
}