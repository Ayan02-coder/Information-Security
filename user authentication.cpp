#include <iostream>
#include <string>
using namespace std;

int main(){
    string username = "JSPM";
    string password = "RSCOE";
    string user;
    string pass;
    cout << "Enter Your username: ";
    cin >> user;
    if (user == username){
        cout << "Enter password: " << endl;
        cin >> pass;
        if (pass == password){
            cout << "Authentication Successful" << endl;
        }
        else {
            cout << "Authentication Fail" << endl;
        }
    }
    else {
        cout << "Incorrect Username!" << endl;
    }
}
