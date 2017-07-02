#include "date.h"

//строку в дату
date s2d(System::String ^ str){
    date date;
	//день
	if (!System::Int32::TryParse(str->Substring(0, 2), date.d)) {
		date.d = 0;
	}
    //месяц
	if (!System::Int32::TryParse(str->Substring(3, 2), date.m)) {
		date.m = 0;
	}
    //год
	if (!System::Int32::TryParse(str->Substring(6, 4), date.y)) {
		date.y = 0;
	}
    return date;
}

//високосный
int vis(int y) {
    return (y%4==0 && y%100 != 0) || y%400 == 0;
}

//дата А не больше чем дата Б
bool aNotMoreThenB(date a, date b) {
	if (a.y < b.y
		|| a.y == b.y && a.m < b.m
		|| a.y == b.y && a.m == b.m && a.d <= b.d)
		return true;
	return false;
}

//дату в строку
System::String ^ printDate(date d) {
	System::String ^ s = "";
    if (d.d<10) 
        s += "0";
    s += d.d + ".";
    if (d.m<10) 
        s += "0";
    s += d.m + ".";
    if (d.y<10) 
        s += "000";
    else if (d.y<100) 
        s += "00";
    else if (d.y<1000) 
        s += "0";
    s += d.y;
    return s;
}

//равенство дат
bool eq(date a, date b) {
    if(a.d==b.d && a.m==b.m && a.y==b.y)
        return true;
    return false;
}

//конец месяца
int eom(int m,int y) {
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: if(vis(y)) return 29;
            else return 28;
    }
}

//корректность даты
bool cor(date d) {
    if(d.d>0 && d.d<=eom(d.m,d.y) 
        && d.m>0 && d.m<13
        && d.y>0 && d.y<10000)
        return true;
    return false;
}

//следующий день
date nextDay(date d){
    date nd = d;

    if(d.d < eom(d.m,d.y)) {
        nd.d = d.d+1;
    } else if(d.m < 12){
        nd.d = 1;
        nd.m = d.m + 1;
    } else {
        nd.d = 1;
        nd.m = 1;
        nd.y = d.y + 1;
    }
    return nd;
}

//сколько дней между датами
int hmd(date a, date b) {
    int i = 0;
    while(!eq(a,b)){
        a = nextDay(a);
        i++;
    }
	return i;
}