#include <iostream>
using namespace std;

string encrypt(string text, int shift)
{
	string result;
	result = "";
    for (int i = 0; i < text.length(); i++) {
		if (isupper(text[i]))
			//result += char(int(t[i] + shift - 65) % 26 + 65);
			result += char(int(text[i] + shift - 65) % 26 + 97);
		else
			//result += char(int(t[i] + shift - 97) % 26 + 97);
			result += char(int(text[i] + shift - 97) % 26 + 65);
	}

	return result;
}

string decrypt(string a, int shift)
{
	string result;
	result = "";
    for (int i = 0; i < a.length(); i++) {
		if (isupper(a[i]))
		
			result += char(int(a[i] - shift - 65) % 26 + 97);
		else
		
			result += char(int(a[i] - shift - 97) % 26 + 65);
	}

	return result;
}


int main()
{
	string text,a;
	int shift;
	cout << "Enter a Text here: ";
	cin >> text;
	cout << "Enter a Shift count: ";
	cin >> shift;
	cout << "Text : " << text;
	a = encrypt(text,shift);
	cout << "\nCipher: " << a;
	cout << "\nMain text: "<< decrypt(a,shift);
	
	
	return 0;
}
