#include <iostream>

int main() {
    // Создание std::unique_ptr, который указывает на динамически выделенное значение int,
    // инициализированное значением 5
    std::unique_ptr<int> ptr(new int(5));

    // Вывод значения, на которое указывает std::unique_ptr
    std::cout << *ptr << std::endl;

    // Изменение значения на 10
    *ptr = 10;

    // Снова вывод значения, на которое указывает std::unique_ptr
    std::cout << *ptr << std::endl;

    return 0;
}
