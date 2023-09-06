//21-charFind.cpp
//Question at 21-charFind-Ques.txt
#include <iostream>
using namespace std;

int main(){
    char name[20], key;
    cout << endl;
    cin >> name;
    cin >> key;

    for(int i=0 ; name[i] != '\n' ; i++){
        if(name[i]==key){
            cout << endl << "yes" << endl;
            return 0;
        }
    }
    cout << endl << "no" << endl;
    return 0;
}