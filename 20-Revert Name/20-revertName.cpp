//20-revertName.cpp
//Question at 20-revertName-Ques.txt
#include <iostream>
using namespace std;

int main(){
    char name[20], temp;

    cout << endl;
    cin >> name;

    int len=0;
    for(int i=0 ; name[i] != '\0' ; i++){
        len++;
    }

    for(int i=0 ; i<(len/2) ; i++){
        temp = name[i];
        name[i] = name[len-(i+1)];
        name[len-(i+1)] = temp;
    }

    for(int i=0 ; i<len ; i++){
        cout << name[i];
    }
    cout << endl;
    return 0;
}