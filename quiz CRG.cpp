#include <iostream>
using namespace std;

int main () {
	int jednotka;
	cout << "Akej farby je obloha ? 1) ružová 2) modrá 3) zelená 4) oranžová " << endl;
	cin >> jednotka;
	if (jednotka == 2) {
		cout << "správna odpoved" << endl;


			int dvojka;
			cout << "BMW je ? 5) znaèka auta 6) loï 7) lietadlo 8) ovocie" << endl;
			cin >> dvojka;
			if (dvojka == 5) {
				cout << "spravna odpoved" << endl;

				int trojka;
				cout << "cement je? 9)stavebný materiál 10)maliarský materiál 11)druh hliny 12) druh kávy" << endl;
				cin >> trojka;
				if (trojka == 9) {
					cout << "test úspešne dokonèený, gratulujem" << endl;
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
	0 comments on commit cf494fd "správna odpoved" <<
