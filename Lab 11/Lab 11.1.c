#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#define N 10
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "rus");
	float A[N];
	float temp;
	float sum = 0;
	for (int i = 0; i < N; i++) {
		printf("a[%d] = ", i + 1);
		scanf("%f", &temp);
		A[i] = temp;
		sum += A[i];
	}
	printf("\n");
	printf("|  Индекс   |  Исходное значение   |  Новое значение   |\n");
	for (int i = 0; i < 10; i++) {
		printf("|%d          |%.3f              |%.3f           |\n", i + 1, A[i], A[i] * A[i]);
	}
	printf("Среднее арифметическое = %.5f", sum / 10);
}