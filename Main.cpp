#define _CRT_SECURE_NO_WARNINGS
#include "Calculator.h"

#include "Interface.h"

#include <iostream>
#include <clocale>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "ukr");

	Interface expression = "";
	//int choice = 1;

	//while (choice != 0) {
		//cout << "[1] - ���������� ������ � ������� ������\n[2] - �i� � ���������\n[3] - ���i������� ������i\n[0] - ���i� � ��������\n����i�� �i� ��� �� ������ ������: ";
		//cin >> choice;
	bool right = true;
	//if (choice == 1) {
	//while (right) {
		expression.InputExpression();
		Calculate calculate = expression.OutputExpression();
		calculate.RightExpression(expression.OutputExpression());
		calculate.TransferPolishForm();
		calculate.SteckMoveExit();
		cout<< expression.OutputExpression()<<" = "<<calculate.CalculationsPolishForm()<<endl;
		/*if (calculate.RightExpression()) {
			calculate.TransferPolishForm();
			calculate.SteckMoveExit();
			calculate.CalculationsPolishForm();
			right = false;
		}*/
		//else right = true;
		cout << endl;
	//}
	//}


	//else if (choice != 0)cout << "���������� ��������!!!\n";
//}
		system("pause");
}