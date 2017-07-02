#pragma once
#include <cmath>
long double count(int X, int Y) {
	// Сразу возводим в квадрат. Экономим две операции умножения
	X *= X;
	Y *= Y;

	//Значение функции
	return sqrt(exp(X + Y)) / (X - Y);
}