//28-primeNum.cpp
//Question at "28-primeNum-Ques.txt"
#include <iostream>
using namespace std;

int isPrime(int n){
    if(n <= 1){
        cout << "Not a Prime Number";
        return 0;
    }
    for(int i=2 ; i*i <= n ; i++){
        if(n % i == 0){
            cout << "Not a Prime Number";
            return 0;
        }
    }
    cout << "Prime Number";
    return 0;
}

int main(){
    int n;
    cin >> n;
    isPrime(n);
    return 0;
}