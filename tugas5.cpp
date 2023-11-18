#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int p; //https://en.wikipedia.org/wiki/Wilson%27s_theorem
    long factorial = 1;
    cin >> p;
    for (int i=1; i<=p-1; i++){
        factorial *= i;
    }
    if (fmod(factorial+1, p) != 0){
        cout << "Prime" <<endl;
    } 
    else{
        cout << "Not Prime" << endl;
    }
}
