#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class aeroflot {
	private: int fli, dest, tick, summ;
	public: 
		aeroflot(): fli(0), dest(0), tick(0), summ(0) {}	//констр-р инициализации полей нулевыми знач.
		aeroflot(int f, int d, int t, int s): fli(f), dest(d), tick(t), summ(s) {}	//констр-р инициализации полей заданным набором знач.
		void getdate(); 
		void display() 
			{cout << "№ рейса: "<< fli << ";	№ пункта назначения: " << dest << ";	кол-во билетов: " << tick;};	//вывод данных на экран
		void add(aeroflot o1, aeroflot o2, aeroflot o3) 
			{summ=o1.tick+o2.tick+o3.tick;};	//подсчет общего кол-ва билетов
		void disp_tick() {cout << summ << endl;};	//вывод суммы билетов
}; 

void aeroflot:: getdate() 
	{cout << "Введите № рейса, № пункта назначения, кол-во билетов: "; 
	cin >> fli >> dest >> tick;}	//ввод данных с клавиатуры (значение для объекта)

int main()
{
    setlocale(LC_ALL, "Russian");
	aeroflot p1, p2, p3, s;
    
	p1.getdate();
	p2.getdate();
	p3.getdate();
	
	cout << "  Объект: p1;	"; p1.display(); cout << endl; 
	cout << "  Объект: p2;	"; p2.display(); cout << endl; 
	cout << "  Объект: p3;	"; p3.display(); cout << endl; 
    
	cout << "Всего билетов = "; s.add(p1, p2, p3); s.disp_tick();
    
    system ("pause");
    return 0;
}
