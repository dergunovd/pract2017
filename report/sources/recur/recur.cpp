#include <cmath>
long double recur(int N, double result = 1) {
 // ���� ������������� �����
 if (N < 2)
	 return result;

 result = sqrt(1 + N*result);
 return recur(N - 1, result);
}