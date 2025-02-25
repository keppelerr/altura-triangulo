#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	float base, altura, area;
	cout << "cálculo da área de um triângulo!!! \n \n";
	cout << "informe a base: ";
	cin >> base;
	cout << "informe a altura: ";
	cin >> altura;
	
	area = base * altura / 2;
	
	cout << "a área do triângulo é: " << area; 
}
