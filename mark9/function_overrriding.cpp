#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Default animal sound"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Woof WOOF!"<<endl;
    }
};

class PetDog: public Dog{};

int main(){
    Dog d;
    // d.speak();
    PetDog pd;
    pd.Animal::speak();

    return 0;
}   