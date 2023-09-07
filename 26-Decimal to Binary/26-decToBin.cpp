#include <iostream>
using namespace std;

int main(){
    int n;
    cout << endl << "Enter decimal number (1-1000): ";
    cin >> n;

    int d=n, f=0, c=0, bin[20];
    for(int i=0 ; d !=0 ; i++){
        f = d % 2;
        bin[i] = f;
        d = d / 2;
        c++;
    }
    cout << endl << "Binary of decimal " << n << " is ";
    for(int i=c-1 ; i >= 0 ; i--){
        cout << bin[i];
    }
    cout << endl;
    return 0;
}