#include <iostream>
using namespace std;

int main() {
    int phonenum, newphonenum;
    cin >> phonenum >> newphonenum;
    for (int i = 2;i <= phonenum / 2;i++) {
        if (phonenum % i == 0) {
            cout << "No";
            return 0;
        }
    }
    newphonenum = newphonenum * 1000000 + phonenum;
    for (int i = 2; i <= newphonenum / 2; i++) {
        if (newphonenum % i == 0) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}