#include <iostream>
#include <string>
using namespace std;

enum class BillKind {ONE, FIVE, TEN, TWENTY};

struct CashInOneBillKind {
    BillKind kind;
    int count;
};

struct Cash {
    CashInOneBillKind one;
    CashInOneBillKind five;
    CashInOneBillKind ten;
    CashInOneBillKind twenty;
};

int totalCash(Cash& c) {
    return c.one.count * 1 
    + 
    c.five.count 
    * 5 
    + 
    c.ten.count 
    * 10 
    + 
    c.twenty.count 
    * 20;
}

int main (){
   Cash inWallet = {
       {BillKind::ONE, 2},
       {BillKind::FIVE, 3},
       {BillKind::TEN, 1},
       {BillKind::TWENTY, 3}
   };

    cout << "Total cash in wallet: " << totalCash(inWallet) << endl;

    return 0;
}