// Командный проект. Группа ПИ-53.
// Команда: Гацер (в. 82, техлид), Гудочкин (в. 14), Луканин (в. 36).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// #include "gatser.h"
#include "gudochkin.h"
// #include "lukanin.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;
int main() {
	int choice;
	double r;
	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cout << "3. Площадь\n";
		cout << "4. Объем\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
			// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
			// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
		case 3:
			cin >> r;
			cout << "Площадь = " << sphereSurface(r) << " m^2\n";
			cout << "Работа завершена.\n";
			break;
		case 4:
			cin >> r;
			cout << "Объем = " << sphereVolume(r) << " m^3\n";
			cout << "Работа завершена.\n";
			break;
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}
