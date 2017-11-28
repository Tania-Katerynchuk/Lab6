#define _CRT_SECURE_NO_WARNINGS
#include "Calculator.h"
#include "Interface.h"
#include <iostream>
#include <clocale>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "ukr");

	Interface expression = "";
	bool right = true;
	expression.InputExpression();
	Calculate calculate = expression.OutputExpression();
	cout << expression.OutputExpression() << " = ";
	if (calculate.RightExpression(expression.OutputExpression())) {
		calculate.TransferPolishForm();
		calculate.SteckMoveExit();
		cout << calculate.CalculationsPolishForm() << endl;
	}	
	system("pause");
}