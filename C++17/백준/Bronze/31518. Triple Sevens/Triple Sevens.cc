#include <iostream>
using namespace std;

int main(){
    int n;
    int check = 0;
    cin >> n;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            int a;
            cin >> a;
            if(a==7){
                check++;
            }
        }
    }
    if(check==3){
        cout << "777";
    }
    else{
        cout << "0";
    }
}