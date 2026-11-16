#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");
    int n, i, min_i = 0, sum = 0; // min_i — индекс (номер) минимального элемента
    int a[100];                 

    printf("Введите количество элементов массива (n): ");
    scanf("%d", &n);

    printf("Введите %d положительных и отрицательных целых чисел:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < a[min_i]) {
            min_i = i; 
        }
    }

    // Проверяем, есть ли после минимального элемента еще 3 соседа
    if (min_i + 3 < n) {
        sum = a[min_i + 1] + a[min_i + 2] + a[min_i + 3]; // Складываем 3 элемента справа
        printf("Сумма трех элементов после минимального: %d\n", sum);
    }
    else {
        printf("После минимального элемента меньше трех элементов.\n");
    }
    return 0;
}
