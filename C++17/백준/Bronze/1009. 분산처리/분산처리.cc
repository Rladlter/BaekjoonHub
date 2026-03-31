#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0;i < T;i++) {
        long long a, b;
        cin >> a >> b;
        long long result = 1;
        for (int j = 0; j < b; j++) {
            result = (result * a) % 10;
        }
        if (result == 0) {
            cout << 10 << endl;
        }
        else {
            cout << result << endl;
        }
    }
}