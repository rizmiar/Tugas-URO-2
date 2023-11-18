#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b;
    b = (a*2);
    for (int i=0; i<(b/2+1); i++){
        for (int n=0; n<i; n++){
            cout << "*";
        }
        if (i!=0){
            cout<<endl;
        }
    }
    for (int i=b-(b/2+1); i>0; i--){
        for (int n=i; n>0; n--){
            cout << "*";
        }
        if (i!=1){
            cout<<endl;
        }
    }
}