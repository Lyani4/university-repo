/**
 * Дан одномерный числовой массив. Вычислить минимум и
 * номер минимального элемента в массиве.
 */
#include <iostream>

void fill_array(int mas[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << "Введите значение элемента:";
    std::cin >> mas[i];
  }
}
void find_min(int mas[], int size) {
  int min;
  int index;
  min = mas[0];
  index = 0;
  for (int i = 0; i < size; i++) {
    if (mas[i] < min) {
      min = mas[i];
      index = i;
    }
  }
  std::cout << "Минимальное значение массива:" << min << std::endl;
  std::cout << "Минимальный индекс массива:" << index << std::endl;
}
void print_array(int mas[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << mas[i];
  }
  std::cout << std::endl;
}

void solution_with_static_array() {
  int mas[5];
  std::cout << "Заполните массив:" << std::endl;
  fill_array(mas, 5);
  print_array(mas, 5);
  find_min(mas, 5);
}

void solution_with_dynamic_array() {
  int size;
  std::cout << "Введите значение размера массива:";
  std::cin >> size;
  std::cout << std::endl;
  int dynamic_array[size];
  fill_array(dynamic_array, size);
  print_array(dynamic_array, size);
  find_min(dynamic_array, size);
}
int main() {
  solution_with_static_array();
  solution_with_dynamic_array();
  return 0;
}
