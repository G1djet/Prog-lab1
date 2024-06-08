/**
 * @file main.cpp
 * @brief Программа для вывода n одинаковых строк с помощью рекурсии.
 *
 * Данная программа позволяет пользователю ввести строку и количество повторений, а затем выводит на консоль введенную строку n раз с использованием рекурсивной функции.
 */

#include <iostream>

using namespace std;

static int countCalls = 0; // Глобальная переменная для подсчета вызовов рекурсивной функции

/**
 * @brief Функция для вывода n одинаковых строк с помощью рекурсии.
 *
 * Данная функция выводит на консоль введенную строку n раз, используя рекурсивный подход. При каждом вызове функции увеличивается счетчик вызовов.
 *
 * @param str Строка, которую необходимо вывести.
 * @param n Количество повторений строки.
 */
void printRepeatedString(string str, int n) {
    countCalls++; // Увеличиваем счетчик при каждом вызове рекурсивной функции

    if (n == 0) {
        cout << "Количество вызовов рекурсивной функции: " << countCalls << endl;
        return; // Базовый случай: если n равно 0, выводим количество вызовов и завершаем выполнение функции
    }

    cout << str << endl; // Выводим строку

    printRepeatedString(str, n - 1); // Рекурсивный вызов printRepeatedString с уменьшением значения n на 1
}

/**
 * @brief Главная функция программы.
 *
 * Программа запрашивает у пользователя строку и количество повторений, затем вызывает функцию printRepeatedString() для вывода строки n раз.
 *
 * @return Возвращает 0 в случае успешного завершения программы.
 */
int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    string str;

    cout << "Введите строку: ";
    cin >> str;

    cout << "Введите количество повторений: ";
    cin >> n;

    printRepeatedString(str, n); // Вызов функции printRepeatedString для вывода строк

    return 0;
}