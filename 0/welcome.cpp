#include <iostream>

using namespace std;

int main() {
    string str;

    cout<< "Hello World!!!";
    cout<< "My I know your name: ";
    getline(cin,str);

    cout<< "Welcome " <<str;
    
    return 0;
}