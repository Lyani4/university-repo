#include <cctype>
#include <iostream>
#include <regex>
#include <string>
#include <typeinfo>

/**
 * В заданной строке подсчитать количество латинских букв
 */

/**
 * Решение задачи, для гиков с использрвание ASCII
 */
void solution1(std::string str) {
  int counter = 0;
  char symbol;
  bool is_latin_letter;

  std::cout << "Список латинских букв в строке: ";
  for (int i = 0; i < str.length(); i++) {
    symbol = str[i];
    // Проверка на латинскую букву (ASCII коды 65-90 и 97-122)
    // https://ru.wikipedia.org/wiki/ASCII
    is_latin_letter = isascii(symbol) && (symbol >= 65 && symbol <= 90 ||
                                          symbol >= 97 && symbol <= 122);

    // Внутри функции isascii() идёт магическое преобразование строки в число
    if (is_latin_letter) {
      std::cout << symbol << " ";
      counter++;
    }
  }

  std::cout << std::endl;
  std::cout << "Количество латинских букв в строке: " << counter << std::endl;
}

/**
 * Решение для нормальных людей, с использованием regex
 */
void solution2(std::string str) {
  // a-zA-Z - все латинские буквы
  std::regex latina_pattern("[^a-zA-Z]");
  str = std::regex_replace(str, latina_pattern, "");
  std::cout << "Список латинских букв в строке: " << str << std::endl;
  std::cout << "Количество латинских букв в строке: " << str.length()
            << std::endl;
}

int main() {
  // Специальный тип для работы со строками
  std::string str;
  std::cout << "Введите строку для поиск латинских букв: ";
  // Такая конструкция нужна для работы со стройкой в которой есть пробелы
  // В итоге в переменной str лежит строка пользователя
  std::getline(std::cin, str);

  std::cout << "Решение 1 с использованием ASCII" << std::endl;
  solution1(str);

  std::cout << std::endl;
  std::cout << "Решение 2 с использованием regex" << std::endl;
  solution2(str);

  return 0;
}
