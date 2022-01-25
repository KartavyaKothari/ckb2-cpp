#include<bits/stdc++.h>
using namespace std;

class Citizen{
    string aadhaar;
    int atm_balance;
    int age;

    public:
    string name;

    Citizen(string n, string ad, int a, int ab){
        name = n;
        age = a;
        atm_balance = ab;
        aadhaar = ad;
    }

    void introduce(){
        cout<<"Hi, my name is "<<name<<", I am "<<age<<" years old"<<endl;
    }

    friend class Government;
    friend void hackerman(Citizen *c);
};

void hackerman(Citizen* c){
    cout<<"Hacking details:"<<endl;
    cout<<"Name: "<<c->name<<endl;
    cout<<"Age: "<<c->age<<endl;
    cout<<"Aadhaar: "<<c->aadhaar<<endl;
    cout<<"Balance: "<<c->atm_balance<<endl;
}

class Government{
    public:
    void tax_raid(Citizen* c){
        cout<<"Tax raid details:"<<endl;
        cout<<"Name: "<<c->name<<endl;
        cout<<"Age: "<<c->age<<endl;
        cout<<"Aadhaar: "<<c->aadhaar<<endl;
        cout<<"Balance: "<<c->atm_balance<<endl;
    }
};

int main(){
    Citizen *c = new Citizen("Sushanth","12344321",19,45000000);
    c->introduce();
    cout<<endl;

    Government g;
    g.tax_raid(c);

    cout<<endl;
    hackerman(c);

    return 0;
}