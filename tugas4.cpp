#include <iostream>
using namespace std;
int main(){
    int tahun;
    cout << "Tentukan tahun kabisat" <<endl;
    cout << "Tahun: ";
    cin >> tahun;
    cout << endl;
    if (tahun % 400 == 0 && tahun % 100 != 0){
        cout << "Tahun kabisat" << endl;
    }
    else if(tahun%4 == 0){
        cout << "Tahun Kabisat" << endl;
    }
    else{
        cout << "Bukan Tahun Kabisat" << endl;
    }
}