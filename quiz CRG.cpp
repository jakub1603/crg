#include <iostream>
using namespace std;

int main () {
	int jednotka;
	cout << "Akej farby je obloha ? 1) ru�ov� 2) modr� 3) zelen� 4) oran�ov� " << endl;
	cin >> jednotka;
	if (jednotka == 2) {
		cout << "spr�vna odpoved" << endl;


			int dvojka;
			cout << "BMW je ? 5) zna�ka auta 6) lo� 7) lietadlo 8) ovocie" << endl;
			cin >> dvojka;
			if (dvojka == 5) {
				cout << "spravna odpoved" << endl;

				int trojka;
				cout << "cement je? 9)stavebn� materi�l 10)maliarsk� materi�l 11)druh hliny 12) druh k�vy" << endl;
				cin >> trojka;
				if (trojka == 9) {
					cout << "test �spe�ne dokon�en�, gratulujem" << endl;
				}
				else {
					cout << "pokazil si to na konci, zacni znovu" << endl;
				}
			}
			else {
				cout << "zla odpoved, chod od zaciatku" << endl;
			}
		}
		else {
			cout << "zacni znovu" << endl;

		}

	}
	0 comments on commit cf494fd "spr�vna odpoved" <<
