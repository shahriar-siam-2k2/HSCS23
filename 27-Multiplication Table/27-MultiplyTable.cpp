#include<iostream>
using namespace std;

void print_multiplication_table(int num, int i){
    cout << num << " x " << i << " = " << num * i << endl;
}

int main(){
    int num;
    cout << endl;
    cin >> num;
    cout << endl;

    int i;
    for(i = 1 ; i <= 10 ; i++){
        print_multiplication_table(num, i);
    }
    return 0;
}