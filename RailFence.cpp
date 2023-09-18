// Rail Fence Encryption Code

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string railFenceEncryption(const string& plaintext, int railCount) {
    vector<string> rails(railCount);
    int row = 0;
    bool down = true;

    for (char c : plaintext) {
        rails[row] += c;

        if (row == 0) {
            down = true;
        } else if (row == railCount - 1) {
            down = false;
        }

        if (down) {
            row++;
        } else {
            row--;
        }
    }

    string ciphertext;
    for (const string& rail : rails) {
        ciphertext += rail;
    }

    return ciphertext;
}

int main() {
    string plaintext, ciphertext;
    int railCount;

    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    cout << "Enter the number of rails: ";
    cin >> railCount;

    ciphertext = railFenceEncryption(plaintext, railCount);

    cout << "Encrypted message: " << ciphertext << endl;

    return 0;
}









                                       //OutPut
        /* Enter plaintext: Ayansayyad
           Enter the number of rails: 3
           Encrypted message:  */

                            
