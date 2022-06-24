/*
Ejercicio 3: Realice un programa que lea de la entrada estándar
los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/

#include <iostream>

using namespace std;


int main()
{
	int edad;
	char sexo[10];
	float altura;

	cout << "Introduzca Edad: " << endl; cin >> edad;
	cout << "Introduzca Sexo: \n"; cin >> sexo;
	cout << "Introduzca Altura en metros: " << endl; cin >> altura;

	cout << "\nEdad: " << edad << "." << endl << "Sexo: " << sexo << "." << endl << "Altura: " << altura << "m";

	return 0;
}