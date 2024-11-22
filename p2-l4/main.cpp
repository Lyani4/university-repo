#include <iostream>

/**
 * Дана матрица. Вывести ее в матричной форме. Вычислить
 * произведение ненулевых элементов матрицы в указанном столбце.
 */

int main() {
  int stolbec, stroka;
  std::cout << "Введите количество столбцов и строк" << std::endl;
  std::cin >> stolbec >> stroka;
  int mas[stroka][stolbec];
  std::cout << "Вводите элементы массива" << std::endl;
  for (int i = 0; i < stroka; i++) {
    for (int j = 0; j < stolbec; j++) {
      std::cout << "Элемент " << i << "," << j << " " << std::endl;
      std::cin >> mas[i][j];
    }
  }
  std::cout << "Вывод матричной формы:" << std::endl;
  for (int i = 0; i < stroka; i++) {
    for (int j = 0; j < stolbec; j++) {
      std::cout << mas[i][j];
    }
    std::cout << std::endl;
  }
  std::cout << "Укажите столбец для вычисления произведения(Начиная с 0) "
            << std::endl;
  int column;
  int product = 1;
  bool allZero = true;
  std::cin >> column;
  if (column > stolbec) {
    std::cout << "Такого столбца нету, выход из программы..." << std::endl;
    exit(1);
  }
  for (int i = 0; i < stroka; i++) {
    for (int j = 0; j < stolbec; j++) {
      if (j == column and mas[i][j] != 0) {
        allZero = false;
        product *= mas[i][j];
      }
    }
  }

  //  Оптимизированный способ
  //  for (int i = 0; i < stroka; i++) {
  //    if (mas[i][column] != 0) {
  //      allZero = false;
  //      product *= mas[i][column];
  //    }
  //  }
  if (allZero == true) {
    std::cout << "Произведение столбца " << column << std::endl;
    std::cout << 0 << std::endl;
    exit(0);
  }
  std::cout << "Произведение столбца " << column << std::endl;
  std::cout << product << std::endl;
}