#pragma once
#include <iostream>
#include <string>
#include<math.h>

using namespace std;
union my_float {
	float f;
	unsigned u;
};
union my_double {
	double d;
	long long u;
};
int binary_unsigned(string n);
string unsign_binary( int n, int& bit);
string sign_binary(int n, int& bit);
string one_comple(const string& binary);
int binary_sign(const string& binary);
string float_binary(const my_float input);
float binary_float(const string input);
double binary_double(const string input);
string double_binary(const my_double input);


