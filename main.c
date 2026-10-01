#include <stdio.h>
#include <math.h>

int main() {
    double a, b, x, F;

    // Ввод данных пользователем за запросом
    printf("Введите значение a: ");
    scanf("%lf", &a);

    printf("Введите значение b: ");
    scanf("%lf", &b);

    printf("Введите значение x: ");
    scanf("%lf", &x);

    // Проверка деления на ноль
    if (x == 0) {
        printf("Ошибка: x не может быть равен 0 (деление на 0 в arctg(a/x)).\n");
        return 1;
    }
    if (b - x == 0) {
        printf("Ошибка: b - x не может быть равно 0 (деление на 0 в знаменателе).\n");
        return 1;
    }

    // Вычисление выражения
    F = atan(a / x) / (b - x);

    // Вывод результата
    printf("\nРезультат F(x) = %.6lf\n", F);

    return 0;
}