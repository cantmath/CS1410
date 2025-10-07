#include <iostream>
using namespace std;

void reduce_balance(int* p, int by) {
    *p = *p - by;
}
// Main function
int main() {
    int balance = 85;
    int* ptr = &balance;
    cout << "Balance: " << *ptr << endl;

    int withdraw = 15;
    reduce_balance(ptr, withdraw);
    cout << balance << endl;

    int* dbalance = new int;
    *dbalance = 100;
    cout << *dbalance << endl;
    cout << dbalance << endl;

    delete dbalance; // Free the allocated memory
    return 0;
}