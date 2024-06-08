#include <iostream>

static int countCalls = 0;

/**
 * \brief Выводит строку заданное количество раз и подсчитывает количество вызовов.
 * \param str Строка, которую необходимо повторить.
 * \param n Количество повторений.
 */
void printRepeatedString(std::string str, int n) {
    countCalls++;

    if (n == 0) {
        std::cout << "Количество вызовов рекурсивной функции: " << countCalls << std::endl;
        return;
    }

    std::cout << str << std::endl;

    printRepeatedString(str, n - 1);
}

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    std::string str;

    std::cout << "Введите строку: ";
    std::cin >> str;

    std::cout << "Введите количество повторений: ";
    std::cin >> n;

    printRepeatedString(str, n);

    return 0;
}