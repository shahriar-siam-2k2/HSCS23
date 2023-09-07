#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int name_length;
    char name[100];
    cout << endl;
    cin >> name;
    name_length = strlen(name);
    cout << endl << "The length of my name " << name << " is " << name_length << " characters." << endl;
    return 0;
}