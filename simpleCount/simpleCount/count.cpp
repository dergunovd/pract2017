#pragma once
#include <cmath>
long double count(int X, int Y) {
	// ����� �������� � �������. �������� ��� �������� ���������
	X *= X;
	Y *= Y;

	//�������� �������
	return sqrt(exp(X + Y)) / (X - Y);
}