#include <iostream>
using namespace std;

int suma(int a, int b){
  return a + b;
}
int main() {
  int a = 3, b = 2;
  cin << suma(a, b) << endl;
  double c = 1.5, d = 3.5;
  cin << suma(c, d) << endl;
  system("pause");
  return 0;
}