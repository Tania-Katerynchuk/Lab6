#pragma once
#include <iostream>
#include <string>

using namespace std;

class Interface {
protected:
	string initialExpression;
public:
	
	Interface() {}
	Interface(string f1);
	string InputExpression();
	string OutputExpression();
};

Interface::Interface(string f1) {
	initialExpression = f1;
}
//�������� ������
string Interface::InputExpression() {
	cout << "����i�� �����: ";
	cin >> initialExpression;
	return initialExpression;
}
//��������� ������
string Interface::OutputExpression() {
	return initialExpression;
}
