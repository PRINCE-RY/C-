#include <iostream>
using namespace std;

template<bool...bits>
int reversed_binary_value(){
    
    bool binary[] = {bits...};
    int dec = 0, base = 1;
    
    for(bool bit : binary){
        dec += bit*base;
        base*=2;
    }
    
    return dec;
}
