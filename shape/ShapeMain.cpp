#include"Shape.h"

int main() {
	int input;
	int len;
	int amount=0;
	cout << "请问要计算什么图形的周长与面积" << endl;
	cout << "0停止 1正三角形  2正方形  3正五边形  4正六边形 5圆：";
	cin >> input;
	shape sum(0);
	while (input != 0) {
		get_in (input,sum,amount);
		cout << "请问要计算什么图形的周长与面积" << endl;
		cout << "0停止 1正三角形  2正方形  3正五边形  4正六边形 5圆：";
		cin >> input;
	}
	cout << "这" << amount << "个图形的总周长为" << sum.C_amount << endl;
	cout << "总面积为" << sum.S_amount << endl;
	return 0;
}