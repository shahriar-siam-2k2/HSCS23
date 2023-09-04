//19-revertArr.cpp
//Question at 19-revertArr-Ques.txt
#include <iostream>
using namespace std;

int main(){
    int salary[6] = {5000, 6000, 7000, 8000, 9000, 10000};
    int temp, i, n=6;

    for(i=0 ; i < (n/2) ; i++){
        temp = salary[i];
        salary[i] = salary[n-(i+1)];
        salary[n-(i+1)] = temp;
    }
    cout << endl;
    for(i=0 ; i < n ; i++){
        cout << salary[i] << endl;
    }
    return 0;
}