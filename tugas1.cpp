#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Masukkan angka pertama" << endl;
    cin >> a;
    cout << "Masukkan angka kedua" <<endl;
    cin >> b;
    for(int i=a; i<b; i++){
        if (i%2 == 0){
            cout << i;
            cout << " ";
        }
    }
}