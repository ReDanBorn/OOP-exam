#include <iostream>
using namespace std;

template<typename T1, typename T2> // Шаблон функции
T2 Sum(T1 a, T2 b)
{
  return a+b;
} 


int main() 
{
  setlocale(LC_ALL, "RU");
  cout << Sum(5, 14.5) << endl;
} 