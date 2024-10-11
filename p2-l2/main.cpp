#include <cctype>
#include <iostream>
#include <string>
/**
 * В заданной строке подсчитать количество латинских букв
 */

int main() {
  int string_counter = 0;
  std::string text;
  std::cout << "Введите текст: ";
  std::cin >> text;
  std::cout << "Длинна строки: " << text.length() << std::endl;
  for (int i = 0; i < text.length(); i++) {
    std::cout << text[i] << std::endl;
  }
  return 0;
}
