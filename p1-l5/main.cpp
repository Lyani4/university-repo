#include <cmath>
#include <iostream>

#define POGRESHNOST 1E-7

// Сравниваем число 0,0000001 с числом 0,0000001
// std::cout << (0.00000001 >= std::abs(POGRESHNOST)) << std::endl;

int main() {
  double result = 0;
  double exp = 1;
  int counter = 0;
  double pribavka;
  do {
    counter += 1;
    pribavka = 1 / pow(exp, 2);
    result += pribavka;
    exp += 1;
  } while (pribavka > POGRESHNOST);
  std::cout << "Последнее слагаемое: " << result << std::endl;
  std::cout << "Кол-во повторений цикла: " << counter << std::endl;
  return 0;
}