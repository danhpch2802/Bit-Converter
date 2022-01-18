#include "Header.h"
using namespace std;

int main()
{
	int choice = 1;;
	int bit, type, sign;
	do {
		cout << "1.Decimal\n2.Binary\n3.Exit\nChoice:";
		cin >> choice;
		switch (choice) {
		case 1:
		{
			cout << "1.Float\n2.Int\nChoice:";
			cin >> type;
			if (type == 1)
			{
				cout << "1.32 bit (Float)\n2.64 bit (Double)\nChoice:";
				cin >> bit;
				if (bit == 1)
				{
					bit = 32;
					my_float input;
					cout << "Enter float:";
					cin >> input.f;
					cout << "Binary:" << float_binary(input) << endl;
					system("pause");
					break;
				}
				else
				{
					bit = 64;
					my_double input;
					cout << "Enter double:";
					cin >> input.d;
					cout << "Binary:" << double_binary(input) << endl;
					system("pause");
					break;
				}
				break;

			}
			else
			{
				cout << "1.8 bit(0-255)\n2.16 bit(0-65,536,32)\n3.32 bit(0-214748364)\nChoice:";
				cin >> bit;
				switch (bit) {
				case 1: {bit = 8; break; }
				case 2: {bit = 16; break; }
				case 3: {bit = 32; break; }
				}
				cout << "1.Unsigned\n2.Signed\nChoice:";
				cin >> sign;
				if (sign == 1)
				{
					unsigned int input;
					cout << "Unsigned int:";
					cin >> input;
					cout << "Binary:" << unsign_binary(input, bit) << endl;
					system("pause");
					break;
				}
				else
				{
					int input;
					cout << "Int:";
					cin >> input;
					cout << "Binary (Two's complement):" << sign_binary(input, bit) << endl;
					system("pause");
					break;
				}
			}
			system("CLS");
			break;
		}
		case 2:
		{
			cout << "1.Float\n2.Int\nChoice:";
			cin >> type;
			if (type == 1)
			{
				cout << "1.32 bit (Float)\n2.64 bit (Double)\nChoice:";
				cin >> bit;
				if (bit == 1)
				{
					bit = 32;
					string input;
					cout << "Binary:";
					getline(cin, input);
					getline(cin, input);
					cout << "Float:" << binary_float(input) << endl;
					system("pause");
					break;
				}
				else
				{
					bit = 64;
					string input;
					cout << "Binary:";
					getline(cin, input);
					getline(cin, input);
					cout << "Double:" << binary_double(input) << endl;
					system("pause");
					break;
				}
				break;
			}
			else
			{
				cout << "1.Unsigned\n2.Signed\nChoice:";
				cin >> sign;
				if (sign == 1)
				{
					string input;
					cout << "Binary:";
					getline(cin, input);
					getline(cin, input);
					cout << "Unsigned int:" << binary_unsigned(input) << endl;
					system("pause");
					break;
				}
				else
				{
					string input;
					cout << "Binary:";
					getline(cin, input);
					getline(cin, input);
					cout << "Signed int:" << binary_sign(input) << endl;
					system("pause");
					break;
				}
			}
			system("CLS");
			break;
		}
		case 0: break;
		}
		system("CLS");
		} while (choice != 0);
		
}