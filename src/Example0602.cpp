#include <iostream>
using namespace std;

int main(){
   int bills[] = {10, 20, 50};
   int* p = bills;

   cout << *p << "," << *(p+1) << "," << *(p+2) << endl;
   bills[2] = 100;
   *(p+2) = 500;

   int* dbills = new int[3]{10,20,50};
   cout << *dbills << "," << *(dbills+1) << "," << *(dbills+2) << endl;
   cout << dbills[0] << "," << dbills[1] << "," << dbills[2] << endl;
   
   delete [] dbills; // Free the allocated memory

    
    return 0;
}
