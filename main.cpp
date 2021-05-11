#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
  int celsius;
  cout<<"Enter temp in celsius: ";
  cin>>celsius;

  int factor;
  factor = 212-32;

  int fahrenheit;
  fahrenheit = factor*celsius/100 + 32;

  cout<<"fahrenheit value is: ";
  cout<<fahrenheit<<endl;

  system("read -p 'Press Enter to continue...' var");
  return 0;
}
