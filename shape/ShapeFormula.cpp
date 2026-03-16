#include "Shape.h"

double triangle::compute_C() {
	double C;
	C = len * 3;
	cout << "三角形的周长为" << C << endl;
	return C;
}
double triangle::compute_S() {
	double S;
	S = len * len*sqrt(3)/4.0;
	cout << "三角形的面积为" << S << endl;
	return S;
}

double square::compute_C() {
	double C;
	C = len * 4;
	cout << "正方形的周长为" << C << endl;
	return C;
}
double square::compute_S() {
	double S;
	S = len * len;
	cout << "正方形的面积为" << S << endl;
	return S;
}
double five::compute_C() {
	double C;
	C = len * 5;
	cout << "正五边形的周长为" << C << endl;
	return C;
}
double five::compute_S() {
	double S;
	S = len * len*tan(54*PI/180)*1.25;
	cout << "正五边形的面积为" << S << endl;
	return S;
}
double six::compute_C() {
	double C;
	C = len * 6;
	cout << "正六边形的周长为" << C << endl;
	return C;
}
double six::compute_S() {
	double S;
	S = len * len * sqrt(3) *1.5;
	cout << "正六边形的面积为" << S << endl;
	return S;
}
double m_round::compute_C() {
	double C;
	C = 2*PI*len;
	cout << "圆的周长为" << C << endl;
	return C;
}
double m_round::compute_S() {
	double S;
	S = PI*len*len;
	cout << "圆的面积为" << S << endl;
	return S;
}

void get_in(int input,shape &sum,int &amount) {
	double len;
	switch (input) {
	case 1:
	{
		cout << "请输入三角形的边长:";
		cin >> len;
		triangle shape(len);
		sum.C_amount += shape.compute_C();
		sum.S_amount += shape.compute_S();
		break;
	}
	case 2:
	{
		cout << "请输入正方形的边长:";
		cin >> len;
		square shape(len);
		sum.C_amount += shape.compute_C();
		sum.S_amount += shape.compute_S();
		break;
	}
	case 3:
	{
		cout << "请输入正五边形的边长:";
		cin >> len;
		five shape(len);
		sum.C_amount += shape.compute_C();
		sum.S_amount += shape.compute_S();
		break;
	}
	case 4:
	{
		cout << "请输入正六边形的边长:";
		cin >> len;
		six shape(len);
		sum.C_amount += shape.compute_C();
		sum.S_amount += shape.compute_S();
		break;
	}
	case 5:
	{
		cout << "请输入圆的半径:";
		cin >> len;
		m_round shape(len);
		sum.C_amount += shape.compute_C();
		sum.S_amount += shape.compute_S();
		break;
	}
	}
	amount++;
	cout <<endl<< "------------------------------------" << endl;
}
