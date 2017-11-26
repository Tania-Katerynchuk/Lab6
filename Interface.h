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
//введенн€ виразу
string Interface::InputExpression() {
	cout << "¬ведiть вираз: ";
	cin >> initialExpression;
	return initialExpression;
}
//виведенн€ виразу
string Interface::OutputExpression() {
	return initialExpression;
}
