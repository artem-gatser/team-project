// Командный проект. Группа ПИ-53.
// Команда: Гацер (в. 82, техлид), Гудочкин (в. 14), Луканин (в. 36).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "gudochkin.h"
#include "gatser.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;
int main() {
	int choice, n;
	double P, r;
	do {
		cout << "\n=== Command Project: sbornik raschetov ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "1. Compound Total\n";
		cout << "2. Compound Interest\n";
		cout << "3. Sphere Surface\n";
		cout << "4. Sphere Volume\n";
		cout << "0. Exit\n";
		cout << "Select an option: ";
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cin >> choice;
		switch (choice) {
		// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 1:
			cout << "Enter the initial amount P (RUB): ";
			cin >> P;
			cout << "Enter the interest rate r (% at month): ";
			cin >> r;
			cout << "Enter the number of months n: ";
			cin >> n;
			cout << "Total amount including compound interest = " << compoundTotal(P, r, n) << "RUB.\n";
			break;
		case 2:
			cout << "Enter the initial amount P (RUB): ";
			cin >> P;
			cout << "Enter the interest rate r (% at month): ";
			cin >> r;
			cout << "Enter the number of months n: ";
			cin >> n;
			cout << "Compound interest amount = " << compoundInterest(P, r, n) << " RUB.\n";
			break;
		case 3:
			cin >> r;
			cout << "Sphere Surface = " << sphereSurface(r) << " m^2\n";
			cout << "Well Done.\n";
			break;
		case 4:
			cin >> r;
			cout << "Sphere Volume = " << sphereVolume(r) << " m^3\n";
			cout << "Well Done.\n";
			break;
		// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
		case 0:
			cout << "Well Done.\n";
			break;
		default:
			cout << "There is no such item.\n";
		}
	} while (choice != 0);
	return 0;
}
