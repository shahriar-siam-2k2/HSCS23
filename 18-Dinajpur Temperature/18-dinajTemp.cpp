//18-dinajTemp.cpp
//Ques at 18-dinajTemp-Ques.txt
#include <iostream>
using namespace std;

int main(){
    double temp[10] = {25.4, 25.01, 24.06, 23.7, 22.9, 22.1, 21.6, 22, 21.03, 20.5};
    double sum = 0;

    for(int i=0 ; i<10 ; i++){
        sum = sum + temp[i];
    }

    cout << endl << sum / 10 << endl;
    return 0;
}