#include <iostream>

/*
Выделить память динамически под 7 переменных вещественного типа, ввести их с
клавиатуры. Вычислить сумму чисел. Вывести исходные числа и результат
 */

int main() {
  float sum = 0;
  float *dyn_arr = new float[7];
  for (int i = 0; i < 7; i++) {
    std::cout << "Введите вещественное число:\n";
    std::cin >> dyn_arr[i];
  }
  std::cout << "\nИсходные числа: ";
  for (int i = 0; i < 7; i++) {
    std::cout << dyn_arr[i];
    std::cout << " ";
    sum += dyn_arr[i];
  }
  std::cout << "\nСумма вещественных чисел: ";
  std::cout << sum << std::endl;
  delete[] dyn_arr;
  return 0;
}