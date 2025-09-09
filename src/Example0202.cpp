#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Enter Day: ";
    string day;

    cin >> day; 

    if(day == "sun" || day == "sat"){
        cout << "This is a weekend" << endl;

    } else {
        cout << "This is a weekday" << endl;
    }

    return 0;
}