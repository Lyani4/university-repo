#include <iostream>

/*
Вывести на экран монитора название времени года по его номеру
 */
int main() {
  unsigned int season_number;
  std::cout << "Введите число\n";
  std::cin >> season_number;
  switch(season_number % 4) {
    case 1:
      std::cout << "Зима\n";
      break;
    case 2:
      std::cout << "Весна\n";
      break;
    case 3:
      std::cout << "Лето\n";
      break;
    case 4:
      std::cout << "Осень\n";
      break;
  }
  return 0;
}