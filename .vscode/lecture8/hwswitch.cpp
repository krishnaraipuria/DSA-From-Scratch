#include <iostream>
using namespace std;
int main() {
 int amount;
    cout << "Enter amount here - ";
    cin >> amount;
    int note;
    switch(1){
        case 1: {
            note = amount / 100;
            amount = amount % 100;
            cout << note << " 100 rs note " << endl;
        }
        case 2: {
            note = amount / 50;
            amount = amount % 50;
            cout << note << " 50 rs note " << endl;
        }
        case 3: {
            note = amount / 20;
            amount = amount % 20;
            cout << note << " 20 rs note " << endl;
        }
        case 4: {
            note = amount / 1;
            amount = amount % 1;
            cout << note << " 1 rs note " << endl;
        }
    }
}

