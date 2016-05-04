#include <iostream>

int add(int _nInputA, int _nInputB);

int multiple(int _nInputA, int _nInputB);

int minus(int _nInputA, int _nInputB);

double dvide(double _fInputA, double _fInputB);


int main()
{

	std::cout << "hellow world" << std::endl;
}

int add(int _nInputA, int _nInputB)
{
	return _nInputA + _nInputB;
}


int multiple(int _nInputA, int _nInputB)
{
	return _nInputA * _nInputB;
}
int minus(int _nInputA, int _nInputB)
{
	return _nInputA - _nInputB;
}

double dvide(double _fInputA, double _fInputB)
{
	return _fInputA / _fInputB;
}