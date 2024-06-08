#include <iostream>
#include <iomanip>

/**
 * \brief Функция для вычисления среднего арифметического трех чисел.
 * \param num1 Первое целое число.
 * \param num2 Второе целое число.
 * \param num3 Третье целое число.
 * \param result Результат - среднее арифметическое трех чисел.
 */
void computeAverage(int& num1, int& num2, int& num3, float& result) {
    result = (num1 + num2 + num3) / 3.0; // Вычисляем среднее арифметическое
}

int main() {
    setlocale(LC_ALL, "Russian");
    int num1, num2, num3;
    float averageResult;

    std::cout << "Введите три целых числа: ";
    std::cin >> num1 >> num2 >> num3;

    computeAverage(num1, num2, num3, averageResult);

    std::cout << "Среднее арифметическое: " << std::fixed << std::setprecision(2) << averageResult << std::endl;

    return 0;
}