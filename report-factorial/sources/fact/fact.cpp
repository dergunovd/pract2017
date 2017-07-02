#pragma once
long double fact(int N) {
	// если отрицательное число
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}