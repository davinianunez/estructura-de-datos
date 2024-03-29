#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector()
{

}
Vector::~Vector()
{

}
void Vector::set_n(int _n)
//Da valor al atributo n o seta
{
	n = _n;
}
int Vector::get_n()
//Devolver el valor del atributo n
{
	return n;
}
void Vector::cargarVector(int _vec[], int _n)
//Equivale a setear el vector, dar el valor al vector
//Los arreglos funcionan por referencia no necesitan &
{
	for (int i = 0; i < _n; i++) {
		cout << "Vec[" << i << "]=";
		cin >> _vec[i];
	}
}
int Vector::mostrarVector(int _vec[])
{
	for (int i = 0; i < n; i++)
		cout << "_Vector[" << i << "]=" << _vec[i] << endl;
	return 0;
}
void Vector::ordenarVector(int _vec[], int _vec2[])
{
	int aux;
	for (int i = 0; i < n - 1; i++)
	{
		_vec2[i] = _vec[i];
		for (int j = i; j < n; j++)
		{
			if (_vec[i] > _vec[j])
			{
				aux = _vec[i];
				_vec[i] = _vec[j];
				_vec[j] = aux;
			}
		}
	}
}
int Vector::promedio(int _vec[], int _n)
{
	int prom, aux = 0; //aux es el acumlador de suma, se inicializa en 0
	for (int i = 0; i < _n; i++) 
		aux += _vec[i];
	prom = aux / _n;
	return prom;
}
