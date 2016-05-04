#include <iostream>

void c_workspace();
int add(int _nInputA, int _nInputB);

int multiple(int _nInputA, int _nInputB);

int minus(int _nInputA, int _nInputB);

double dvide(double _fInputA, double _fInputB);

void c_jop_workspace();

void c_work_job_workspace();

void c_jop_workspace()
{
	printf("%s\n", "저는 c_job_workspace 입니다.")
}

int main()
{
	int result;

	std::cout << "hellow world" << std::endl;

	result = add(1, 2);
}

void c_work_job_workspace()
{
	printf("%s\n", "저는 c_work_job_workspace 입니다.");
}

void c_workspace()
{
	printf("%s\n", "저는 c_workspace 입니다.");
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