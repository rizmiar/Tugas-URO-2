#include <iostream>
using namespace std;

int main(){
    int jumlah;
    float bilangan = 0;
    float b;
    cout << "jumlah bilangan: ";
    cin >> jumlah;
    for(int i = 0; i < jumlah; i++){
        cout <<"bilangan ";
        cout << (i+1);
        cout << ": ";
        cin >> b;
        bilangan = bilangan + b;
    }
    cout << "RATA-RATA: ";
    cout << bilangan/jumlah;
}