#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
struct aeroflot{int flight; int destination; int tickets;};
int main()
{
    setlocale(LC_ALL, "Russian");
    aeroflot plane[500];
    int max, r;
    
    cout << "Введите данные:" << endl << endl;
    cout << "№ рейса  № пункта  кол-во билетов" << endl;
    
    for (int i=0; i<10; i++)
    	cin >> plane[i].flight >> plane[i].destination >> plane[i].tickets;
    cout << endl;
    
    max=plane[0].tickets;
	
	for (int i=1; i<10; i++)
		if (max<plane[i].tickets) { 
			max=plane[i].tickets; r=i;}
	
	cout << "Максимальное кол-во билетов = " << plane[r].tickets << " на рейс №" << plane[r].flight << " в пункт назначения №" << plane[r].destination << endl << endl; 
    
    system ("pause");
    return 0;
}
