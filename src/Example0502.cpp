#include <iostream>
#include <string>

using namespace std;

int main(){
    int age;
    string fullName;

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();
    
    cout << "Enter full name:";
    getline(cin, fullName);
    
    cout << "Hello, you are " << age << " years old, and your full name is " << fullName << endl;
    // ignore the newline character left in the input buffer;

    return 0;
}