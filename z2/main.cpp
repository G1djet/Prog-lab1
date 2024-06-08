/**
 * @file main.cpp
 * @brief Программа для вычисления среднего арифметического трёх целых чисел.
 *
 * Данная программа позволяет пользователю ввести три целых числа и вычислить их среднее арифметическое.
 */

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * @brief Вычисляет среднее арифметическое трёх целых чисел.
 *
 * Функция вычисляет среднее арифметическое трёх целых чисел и сохраняет результат в ссылочный параметр.
 *
 * @param num1 Первое целое число.
 * @param num2 Второе целое число.
 * @param num3 Третье целое число.
 * @param result Ссылка на переменную, куда будет сохранён результат.
 */
void computeAverage(int& num1, int& num2, int& num3, float& result) {
    result = (num1 + num2 + num3) / 3.0; // Вычисляем среднее арифметическое
}

/**
 * @brief Главная функция программы.
 *
 * Программа запрашивает у пользователя три целых числа, вызывает функцию computeAverage() для вычисления их среднего арифметического и выводит результат на консоль.
 *
 * @return Возвращает 0 в случае успешного завершения программы.
 */
int main() {
    setlocale(LC_ALL, "Russian"); 
    int num1, num2, num3;
    float averageResult;

    cout << "Введите три целых числа: ";
    cin >> num1 >> num2 >> num3;

    computeAverage(num1, num2, num3, averageResult);

    cout << "Среднее арифметическое: " << fixed << setprecision(2) << averageResult << endl;

    return 0;
}