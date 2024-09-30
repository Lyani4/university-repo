#include <iostream>

/*
Выделить память динамически под 7 переменных вещественного типа, ввести их с клавиатуры. Вычислить сумму чисел. Вывести
исходные числа и результат
 */

int main(void) {
  const int SIZE=7;
  int *p=0;
  long product=1;
  int i;
  p=new int[SIZE];
  std::cout << "Введи значение\n";
  for(i=0; i<SIZE; i++)
    std::cin >>*(p+i);
  for(i=0; i<SIZE; i++)
    if(*(p+i)!=0)
      product *=*(p+i);
  std::cout <<"Ваши числа\n";
  for(i=0; i<SIZE; i++)
    std::cout << *(p+i) << std::endl;
  std::cout <<"ПрОиЗвЕдЕнИе Равно\n" << product << std::endl;
  delete []p;
  return 0;
}