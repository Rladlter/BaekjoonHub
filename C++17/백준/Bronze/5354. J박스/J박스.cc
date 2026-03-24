#include <iostream>
using namespace std;

int main() {
    int Case;
    int box[10];
    cin >> Case;
    for (int i = 0;i < Case;i++) {
        cin >> box[i];
    }
    for (int i = 0; i < Case;i++) {
        if (box[i] != 1) {
            for (int j = 0; j < box[i]; j++) {
                cout << "#";
            }
            for (int j = 2; j < box[i];j++) {
                cout << endl << "#";
                for (int k = 2; k < box[i]; k++) {
                    cout << "J";
                }
                cout << "#";
            }
            cout << endl;
            for (int j = 0; j < box[i]; j++) {
                cout << "#";
            }
        }
        else if (box[i] == 1) {
            cout << "#";
        }
        else {
            cout << "";
        }
        if (i != Case - 1)
            cout << endl << endl;
    }
}