#pragma once
#include <cmath>
long double count(int X, int Y) {
	//�������� �������
	return (sin(X)*sin(X) + Y*Y) / ((Y - 4)*abs(X - 1));
}