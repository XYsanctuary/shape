#pragma once
#define PI 3.1415926535
#include <cmath>
#include<iostream>
using namespace std;
class shape {
public:
	double C_amount;
	double S_amount;
	double len;
	shape(double input) :C_amount(0), S_amount(0),len(input) {};
	~shape() {};
};

class triangle :virtual public shape {
public:
	triangle(double input) :shape(input) {};
	~triangle() {};
	double compute_C();
	double compute_S();
};

class square :virtual public shape {
public:
	square(double input) :shape(input) {};
	~square() {};
	double compute_C();
	double compute_S();
};

class five :virtual public shape {
public:
	five(double input) :shape(input) {};
	~five() {};
	double compute_C();
	double compute_S();
};

class six :virtual public shape {
public:
	six(double input) :shape(input) {};
	~six(){};
	double compute_C();
	double compute_S();
};

class m_round :virtual public shape {
public:
	m_round(double input) :shape(input) {};
	~m_round() {};
	double compute_C();
	double compute_S();
};

void get_in(int input, shape& sum, int& amount);
