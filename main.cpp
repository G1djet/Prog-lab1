#include <iostream>
#include <cmath>
/** @brief вычисление значения выражения в зависимости от вводимого x
 * 
 *  @param x аргумент 1 выражения
 *  @param y аргумент 2 выражения
 *  @param f значение выражения

 *  @result f
 */
float calculateF(float x, float y) {
    float f;
    float e = std::exp(1.0);
     
    if ((x >= 0) && (y > -x)) { //1е условие
        f = (1 - std::pow((x + y), 0.5)) / std::log(x + y); //вычисление значения при 1м условии
    }
    else if (x < 0) { //1е условие
        f = std::exp(y) + std::fabs((std::cos(x) - 1) * (std::pow(2, y))); //вычисление значения при 2м условии
    }
    else { //1е условие
        f = 1 / (std::exp(x - y) + std::exp(x + y)); //вычисление значения при 3м условии
    }
     
    return f;
}

/** @brief ввод x и y, вывод f
 * 
 *  @param x аргумент 1 выражения
 *  @param y аргумент 2 выражения
 *  @param f значение выражения

 *  @result f
 */
int main() {

    setlocale(LC_ALL, "Russian"); 
     
     float x, y, f;
    std::cout << "Введите действительный x:" << std::endl;
    std::cin >> x;
    std::cout << "Введите действительный y:" << std::endl;
    std::cin >> y;

     f = calculateF(x, y);
     
     std::cout << "Результат = " << f << std::endl;
     
     return 0;
}