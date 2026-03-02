#pragma once
#include <iostream>

#include <stack>
using namespace std;

class clsMyString
{
	string	_Value;
	stack<string> st1;
	stack<string> st2;
public:

clsMyString() {
	_Value = "";
	
}
void setValue(string value) {
	st1.push(_Value);
	_Value = value;
}
string getValue() {
	return _Value;
}

void Undo() {
	
		if (!st1.empty()) {
			st2.push(_Value);
			_Value=st1.top();
			st1.pop();
		}
}
void Redo() {
	if (!st2.empty()){
		st1.push(_Value);
		_Value = st2.top();
		st2.pop();
}
}
};

