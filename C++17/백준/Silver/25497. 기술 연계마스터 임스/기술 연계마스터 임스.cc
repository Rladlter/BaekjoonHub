#include <iostream>
#include <string>
using namespace std;

int main() {
    string skills;
    int trash;
    int Lstack = 0, Sstack = 0, count = 0;
    cin >> trash >> skills;
    int n = skills.length();
    for (int i = 0; i < n; i++) {
        if (skills[i] == 'L') {
            Lstack++;
        }
        else if (skills[i] == 'R') {
            if (Lstack == 0) {
                cout << count;
                return 0;
            }
            Lstack--;
            count++;
        }
        else if (skills[i] == 'S') {
            Sstack++;
        }
        else if (skills[i] == 'K') {
            if (Sstack == 0) {
                cout << count;
                return 0;
            }
            Sstack--;
            count++;
        }
        else {
            count++;
        }
    }
    cout << count;
}