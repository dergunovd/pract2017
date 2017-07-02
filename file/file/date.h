#pragma once

struct date {
	int d;
	int m;
	int y;
};

date s2d(System::String ^ str);

int vis(int y);

bool aNotMoreThenB(date a, date b);

System::String ^ printDate(date d);

bool eq(date a, date b);

int eom(int m, int y);

bool cor(date d);

date nextDay(date d);

int hmd(date a, date b);