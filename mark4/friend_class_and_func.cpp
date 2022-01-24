#include<bits/stdc++.h>
using namespace std;

class Citizen{
    private:
    int atm_pin;
    int bank_balance;

    public:
    friend class Government;
    friend void backdoor(Citizen c);
};

class Government{
    public:
    void hackerman(Citizen c){
        cout<<c.atm_pin<<" "<<c.bank_balance;
    }
};

void backdoor(Citizen c){
    cout<<c.atm_pin<<" "<<c.bank_balance;
}

int main(){

    return 0;
}