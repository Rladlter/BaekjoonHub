#include <iostream>
using namespace std;

int main(){
    int n;
    int array[101];
    cin >> n;
    for(int i;i<n;i++){
        cin >> array[i];
    }
    for(int i;i<n;i++){
        if(array[i]<250){
            cout << "4";
        }
        else if(array[i]<275){
            cout << "3";
        }
        else if(array[i]<300){
            cout << "2";
        }
        else{
            cout << "1";
        }
        if(i!=n-1){
            cout << " ";
        }
    }
}