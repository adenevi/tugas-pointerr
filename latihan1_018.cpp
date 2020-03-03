#include <stdlib.h>
#include <iostream>
using namespace std;

int H(const char*s){

int x = 0;
for (;*s!='\0';s++)
++x;
return x;
}

int main() 
{
  char string[80];
  cout << "Ketik sebuah karakter: ";
  cin >>string;
  cout <<"\n";
  return 0;
}
