// Для того, чтобы компилятор выводил русские символы
#include <windows.h>
// Подключение стандартной библиотеки для ввода и вывода данных
#include <iostream>
// Нужно чтобы не писать каждый раз std
using namespace std;
// Подключение библиотеки для работы с математическим оператором
#include <cmath>
// Подключение библиотеки для форматирования вывода
#include <iomanip>

int main() {
    // Для вывода русских букв в консоль
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // std::cout - оператор вывода данных
    // std::endl - манипулятор потока вывода для перевода на новую строку
    std::cout << "Hello, World!" << std::endl << std::endl << std::endl;
    cout << "Hello, World!" << endl << endl << endl;

    // переменная - ячейка в памяти компьютера, которая хранит в себе информацию
    // Основные типы данных C++
    //
    // Тип               Размер*     Диапазон / значение                         Пример
    // -----------------------------------------------------------------------------------------------
    // bool               1  байт      false / true                               bool isReady = true;
    // char               1  байт      -128 ... 127                               char letter = 'A';
    // unsigned char      1  байт      0 ... 255                                  unsigned char age = 25;
    // short              2  байта     -32 768 ... 32 767                         short temperature = -15;
    // unsigned short     2  байта     0 ... 65 535                               unsigned short count = 50000;
    // int                4  байта     -2 147 483 648 ... 2 147 483 647           int age = 20;
    // unsigned int       4  байта     0 ... 4 294 967 295                        unsigned int users = 3000000000;
    // long long          8  байт      -9 223 372 036 854 775 808 ...
    //                                9 223 372 036 854 775 807                   long long population = 8000000000LL;
    // unsigned long long 8  байт      0 ... 18 446 744 073 709 551 615           unsigned long long stars = 10000000000ULL;
    // float              4  байта     примерно ±3.4 × 10^38                      float height = 1.75f;
    // double             8  байт      примерно ±1.7 × 10^308                     double price = 199.99;
    // long double        10 байт      примерно ±3.4 × 10^4932                    long double price = 199.99;

    int num1, num2;
    // std::cin - оператор ввода данных
    std::cin >> num1 >> num2;
    std::cout << std::endl;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    // static_cast<float>(num1) - явное преобразование типа данных в float. Если бы делили без преобразования одного из чисел, то сначало бы произошло деление (ответ был целочисленным), а потом преобразование в float. Нам нужен ответ с дробной частью, поэтому преобразовываем
    float quotient = static_cast<float>(num1) / num2;
    
    int remainder = num1 % num2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    // std::fixed - манипулятор потока вывода, который говорит выводить вещественное число в обычном десятичном формате
    // std::setprecision(5) - манипулятор потока вывода, который указывает вывести 5 знаков после запятой
    std::cout << "Quotient: " << std::fixed << std::setprecision(5) << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    // pow(число, степень) - возведение числа в степень
    int _pow = pow(3, 3);
    std::cout << "Куб числа 3: " << _pow << std::endl;

    // abs(число) - вычисленеи модуля числа
    int minus = -12;
    minus = abs(minus);
    std::cout << "Модуль: " << minus << std::endl;

    return 0;
}