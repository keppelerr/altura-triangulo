#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	float base, altura, area;
	cout << "c�lculo da �rea de um tri�ngulo!!! \n \n";
	cout << "informe a base: ";
	cin >> base;
	cout << "informe a altura: ";
	cin >> altura;
	
	area = base * altura / 2;
	
	cout << "a �rea do tri�ngulo �: " << area; 
}
