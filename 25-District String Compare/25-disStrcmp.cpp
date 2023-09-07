#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char district1[30], district2[30];
    cout << endl;
    cin >> district1 >> district2;

    if(strcmp(district1, district2) > 0){
        cout << endl << district2 << endl << district1 << endl;
    }
    else {
        cout << endl << district1 << endl << district2 << endl;
    }
    return 0;
}