#include <iostream>

int main() {
  float x;
  float y;

  std::cout << "Введите число x" << std::endl;
  std::cin >> x;
  std::cout << "Введите число y\n";
  std::cin >> y;

  if (x > 0 && y > 0){
    std::cout << "Заданная точка в первой четверти\n";
  } else if ( x < 0 && y > 0) {
    std::cout << "Заданная точка во второй четверти\n";
  } else if ( x < 0 && y < 0) {
    std::cout << "Заданная точка в третьей четверти\n";
  } else if ( x > 0 && y < 0) {
    std::cout << "Заданная точка в четвертой четверти\n";
  }
  return 0;
}