#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void zamiana(int & a, int & b){
    
    int nowa=b;
    b=a;
    a=nowa;
    
}

int main()
{
  int a,b;
  cout <<"Podaj liczby"<<endl;
  cin>>a;
  cin>>b;
  cout << "A to "<<a<<" B to "<<b<<endl;
  zamiana(a,b);
  cout << "Po zamianie A to "<<a<<" B to "<<b<<endl;
  getch();
}