#include <iostream>
#include <cmath>

/*
Нужно вычислить уравнение (e^sin(x) + ln(arctg (x))) / sin(x)
 */
int main() {
  float x;
  double expression1;
  double expression2;
  double expression3;

  std::cout << "Введите число x\n";
  std::cin >> x;
  expression1 = exp(sin(x));
  expression2 = log(atan(x));
  expression3 = sin(x);
  std::cout << (expression1 + expression2)/expression3 << std::endl;
  return 0;
}