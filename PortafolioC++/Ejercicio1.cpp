/************************************************
* Ejercicio 1
* Jesus Ponce
*
* Pedir los coeficientes de una ecuación se 2º grado,
* y muestre sus soluciones reales. Si no existen,
* debe indicarlo.
************************************************/

#include <iostream>
#include <math.h>
#include "Ejercicio1.h"
using namespace std;

void Ejercicio1::Inicio()
{
	double a, b, c, x1, x2, discriminante;

	cout << "\tIntroduzca primer coeficiente (a):";
	cin >> a;
	cout << "\tIntroduzca segundo coeficiente (b):";
	cin >> b;
	cout << "\tIntroduzca tercer coeficiente (c):";
	cin >> c;

	discriminante = b * b - 4 * a * c;

	cout << discriminante;

	if (discriminante < 0)
		cout << "\tNo existen soluciones reales";
	if (a != 0) {
		x1 = (-b + sqrt(discriminante)) / (2 * a);
		x2 = (-b - sqrt(discriminante)) / (2 * a);
		cout << "\tSolucion 1: " << x1 << "";
		cout << "\tSolucion 2: " << x2 << "";
	}
	else
		cout << "\t a debe ser diferente de cero para que se pueda realizar la division";

	cout << "\n\n\t";
	system("pause");
}
