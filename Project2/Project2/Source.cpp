/*
#include<iostream>
using namespace std;

int main() {


	int a;
	cout << "zadaj a: ";
	cin >> a;
	int vysledok = a * 2;
	cout << vysledok << endl;


	return 0;
}
*/



#include<iostream>
using namespace std;

int main() {
	int a= 10;
	int b = 20;
	int c;

	c = a;
	a = b;
	b = c;


	cout << "Hodnota a po vymene: " << a <<endl;
	cout << "Hodnota b po vymene: " << b <<endl;

	return 0;



}