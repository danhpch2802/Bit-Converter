#include "Header.h"

string unsign_binary(int n,int &bit)
{
	string s="";
	string rev ;
	int count = 0;
	unsigned int temp = n;
	while (temp)
	{
		int k = temp % 2;
		temp = temp / 2;
		s += to_string(k);
		count++;
	}

	rev = string(s.rbegin(), s.rend());
	if (count < bit)
	{
		for (int i = count; i < bit; i++) rev.insert(rev.begin() , '0');
	}
	return rev;
}
int binary_unsigned(string n)
{
	string num = n;
	int dec_value = 0;
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}

void not_op(char& digit) {
	digit = (digit == '0') ? '1' : '0';
}

string one_comple(const string& binary) {
	if (binary[0] == '0') // non-negative number.
		return binary;
	string one = binary;
	for (int i = 1; i < binary.length(); i++)
		not_op(one[i]);
	return one;
}


string sign_binary (int n, int& bit)
{
	string two = unsign_binary(n, bit);
	return two;
}

int binary_sign(const string& binary)
{
	if (binary[0] == '0')
		return binary_unsigned(binary);
	string two = binary;
	string one = two;
	for (int j = two.length() - 1; j > 0; j--)
	{
		if (two[j] == '0')
			one.replace(j, 1, "1");
		else
		{
			one.replace(j, 1, "0");
			break;
		}
	}
	one = one_comple(one);
	one.erase(one.begin());
	int temp = binary_unsigned(one);
	temp *= -1;
	return temp;
}

string float_binary(const my_float input)
{
	string s;
	int k = 32;
	s = unsign_binary(input.u, k);
	return s;
}

float binary_float(const string input)
{
	int k = binary_unsigned(input);
	my_float t;
	t.u = k;
	return t.f;
}

string double_binary(const my_double input)
{
	string s="";
	int k = 64;
	int i;
	uint64_t base=1;
	s+= to_string((input.u & (base << 63))) ;
	for (i = 62; i > 51; --i) s += to_string(((input.u & (base << i)) >> i));
	for (; i >= 0; --i) s+=to_string(((input.u & (base << i)) >> i));
	return s;
}

double binary_double(const string input)
{
	long long int base = 0;
	for (string::const_iterator it = input.begin(); it != input.end(); ++it)
		base = (base << 1) + (*it - '0');
	double d;
	memcpy(&d, &base, 8);
	return d;
}
