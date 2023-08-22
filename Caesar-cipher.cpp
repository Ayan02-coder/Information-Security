//RBT21CB021
#include <iostream>
using namespace std;

string encry(string t, int shift)
{
	string result = "";
    for (int i = 0; i < t.length(); i++) {
		if (isupper(t[i]))
			result += char(int(t[i] + shift - 65) % 26 + 97);
			
		else
			result += char(int(t[i] + shift - 97) % 26 + 65);
	}

	return result;
}


int main()
{
	string t = "ENGINEERING";
	int shift = 3;
	cout << "Text : " << t;
	cout << "\nCipher: " << encry(t, shift);
	return 0;
}
